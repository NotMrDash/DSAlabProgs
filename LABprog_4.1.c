/* Evaluation of Suffix expression with single digit operands and operators: +, -, *, /, %, ^ */



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int stack[20],top=-1;
void push(int symbol)
{
    top = top + 1;
    stack[top]=symbol;
}
int pop()
{
    if(top==-1)
        printf("Stack is empty");
    else
    {
        int element=stack[top];
        top=top-1;
        return(element);
    }
}
void main()
{
	int len,i,res,op1,op2;
	char postfix[20],symbol;
	printf("Enter the expression : ");
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
				case '+':
					res=op1+op2;
					break;
				case '-':
					res=op1-op2;
					break;
				case '*':
					res=op1*op2;
					break;
				case '/':
					res=op1/op2;
					break;
                default:printf("Invalid operator.");
			}
			push(res);
		}
	}
	printf("%d",stack[top]);
}



























































/*
#include<stdio.h>
#include<ctype.h>

int top=-1;
float eval_postfix(char[]);
void push(float);
float pop;

main()
{
    char postfix[20];
    float result;
    printf("\n Enter postfix expression \n");
    scanf("%s",postfix);
    result=eval_postfix(postfix);
    printf("\n The result =%f \n",result);
}

float eval_postfix(char postfix[])
{
    int i=0,k;
    char ch,op1,op2;
    float res;

    while(postfix[i]!='\0')
    {
        ch=postfix[i];
        if(digit(ch))
        {
            k=ch='0';
            push(k);
        }
        else
        {
            op2=pop();
            op1=pop();

            switch(ch)
            {
                case '+' : push(op1+op2);
                break;
                case '-' : push(op1-op2);
                break;
                case '*' : push(op1*op2);
                break;
                case '/' : push(op1/op2);
                break;
                case '^' : push(op1^op2);
                break;
                default : printf("\n Illegal Operator \n");
                
                exit(0);

            }
        }
    }
    
    i++;
    
}
*/
