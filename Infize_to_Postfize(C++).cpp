/*
Group C- Assignment No.25
Implement C++ program for expression conversion as infix to postfix and its evaluation
using stack based on given conditions
i. Operands and operator, both must be single character.
ii. Input Postfix expression must be in a desired format.
iii. Only '+', '-', '*' and '/ ' operators are expected. */



#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 50
using namespace std;
class stack
{
	char data[MAX];
	int top;
	public:
	void initialize();
	int getTop();
	char pop();
	void push(char);
	int empty();
	int full();
}; 
void stack::initialize()
{
	top=-1;
}
int stack::getTop()
{
	if(!empty())
	return data[top];
}
char stack::pop()
{
	if(!empty())
	return data[top--];
}
void stack::push(char x)
{
	if(!full())
	data[++top]=x;
}
int stack::empty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int stack::full()
{
	if(top==MAX-1)
	return 1;
	else
	return 0;
}
int precedence(char ch)
{
	if(ch=='+'||ch=='-')
		return 1;
	else if(ch=='*'||ch=='/')
		return 2;
}
void infixtopostfix(stack s)
{
	char infix[10],postfix[10],ch,temp;
	cout<<"\n************************* INFIX TO POSTFIX CONVERSION *************************\n";
	cout<<"\nEnter the infix expression:";
	
	cin>>infix;
	cout<<"\nThe postfix expression is:";
	int i=0;
	while(infix[i]!='\0')
	{
		ch=infix[i];
		if(ch=='(')
			s.push(ch);
		else if(ch==')')
		{
			temp=s.pop();
			while(temp!='(')
			{
				cout<<temp;
				temp=s.pop();
			}
		}
		else if(isalpha(ch))
			cout<<ch;
		else
		{
			if(s.empty())
				s.push(ch);
			else
			{
				if(s.getTop()=='(')
				{
					s.push(ch);
				}
				else if(precedence(ch)>=precedence(s.getTop()))
				{
					s.push(ch);
				}
				else
				{
					while(precedence(ch)<precedence(s.getTop()))
					{
						cout<<s.pop();
					}
					s.push(ch);
				}
			}
		}
		i++;
	}
	if(i==strlen(infix))
	{
		while(!s.empty())
		{
			ch=s.pop();
			cout<<ch;
		}
	}
	cout<<"\n";

}
char operation(int digit1, int digit2, char ch)
{
 	int result;
	
	switch(ch)
	{
		case '+':
			result= digit1 + digit2;
		break;
		case '-':
			result= digit1 - digit2;
		break;
 		case '*':
			result= digit1 * digit2;
		break;
		case '/':
			result= digit1 / digit2;
		break;
  	}
return result;
}

void evaluation(stack s)
{
	char postfix[30],digit[3],ch,result;
	int len,i,j,x,k,op1,op2;
	cout<<"\n************************* POSTFIX EVALUATION *************************\n";
	cout<<"\nEnter the postfix expression: (If Operands= N then Enter Operators N-1) = ";
	cin.ignore();
	gets(postfix);
	len = strlen(postfix);
	j=0,k=0;
	for(i=0; i<len;i++)
	{
		if(postfix[i] >='0' && postfix[i]<='9')
		{
			digit[j++]=postfix[i];
		}
		else if(postfix[i]==' ')
		{
		        if(j>0)
			{
			     digit[j] = '\0';
			     x = atoi(digit);
			     s.push(x);
			     j = 0;
			}
		}
		else if(postfix[i]== '+' || postfix[i]=='-'|| postfix[i]=='*'|| postfix[i] =='/')
		{
				op2=s.pop();
				op1=s.pop();
	
				result= operation(op1,op2,postfix[i]);
				s.push(result);

		}
			
	}
   int r1=s.getTop();
   	  s.pop();
   if(s.empty())
		cout<<"\n Postfix Evaluation Answer is= "<<r1<<" \n";
else
      cout<<"\n You have entered Wrong Expression... \n";

}


int main()
{
	stack s;
	s.initialize();
	infixtopostfix(s);
	s.initialize();
	evaluation(s);
	return 0;
}







/* ****************** OUTPUT *************************************
[yogesh@localhost ~]$ ./a.out

************************* INFIX TO POSTFIX CONVERSION *************************

Enter the infix expression:(A+B)*(C-D)

The postfix expression is:AB+CD-*

************************* POSTFIX EVALUATION *************************

Enter the postfix expression: (If Operands= N then Enter Operators N-1) = 15 2 + 6 3 * +

 Postfix Evaluation Answer is= 35 
[yogesh@localhost ~]$ 

*/