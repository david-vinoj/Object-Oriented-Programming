#include <iostream>
using namespace std;


class RBI
{
    public:
        int wdlimit,intrate,minbal;
        
        void GetWithdrawalLimit()
        {
            cout<<"Enter maximum withdrawal limit :";
            cin>>wdlimit;
        }
        
        void GetInterestRate()
        {
            cout<<"Enter Interest Rate :";
            cin>>intrate;
        }
        
        void MinBal()
        {
            cout<<"Enter Minimum Balance :";
            cin>>minbal;
        }
        
        friend class Account;
};

class Customer
{
    public:
        string name;
        int custid;
        
        Customer()
        {
            cout<<endl<<"Enter name :";
            cin>>name;
            cout<<"Enter customer id :";
            cin>>custid;
        }
        
        friend class Account;
};

class Account
{
    public:
        int accno;
        int balance,maintenance;
        Account()
        {
            cout<<endl<<"Enter account number :";
            cin>>accno;
            cout<<"Enter balance :";
            cin>>balance;
            maintenance=0;
        }
        
        void withdraw(RBI &r)
        {
            int amt;
            cout<<"Enter Amount to withdraw :";
            cin>>amt;
            if(amt>r.wdlimit)
                cout<<endl<<"Amount excced withdraw limit";
            else
            {
                balance-=amt;
                if(balance<r.minbal)
                {
                    cout<<endl<<"Balence less than min bal\npay maintenance charge 300";
                    maintenance=300;
                    
                }
            }
                
        }
        
        void showBal(Customer &t)
        {
            cout<<endl<<"customer id :"<<t.custid<<endl;
            cout<<"balance: "<<balance<<endl;
        }
        
};

class SBI
{
    public:
         Customer c;
         Account a;
};

int main()
{
    RBI r;
    SBI s;
    r.GetWithdrawalLimit();
    r.MinBal();
    s.a.showBal(s.c);
    s.a.withdraw(r);
    s.a.showBal(s.c);
    
    
    return 0;
}
