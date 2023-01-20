/*implement stacks to perform push ,pop,demonstrate overflow and underflow,display,exit operations*/

#include<stdio.h>
#include<stdlib.h>

int stack[ ],rev[6],top=-1,k=0,size;

void push ();
void pop ();
void display ();

void main()
{
    int choice,f;
    printf("\n Enter the size of stack \n");
    scanf("%d",&size);
    printf("\n test point.1 \n");
    printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT \n");

    while(1)
    {
        printf("Enter the choice \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : push ();
            break;
            case 2 : pop ();
            break;
            case 3 : display ();
            break;
            case 4 : exit(0);
            break;
            default : printf("\n INVALID CHOICE \n");
        }
    }
}

void push ()
{
    int num;

    if(top==(size-1))
    {
        printf("\n Stack Overflow \n");
    }
    else
    {
        printf("\n Enter the number to be pushed \n");
        scanf("%d \n",&num);
        top++;
        stack[top]=num;
    }
}

void pop ()
{
    int num;
    if (top==-1)
    {
        printf("\n Stack Underflow \n");
    }
    else
    {
        num=stack[top];
        printf("\n Popped element is %d \n",num);
        top--;
    }
}

void display ()
{
    int i;
    if(top==-1)
    {
        printf("\n Stack Underflow \n");
    }
    else
    {
        printf("\n Stack Contents \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
            rev[k++]=stack[i];
        }
    }
}
