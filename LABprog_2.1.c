/*Menu driven C program to insert an element at a given position,delete,display and exit*/

#include<stdio.h>
#include<stdlib.h>

int a[10],pos,elem,n=0;

void create ();
void display ();
void insert ();
void delete ();

void main()
{
    int choice;

    
        printf("\n -----MENU----- \n");
        printf("1.create \n");
        printf("2.display \n");
        printf("3.insert \n");
        printf("4.delete \n");
        printf("5.exit");
        
    while(1)
    {
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : create ();
            break;
            case 2 : display ();
            break;
            case 3 : insert ();
            break;
            case 4 : delete ();
            break;
            case 5 : exit(0);
            break;
            default : printf("INVALID");
        }
    }
    
}

void create ()
{
    int i;
    printf("\n Enter the number of elements");
    scanf("%d",&n);

    printf("\n Enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void display ()
{
    int i;
    if(n==0)
    {
        printf("\n Create array first ");
        return;
    }
    printf("\n Array Elements are ");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}

void insert ()
{
    int i;
    if(n==10)
    {
        printf("\n Array is full.Insertion not possible");
        return;
    }
    do
    {
        printf("\n Enter a valid position where element is to be inserted");
        scanf("%d",pos);
    }
    while(pos>n);
    printf("\n Enter the value to be inserted");
    scanf("%d",&elem);
    
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=elem;
    n=n+1;
}

void delete ()
{
    int i;
    if(n==0)
    {
        printf("\n Array is empty and no element to delete");
        return;
    }
    do
    {
        printf("\n Enter a valid position from where element is to be deleted");
        scanf("%d",&pos);
    }
    while(pos>=n);
    elem=a[pos];
    printf("\n Deleted element is : \n",elem);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
}
