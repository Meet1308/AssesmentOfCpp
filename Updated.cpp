#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class game
{
	string name;
	int round,ch,choice;
	public:
	void print()
	{
	cout<<"*--*--*--*--*--*--*--*--*--*--*";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t   NAME  \t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl; 
	
	cout<<"Enter your name : "<<endl;
	cin>>name;
	cout<<endl; 
	
	cout<<"*--*--*--*--*--*--*--*--*--*--*";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t   ROUNDS  \t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl; 
	
	cout<<name<<" How many rounds you want to play ? : "<<endl;
	cin>>round;
	
	cout<<"*--*--*--*--*--*--*--*--*--*--*";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t   GAME  \t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	
	
	cout<<"Round number : 1/3"<<endl<<endl;
	cout<<name<<"'s score = 0"<<endl;
	cout<<"Computer's score = 0"<<endl<<endl;
	
	cout<<"1) ROCK"<<endl;
	cout<<"2) PAPER"<<endl;
	cout<<"3) SCISSOR"<<endl<<endl;
	
	cout<<"Round number : 1/3"<<endl<<endl;
	cout<<name<<"'s score = 0"<<endl;
	cout<<"Computer's score = 0"<<endl<<endl;
	
	cout<<"Select Your choice : ";
	cin>>ch;
	cout<<"Computer choice is : ";
	cin>>choice;
	
	if(ch==choice)
	{
		cout<<"Draw"<<endl<<endl;
	}
	cout<<"Round number : 2/3"<<endl<<endl;
	}
};
int main()
{
	game obj;
	obj.print();
	return 0;
}
