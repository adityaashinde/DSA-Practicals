#include<iostream>
#include<stdlib.h>
#define MAX 10
using namespace std;
class pizza
{
	int rear,front;
	int queue[MAX];
public:
	void initalize();
	void insert();
	int delete1();
	void display();
};
void pizza::initalize()
{
	int i;
	front=rear=-1;
	for(i=0;i<MAX;i++)
	{
		queue[i]=0;
	}
}
void pizza::insert(int x)
{
	if(((rear+1)%MAX)==front)
	{
		cout<<"\n circular queue is full...";
	}
	else
	{
		rear=(rear+1)%MAX;
		queue[rear]=x;
		if(front==-1)
			front=0;
	}
}
int pizza::delete1()
{
	int data;
	if(front==-1)
	{
		cout<<"\n circular queue is empty...";
	}
	data=queue[front];
	queue[front]=0;
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%MAX;
	}
return(data);
}
void pizza::display()
{
	int i;
	cout<<"\n All orders.............consider 0 as blank....\n";
	for(i=0;i<MAX;i++)
	{
		cout<<"  "<<queue[i];
	}
}

int main()
{
	pizza s1;
	int ch,n,x;
	s1.initalize();
	while(1)
	{
		cout<<"\n Xenon pizza parlor....maximum size is 10\n";
		cout<<"\n1.Accept Order (Insert order in queue)";
		cout<<"\n2.served Order (delete entry from  queue)";
		cout<<"\n3.display all order scenario..";
		cout<<"\n 4. Exit ";
		cout<<"\n Enter your choice= ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n Enter the New Order Number=  ";
				cin>>x;
				s1.insert(x);
				s1.display();
			break;

			case 2:
				x=s1.delete1();
				cout<<"\n Order number "<<x<<" is Serverd to the Customer...\n(Deleted from the Queue.)";
				s1.display();
			break;

			case 3:
				s1.display();
			break;
			case 4:
				exit(0);
		}
	}

}