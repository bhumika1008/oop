#include<iostream>
using namespace std;

class Student{
	protected:
		int roll_no;
		string name;
	public:
		void readStudent(){
			cout<<"Enter Roll No: ";
			cin>>roll_no;
			cout<<"Enter Name: ";
			cin>>name;
		}
	void dispStudent(){
		cout<<"Roll No: "<<roll_no<<endl;
		cout<<"Name: "<<name<<endl;
	}	 
};

class Test:virtual public Student{
	protected:
	    float marks[2];
	public:
		void readTest(){
			for(int i=0;i<2;i++){
				cout<<"Enter marks in subject "<<i+1<<" : "<<endl;
				cin>>marks[i];
			}
		}
		void dispTest(){
			for(int i=0;i<2;i++){
				cout<<"Marks in subject "<<i+1<<" : "<<marks[i]<<endl;
			}
		}
};


class Sports:virtual public Student{
	protected:
    	float score;
	public:
		void readSports(){
			cout<<"Enter Sports Score: ";
			cin>>score;
		}
		void dispSports(){
			cout<<"Sports Score: "<<score<<endl;
		}
};

class Result: public Test,public Sports{
	float total;
    public:
    	void calculateTotal(){
		 total=marks[0]+marks[1]+score;
		}
		void dispResult(){
		 dispStudent();
		 dispTest();
		 dispSports();
		 cout<<"Total Marks(Test+sports): "<<total<<endl;
		}
};

int main(){
	Result r;
	r.readStudent();
	r.readTest();
	r.readSports();
	r.calculateTotal();
	cout<<"-----RESULT------"<<endl;
	r.dispResult();
return 0;
}
