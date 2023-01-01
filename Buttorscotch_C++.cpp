/* Group B- Assignment No- 17

In Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set B
of students like butterscotch ice-cream. Write C/C++ program to store two sets using linked
list. compute and display-
vi.
Set of students who like either vanilla or butterscotch or both
vii.
Set of students who like both vanilla and butterscotch
viii. Set of students who like only vanilla not butterscotch
ix. Set of students who like only butterscotch not vanilla
x. Number of students who like neither vanilla nor butterscotch
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
  int data;
  node *next;

public:
   node * createlist(node *);
   void insertnumber(node *,int);
   int search(node *, int);
   void unionop(node *, node *);
   int intersection(node *, node *);
   void setaminb(node *, node *);
   void setbmina(node *, node *);
   void display(node *);
};

node* node:: createlist(node *head)
{
  head=new node;
  head->data=0;
  head->next=NULL;
  
  return(head);
}

void node::insertnumber(node *head, int ndata)
{
  node * nw,*temp;

  nw=new node;
  nw->data=ndata;
  nw->next=NULL;

  temp=head;
   
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
 
  temp->next=nw;
  head->data++;
}
void node::display(node *head)
{
  node *temp;
   
   temp=head->next;
    cout<<" (";
  while(temp!=NULL)
  {
   	cout<<temp->data;
   	if(temp->next!=NULL)
   	{
		cout<<" , ";
    	}
   	
	temp=temp->next;
  }
 
  cout<<" )";
}


int node::search(node  *head, int sdata)
{
  node *temp;
  
  temp=head;
  while(temp->next!=NULL)
  {
  	if(temp->next->data==sdata)
  	{
              return(1);
   	}
       else
	{
          temp=temp->next;
              
         }
   }
 
 return 0;
}

void node::unionop(node *setA, node * setB)
{
  node *setC, *temp;
  
  setC=createlist(setC);

  temp=setA->next;
  while(temp!=NULL)
  {
     if(search(setC, temp->data)==0)
      {
         insertnumber(setC, temp->data);

      }
     else
      temp=temp->next;
  }

  temp=setB->next;
  while(temp!=NULL)
  {
     if(search(setC, temp->data)==0)
      {
         insertnumber(setC, temp->data);

      }
     else
      temp=temp->next;
  }

display(setC);

}
  

int node::intersection(node *setA, node * setB)
{
 	 node *setC, *temp;
         int count=0;
  
	setC=createlist(setC);

 	 temp=setB->next;
 
	  while(temp!=NULL)
	  {
	     if(search(setA, temp->data)==1)
	      {
	         insertnumber(setC, temp->data);
		 count ++;

	      }
	      temp=temp->next;
 	 }

	display(setC);
return count;
}


void node::setaminb(node * setA, node *setB)
{
	node *setC, *temp;
    
	setC=createlist(setC);

	  temp=setA->next;
 
	  while(temp!=NULL)
	  {
	     if(search(setB, temp->data)==0)
	      {
	         insertnumber(setC, temp->data);
	
	      }
	     
	      temp=temp->next;
	  }

	display(setC);

}
 
void node::setbmina(node * setA, node *setB)
{
	node *setC, *temp;
    
	setC=createlist(setC);

	  temp=setB->next;
 
	  while(temp!=NULL)
	  {
	     if(search(setA, temp->data)==0)
	      {
	         insertnumber(setC, temp->data);
	
	      }
	     
	      temp=temp->next;
	  }

	display(setC);

}

int main()
{
 int c,ch,data,m,sizeA,sizeB, i;

node * setA, *setB;
node s1;

 while(1)
	{
		cout<<"\n----------Menus----------\n1. Create Linked List \n2. Set of students who like either vanilla or butterscotch or both \n3. Set of students who like both vanilla and butterscotch \n4. Set of students who like only vanilla not butterscotch\n5. Set of students who like only butterscotch not vanilla \n6. Number of students who like neither vanilla nor butterscotch  \n7. Exit \nEnter ur choice :";
		cin>>ch;

		switch(ch)
		{
			case 1:
                                cout<<"\nEnter how many students in class Second year Computer Engineering:= ";
				cin>>m;
				cout<<"\nEnter size of set A students (like Vanilla Ice-cream):=";
				cin>>sizeA;
				cout<<"\nEnter roll numbers of set A "<<sizeA<<" students (like Vanilla Ice-cream):= ";
				
				setA =s1.createlist(setA);

				for(i=0;i<sizeA;i++)
				{
					cin>>data;
                             		s1.insertnumber(setA,data);
				}
				
				cout<<"\nEnter size of set B students (like butterscotch Ice-cream):=";
				cin>>sizeB;
				cout<<"\nEnter roll numbers of set B "<<sizeA<<" students (like butterscotch Ice-cream):= ";
				
				setB =s1.createlist(setB);

				for(i=0;i<sizeB;i++)
				{
					cin>>data;
                             		s1.insertnumber(setB,data);
				}

				cout<<"\nSet A Elements are= \n ";
				s1.display(setA);
				cout<<"\nSet B Elements are= \n ";
 				s1.display(setB);
			break;
			case 2:
                                cout<<"\nSet of students who like either vanilla or butterscotch or both= \n "; 
                                s1.unionop(setA, setB);
			break;
			case 3:
 				cout<<"\nSet of students who like both vanilla and butterscotch= \n "; 
				 c=s1.intersection(setA, setB);
				
			break;
			case 4:
 				cout<<"\nSet of students who like only vanilla not butterscotch= \n "; 
				s1.setaminb(setA, setB);
				
			break;
			case 5:
 				cout<<"\nSet of students who like only butterscotch not vanilla= \n "; 
				s1.setbmina(setA, setB);
				
			break;
			case 6:
				cout<<"\nNumber of students who like neither vanilla nor butterscotch= "<<(m-(sizeA+sizeB-c));
			break;
		
			case 7:
				exit(0);
		}
	}
 }





