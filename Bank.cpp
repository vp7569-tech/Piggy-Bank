#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Bank
{
	public:
	 string name;
	  int acno;
	  char actype[4];
	  float balance;
	  public:
	  	void display();
	  	void deposite();
	  	void withdraw();
	  	void display_details();
	  	
};
void Bank::display()
{
	cout<<"NEW ACCOUNT"<<endl;
	cout<<"Enter the Name of the depositor"<<endl;
   // cin>>name;
   //cin.getline(string name);
   getline(cin>>ws,name);         //have to learn
	//puts(name);
//	gets.line(name);
	
	cout<<"Enter the Account number "<<endl;
	cin>>acno;
	cout<<"Enter the Account Type : (CURR/SAVG/FD/RD/DMAT) "<<endl;
    cin>>actype;
	cout<<"Enter the amount to deposit"<<endl;
	cin>>balance;
	
}
void Bank::deposite()
{
	float more;
	cout<<"DEPOSITE"<<endl;
	cout<<"Enter the amount to depositer"<<endl;
	cin>>more;
	balance+=more;
	
}
void Bank::withdraw()
{
  float amt;
  cout<<"WITHDRAWL"<<endl;
  cout<<"Enter the amount to withdrawl"<<endl;
  cin>>amt;
  balance-=amt;
  
}
void Bank::display_details()
{
 cout<<"Account Details"<<endl;
cout<<"Name of the depositor : "<<name<<endl;
cout<<"Account Number        : "<<acno<<endl;
cout<<"Account Type          : "<<actype<<endl;
cout<<"Balance               : "<<balance<<endl;
}
int main()
{
  Bank obj;
  int choice=1;
  while(choice!=0)
  {
  	cout<<"\n\n";
	cout<<"\t\t\t\t\t\t";
  	cout<<"e-Balance sheet";
  	cout<<"\n\n";
	cout<<"\t\t\t\t\t";
	cout<<"Enter 0 to exit";
	cout<<"\n\n";
	cout<<"\t\t\t\t\t";
	cout<<"1.Initialize a new acc";
	cout<<"\n\n";
	cout<<"\t\t\t\t\t";
	cout<<"2.Deposit";
	cout<<"\n\n";
	cout<<"\t\t\t\t\t";
	cout<<"3.Withdraw";
	cout<<"\n\n";
	cout<<"\t\t\t\t\t";
	cout<<"4.See A/c Status";
	cin>>choice;
	switch(choice)
	{
		case 0:obj.display_details();
		cout<<"EXIT PROGRAMME";
		break;
		case 1 : obj.display();
		break;
	    case 2: obj.deposite();
		break;
	    case 3 : obj.withdraw();
		break;
	    case 4: obj.display_details();
		break;
	    default: cout<<"Wrong Option"<<endl;
    }
  }
  return 0;
}	


