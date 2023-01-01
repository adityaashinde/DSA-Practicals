/*In any language program mostly syntax error occurs due to unbalancing delimiter such as
(),{},[]. Write C++ program using stack to check whether given expression is well
parenthesized or not.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int top=-1;
char stack[50];
void push(char x)
{
    top++;
    stack[top]=x;
}
void pop(char t)
{
    if(t=='}')
    {
        if(stack[top]=='{')
             top--;
    }
    else if(t==')')
    {
        if(stack[top]==')')
             top--;
    }
    else if(t==']')
    {
        if(stack[top]=='[')
             top--;
    }
}
void display()
{
    int i;
    if(top==1)
    cout<<"\nstack is Empty\n Given expression is well parenthesized....\n";
    else{
        cout<<"\nstack is not Empty\n given expression is well parenthesized....\n";
        }
}
int main()
{
    char exp[50],x,t;
    int len,i;
    cout<<"\nEnter your infix expression=";
    cin>>exp;
    cout<<"\nyour infix expression is="<<exp;

    len=strlen(exp);
    for(i=0;i<len;i++)
    {
        if((exp[i]=='{')||(exp[i]=='(')||(exp[i]=='['))
        {
            x=exp[i];
            push(x);

        }
        else if((exp[i]=='}')||(exp[i]==')')||(exp[i]==']'))
        {
            t=exp[i];
            pop(t);

        }
    }
    display();
return 0;
}
