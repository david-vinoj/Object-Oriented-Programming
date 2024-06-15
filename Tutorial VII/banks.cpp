#include<iostream>
using namespace std;
static int count=1;

class customer{
	//Personal Details ...
	int custid,phone;
	string name,loc;

	// Few functions ...
	public:
		customer()
		{
			custid=count;
			count=count+1;	
		}
		
		void getdata()
		{
			cout<<" Kindly enter name: "<<endl;
			cin>>name;
			cout<<" Kindly enter Phone number: "<<endl;
			cin>>phone;
			cout<<" Kindly enter location: "<<endl;
			cin>>accno;
		}
		
		void display()
		{
			cout<<" Customer ID: "<<custid<<endl;
			cout<<" Name: "<<name<<endl;
			cout<<" Phone: "<<phone<<endl;
			cout<<" LOcation: "<<loc<<endl;	
		}
	
		//hasA friend relationship with Account
		friend class account;
};

Class account{
	// Account Detail ...
	string accno,acctype,acclevel;
	int balance;
	
	// Few functions ...
	public:
		void getdata()
			{
				cout<<" Kindly enter account number: "<<endl;
				cin>>accno;
				cout<<" Kindly enter account type: "<<endl;
				cin>>acctype;
				cout<<" Kindly enter account level: "<<endl;
				cin>>acclevel;
				cout<<" Kindly enter account balance: "<<endl;
				cin>>balance;
			}
			
			void display()
			{
				cout<<" Account Number: "<<accno<<endl;
				cout<<" Account Type: "<<acctype<<endl;
				cout<<" Account Level: "<<acclevel<<endl;
				cout<<" Account Balance: "<<balance<<endl;	
			}
			
			//hasA friend relationship with Customer
			friend class customer;
};

class RBI : public customer,public account {
/*Customer c; Account a;    //has A relationship
Public double GetInterestRate() {    }
Public double GetWithdrawalLimit() {    }*/


	double interestrate,withdrawallimit;
	int rate,time,
	
	public:
		void double getinterestrate()
		{
			 returns=(P+r)/n*t;
          		 return A;
		}
		
		void double getwithdrawallimit()
		{
			if(acctype=="SAVINGS" && acclevel=="POOR")
               		withdrawallimit = 3000;
          		else if(acctype=="SAVINGS" && acclevel=="RICH")
               		withdrawallimit = 5000;
       		else if(acctype=="CLASSIC" && acclevel=="POOR")
       			withdrawallimit = 4000;
       		else if(acctype=="CLASSIC" && acclevel=="RICH")
       			withdrawallimit = 6000;
          		
      			return withdrawallimit;
       	}
};
Class SBI: public RBI
{
//Use RBI functionality or define own functionality.
}
Class ICICI: public RBI
{
//Use RBI functionality or define own functionality.
}
