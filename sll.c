#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*link;
};
typedef struct node*NODE;
NODE push();
NODE pop();
void display();
void main()
{
	NODE first=NULL;
	int choice,item;
	first==NULL;
	while(1)
	{
		printf("\n 1.push\n2.pop\n3.display\n");
		printf("\n Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter item to insert\n");
			scanf("%d",&item);
			first=push(item,first);
			break;
			case 2:first=pop(first);
			break;
			case 3:display(first);
			break;
		}
	}
}
