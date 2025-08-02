#include<iostream>
using namespace std;

class Author{
	string name;
	string degree;
	public:
		void getdata(){
			cout<<"Enter author's name: ";
			cin.ignore(); //clear new line
			getline(cin,name);
			cout<<"Enter author's degree: ";
			cin>>degree;
		}
		void putdata(){
			cout<<"Author's name: "<<name<<endl;
			cout<<"Author's degree: "<<degree<<endl;
		}
};
class Publication{
	string pname;
	string location;
	public:
		void getdata(){
			cout<<"Enter publication name: ";
			cin>>pname;
			cout<<"Enter location: ";
			cin>>location;
		}
		void putdata(){
			cout<<"Publication name: "<<pname<<endl;
			cout<<"Location: "<<location<<endl;
		}
};
class Book{
	string title;
	float price;
	int pages;
	Author author; //aggregation
	Publication pub;
	public:
		void getdata(){
			cout<<"Enter the book title: ";
			getline(cin,title);
			cout<<"Enter the no.of pages: ";
			cin>>pages;
			cout<<"Enter the price: ";
			cin>>price;
			author.getdata();
			pub.getdata();
		}
		void putdata(){
			cout<<"Book Title: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<"No.of pages: "<<pages<<endl;
			author.putdata();
			pub.putdata();
		}
};
int main(){
	Book b;
	b.getdata();
	b.putdata();
return 0;
}
