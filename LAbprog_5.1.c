/*create a sll stack,push ,pop,display,linear search,data concatenation of 2 sll integers*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node*link;
};
typedef struct node* NODE;

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
		printf("\n1.push\n2.pop\n3.display\n 4.create stack\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		/*	case 1 : printf("\nenter item to insert\n");
			scanf("%d",&item);
			push(item ,first);
			
			case 2 : printf("enter the element to be deleted\n");
			scanf("%d",&item);
			pop(first);
			
			
			case 3 : display(first);
		*/
		
		  case 1 : push ();
            break;
            case 2 : pop ();
            break;
            case 3 : display ();
            break;
            case 4 : get_node();
            break;
            case 5 : exit(0);
            
            default : printf("\n INVALID CHOICE \n");
		
		
		}
	}
	
}

NODE get_node()
{
	NODE x;
	x=(NODE)malloc(sizeof(struct node));
	if(x==NULL);
	{
		printf("insufficient memory");
		exit(0);
	}
	return x;
}
NODE push(int item , NODE first)
{
	
	NODE temp;
	temp=get_node();
	temp->info=item;
	temp->link=NULL;
	if(first==NULL)
	{
		first=temp;
	}
else
{
	temp->link=first;
	first=temp;
}
return temp;
}

NODE pop(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("list is empty");
		return NULL;
	}
	temp=first;
	temp=temp->link;
	printf("item deleted =%d\n",first->info);
	free(first);
	return temp;
	
}

void display(NODE first)
{
	NODE cur;
	if(first==NULL)
	{
		printf("list is empty\n");
		return first;
}
printf("contents of sll are\n");
cur=first;
while(cur!=NULL)	
	{
		printf("%d\t",cur->info);
		cur=cur->link;
		
	}
	printf("\n");
}



