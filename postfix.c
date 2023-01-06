#include<stdio.h>
#include<string.h>
#include<ctype.h>
int stack[2],top=-1,element;
void push(int symbol)
{
	top=top+1;
	stack[top]=symbol;
}
int pop()
{
	if (top==-1)
	printf("stack is empty");
	else
	{
		int elements =stack[top];
		top=top-1;
		return(element);
	}
}
void main()
{
	int len,i,res,op1,op2;
	char postfix[20],symbol;
	printf("enter the expression:");
	scanf("%s",postfix);
	len=strlen(postfix);
	for(i=0;i<len;i++)
	{
		symbol=postfix[i];
		if(isdigit(symbol))
		{
			push(symbol-'0');
		}
		else
		{
			op2=pop();
			op1=pop();
			
			switch(symbol)
			{
				case'+':
					res=op1+op2;
					break;
					case'-':
					res=op1-op2;
					break;
					case'*':
					res=op1*op2;
					break;
					case'/':
					res=op1/op2;
					break;			
					case'%':
					res=op1%op2;
					break;	
					case'^':
					res=op1^op2;
					break;
                default:printf("invalid operator");
			}
			push(res);
		}
	}
	printf("%d",stack[top]);
}
