/*9. Imagine a ticket selling booth at a fair. People passing by are
requested to purchase a ticket. A ticket is priced at rs 2.50. the
booth keeps track of the number of people that have visited the
booth, and of the total amount of money collected.
Model this ticket selling booth with a class called ticketbooth
including following members.
Data members: number of people visited, total amount of money
collected

Member functions:

? Default constructor
? Static method to increment people who only
visited, ticket is not sold 
? Static method to increment people who
purchased ticket and amout
? To display all data (number of peple visited, total
ticket sold, total amount collected*/
#include<iostream>
using namespace std;
class TicketBooth{
	static int nopeople;
	static int ticketsold;
	static float total;
	public:
		TicketBooth(){
			
		}
			//Static method:Person who visited but did not buy a ticket
			static void personVisited(){
				nopeople++;
			}
			//static method:person bougt ticket
			static void sellTicket(){
				nopeople++;
				ticketsold++;
				total +=2.50;
			}
			//Dispaly the data
			static void display(){
				cout<<"No.of people who visited:"<<nopeople<<endl;
				cout<<"Ticket sold: "<<ticketsold<<endl;
				cout<<"Total amount collectd: "<<total<<endl;
			}
};
//Initialize static members
int TicketBooth::nopeople=0;
int TicketBooth::ticketsold=0;
float TicketBooth::total=0;
int main(){
	TicketBooth::personVisited();//person 1(no ticket)
	TicketBooth::sellTicket(); //person 2(buys ticket)
	TicketBooth::sellTicket();//person 3 (buys ticket)
	TicketBooth::personVisited();//person 4(no ticket)
	//Display result
	TicketBooth::display();
return 0;
}

