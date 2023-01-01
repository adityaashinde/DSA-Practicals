#include<iostream>
#include<stdlib.h>
#define MAX 10
using namespace std;
class jobqueue
{
	int rear,front;
	int queue[MAX];
public:
	void initalize();
	void insert(int x);
	int delete1();
	void display();
};
void jobqueue::initalize()
{
	int i; 
	front=rear=-1;
	for(i=0;i<MAX;i++)
	{
		queue[i]=0;
	}	
}
void jobqueue::insert(int x)
{
	if(rear==MAX-1)
	{
		cout<<"\n Job Queue is full...";
	}
	else
	{
		rear ++;
		queue[rear]=x;
		if(front==-1)
			front=0;
	}
}
int jobqueue::delete1()
{
	int data;
	if(front==-1 && rear==-1)
	{
		cout<<"\n Job queue is empty...";
	}
	data=queue[front];
	queue[front]=0;
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front ++;
	}
 return(data);
}
void jobqueue::display()
{
	int i;
	cout<<"\nOperating system Job Queue......consider 0 as Blank....\n";
	for(i=0;i<MAX;i++)
	{
		cout<<"  "<<queue[i];
	}
}
int main()
{
	jobqueue j;
	int ch,n,x;
	j.initalize();
	while(1)
	{
		cout<<"\n\n Operating system job queue...(queue size is 10)";
		cout<<"\n 1. Add Job (Insert job in queue)";
		cout<<"\n 2. Delete Job (Delete entry from queue)";
		cout<<"\n 3. Display Job queue scenario..";
		cout<<"\n 4. Exit"; 
		cout<<"\n Enter your choice=";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n Enter the job number= ";
				cin>>x;
				j.insert(x);
				j.display();
			break;
			
			case 2:
				x=j.delete1();
				if(x>0)
				{
					cout<<"\n Job number "<<x<<" is completed...\n (Deleted from the queue)";
				}
				j.display();
			break;
			
			case 3:
				j.display();
			break;
			
			case 4:
				exit(0);
		}
	}
}