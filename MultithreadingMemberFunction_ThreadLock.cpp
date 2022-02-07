#include<iostream>
#include<mutex>
#include<thread>
using namespace std;

 

/*
    Thread Interference - If multiple threads running parallely are accessing some shared data then, there is a chance of that
    data getting corrupt. It is called as thread interference.
*/

 

mutex l;

 

class Account
{
    int balance;
public:
    Account()
    {
        balance=10000;
    }
    void deposite(int amt)
    {
        l.lock();
        for(int i=0; i<10000; i++);
        cout<<"balance before deposite  "<<balance<<endl;
        for(int i=0; i<10000; i++);
        balance=balance+amt;
        for(int i=0; i<10000; i++);
        cout<<"balance after deposite  "<<balance<<endl;
        l.unlock();
    }
    
    void withdraw(int amt)
    {
        l.lock();
        for(int i=0; i<10000; i++);
        cout<<"balance before withdraw  "<<balance<<endl;
        for(int i=0; i<10000; i++);
        balance=balance-amt;
        for(int i=0; i<10000; i++);
        cout<<"balance after withdraw  "<<balance<<endl;
        l.unlock();
    }
};

 

int main()
{
    Account acc;
    thread t1(&Account::deposite, &acc, 1000);
    thread t2(&Account::withdraw, &acc, 100);
    
    t1.join();
    t2.join();
    return 0;
}                            
                                
                            
                            
                            
                            
                            
                          
