#include<stdio.h>
#include<stdlib.h>
int size;
void push(int arr[10],int*top,int*max_stack,int*item)
{
	int i;
	if(*top==(*max_stack))
	{
		printf("stack is full");
	}
	else
	{
		*top=*top+1;
		arr[*top]=item;
	
	}
}
int pop(int arr[10],int*top,int*max_stack,int*item)
{
	int i;
	if(*top==-1)
	{
		printf("stack is empty");
		return-1;
	}
	else
	{
		item=arr[*top-1];
		*top=*top-1;
		return(item);
	}
}
int display(int arr[10],int top)
{
	int i;
	for(i=0;i<=top;i++)
	printf("%d\t",arr[i]);
	printf("\n");
}
int main()
{
int arr[10],top=-1;
char choice;
printf("enter the size of the stack elements:\n");
scanf("%d",&size);
while(1)
{
	printf("\n select your choice:\n 1.push\n 2.pop \n3.display \n 4.EXIT\n your choice:");
	scanf("%c,&choice");
	
	switch(choice)
	{
		case'1':push(arr,&top);
		break;
		case'2':pop(arr,&top);
		break;
		case'3':display(arr,&top);
		break;
		case'4':exit(0);
		break;
		default:printf("invalid input");
		break;
	}
}
}

