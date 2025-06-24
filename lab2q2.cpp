/*2.  Create a class Temperature with the member function getdata()
and display() with required data to change the temperature given
in Fahrenheit to Celsius.*/
#include<iostream>
using namespace std;

class Temperature{
	float f;
	float c;
	public:
		void getdata(){
			cout<<"Enter the temperature in Fahrenheit:";
			cin>>f;
		}
		void display(){
			c=(f-32)/1.8;
			cout<<"Temperature in celsiu= "<<c<<endl;
		}
};

int main(){
	Temperature t1;
	t1.getdata();
	t1.display();
return 0;
}
