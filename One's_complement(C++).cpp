/*Write C++ program for storing binary number using doubly linked lists. Write functionsa) 
a)To compute 1‘s and 2‘s complement
b) Add two binary numbers */

#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	int data;
	node *next;
	node *prev;
	public:
		node *create(node *head);
		void display(node *head);
		void insert_at_begin(node *head,int x);
		void insert_at_end(node *head,int x);
		node* ones_complement(node *head);
		void twos_complement(node *head);
		void add(node *head,node *head1);	
};
node* node::create(node *head)
{
	head=new node;
	head->data=0;
	head->next=NULL;
	head->prev=NULL;
	return head;
}
void node :: display(node *head)
	{
		node *temp;
		temp=head;
		cout<<"\nLinked List is:= ";
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
			cout<<temp->data<<"\t";
		}
	}

void node :: insert_at_begin(node *head,int x)
{
	node *nw,*temp;
	nw=new node;
	nw->data=x;		
	nw->next=nw->prev=NULL;
		
	if(head->next==NULL)
	{
		head->next=nw;
		nw->prev=head;
	}
	else
	{
		nw->next=head->next;
		head->next->prev=nw;
		head->next=nw;
		nw->prev=head;
	}
	head->data++;
}
void node :: insert_at_end(node *head,int x)
{
	node *nw,*temp;
	nw=new node;
	nw->data=x;
	nw->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=nw;
	nw->prev=temp;
	head->data++;
}
node* node::ones_complement(node *head)
{
	node *temp,*head1;
	head1=create(head1);
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->next->data==0)
		{
			insert_at_end(head1,1);
		}
		else if(temp->next->data==1)
		{
			insert_at_end(head1,0);
		}
		else
		{
			break;
		}
		temp=temp->next;
	}
	display(head1);
	return(head1);
}
void node::twos_complement(node *head)
{
	node *temp,*head2;
	int carry=1;
	head2=create(head2);
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	while(temp->prev!=NULL)
	{
		if(temp->data==1 && carry==1)
		{
			insert_at_begin(head2,0);
		}
		else if(temp->data==0 && carry==1)
		{
			insert_at_begin(head2,1);
			carry=0;
		}
		else
		{
			insert_at_begin(head2,temp->data);
		}
		temp=temp->prev;
	}
	display(head2);
}
void node::add(node *head,node *head1)
{
	node *temp1,*temp2,*ahead;
	int carry=0,sum=0;
		ahead=create(ahead);
		temp1=head;
		temp2=head1;
		while(temp1->next!=NULL)
			temp1=temp1->next;
		while(temp2->next!=NULL)
			temp2=temp2->next;
		while(temp1->prev!=NULL && temp2->prev!=NULL)
		{
			sum=(temp1->data+temp2->data+carry)%2;			
			insert_at_begin(ahead,sum);
			carry=(temp1->data+temp2->data+carry)/2;
			
			temp1=temp1->prev;
			temp2=temp2->prev;
		}
		if(carry==1)
		{
			insert_at_begin(ahead,1);
		}
		display(ahead);
}
int main()
{
	node s;
	node *head1,*head2,*head3,*head4;
	int ch,i,x;
	
	
	while(1)
	{
		cout<<"\n---------PROGRAM MENU---------";
		cout<<"\n 1.Create head node of Two Binary Numbers";
		cout<<"\n 2.Insert number or node ( Binary Number) ";
		cout<<"\n 3.1's Complement of Two Binary Numbers";
		cout<<"\n 4.2's Complement of Two Binary Numbers";
		cout<<"\n 5.Addition of Two Binary Numbers";
		cout<<"\n 6.Exit";
		cout<<"\n Enter Your Choice = ";
		cin>>ch;

		switch(ch)
		{
			case 1: head1=s.create(head1);
				s.display(head1);
				head2=s.create(head2);
				s.display(head2);
			break;

			case 2:
				cout<<"\nEnter first 4 digit binary number = ";
				for(i=0;i<4;i++)
				{
					cin>>x;
					s.insert_at_end(head1,x);
				}
				cout<<"\nFirst Binary Number is= \n";
				s.display(head1);
				cout<<"\nEnter second 4 digit binary number = ";
				for(i=0;i<4;i++)
				{
					cin>>x;
					s.insert_at_end(head2,x);
				}
				cout<<"\nSecond Binary Number is= \n";
				s.display(head2);	
			break;

			case 3:
				cout<<"\n1's Complement of First Binary Number=\n";
				head3=s.ones_complement(head1);
				cout<<"\n1's Complement of Second Binary Number=\n";
			        head4=s.ones_complement(head2);
			break;

			case 4:
				cout<<"\n2's Complement of First Binary Number=\n";
				s.twos_complement(head3); 
				cout<<"\n2's Complement of Second Binary Number=\n";
				s.twos_complement(head4); 
			break;
		
			case 5:s.add(head1,head2);
			break;

			case 6:exit(0);

		}
		
		
		
	}
	return 0;
}