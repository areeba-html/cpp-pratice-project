#include<iostream>
#include<string>
using namespace std;

class BankAccount{
	public:
		string accountName;
	private:
	    int accountNumber;
		double balance;
	public:
	     BankAccount(){
	     	balance=0;
		 };
	void withdraMoney(double amount){
		if(amount<=balance){
			balance=balance-amount;
			cout<<"Money withdraw successfully!"<<endl;
			cout<<"Remaining balance="<<balance<<endl;
		}
	    else{
	    	cout<<"Entered amount is not enough!"<<endl;
		}	
	};
	void createAccount(){
		cout<<"Enter Account Name :"<<endl;
		cin>>accountName;
		
		cout<<"Enter Account Number:"<<endl;
		cin>>accountNumber;
		
		cout<<"Enter initial balance:"<<endl;
		cin>>balance;
		
		cout<<"Account Created!"<<endl;
	}
	void depositMoney(double amount){
		balance=balance+amount;
		cout<<"Money deposit sccessfully!"<<endl;
		cout<<"New balance ="<<balance<<endl;
	}
	void checkbalance(){
		cout<<"your current balance is:"<<balance<<endl;
	}	 			
};

int main(){
	BankAccount n1;
	n1.createAccount();
	n1.depositMoney(500);
	n1.withdraMoney(200);
	n1.checkbalance();
	return 0;
}
