#include<iostream>
using namespace std;

//Abstract class
class CentralBank{
	protected:
		float ird;
		float irl;
	public:
		virtual void getdata()=0;//pure virtual function
		virtual void putdata()=0;
		virtual void calculateInterestAmount()=0;
	
		
	    virtual ~CentralBank(){
		 //virtual destructor
		}
};

class NMB: public CentralBank{
	public:
		void getdata()override{
			cout<<"-------NMB Bank---------"<<endl;
			cout<<"Enter NMB interest rate for deposit: ";
			cin>>ird;
			cout<<"Enter NMB interest rate for loan: ";
			cin>>irl;
		}
		void putdata()override{
		 cout<<"--------NMB Bank Interest Rates-----------"<<endl;
		 cout<<"Deposit Interest Rate: "<<ird<<" %"<<endl;
		 cout<<"Loan Interest Rate: "<<irl<<" %"<<endl;
		}
		void calculateInterestAmount()override{
			float depositAmt,loanAmt;
			cout<<"Enter deposit Amount: ";
			cin>>depositAmt;
			cout<<"Enter loan Amount: ";
			cin>>loanAmt;
			
			float depositInterest=(depositAmt*ird)/100;
			float loanInterest=(loanAmt*irl)/100;
			
			cout<<"Deposit Interest: Rs. "<<depositInterest<<endl;
			cout<<"Loan Interest: Rs. "<<loanInterest<<endl;
		}
};

class GlobalBank: public CentralBank{
	public:
		void getdata()override{
		  cout<<"-----Global Bank-----"<<endl;
		  cout<<"Enter Global interest rate for deposit: ";
		  cin>>ird;
		  cout<<"Enter Global interest rate for loan: ";
		  cin>>irl;
		}

        void putdata()override{
		 cout<<"-------------GLobal Bank Interest Rates------------ "<<endl;
		 cout<<"Depostit Interest Rate: "<<ird<<" %"<<endl;
		 cout<<"Loan Interest Rate: "<<irl<<" %"<<endl;
		}
		
		void calculateInterestAmount()override{
			float depositAmt,loanAmt;
			cout<<"Enter deposit Amount: ";
			cin>>depositAmt;
			cout<<"Enter loan Amount: ";
			cin>>loanAmt;
			
			float depositInterest=(depositAmt*ird)/100;
			float loanInterest=(loanAmt*irl)/100;
			
			cout<<"Deposit Interest: Rs. "<<depositInterest<<endl;
			cout<<"Loan Interest: Rs. "<<loanInterest<<endl;
		}
};

int main(){
	CentralBank* bank;
	//NMB
	bank= new NMB();
	bank->getdata();
	bank->putdata();
	bank->calculateInterestAmount();
	delete bank;
	
	cout<<endl;
	
	//Global Bank
	bank= new GlobalBank;
	bank->getdata();
	bank->putdata();
	bank->calculateInterestAmount();
	delete bank;
return 0;
}	
