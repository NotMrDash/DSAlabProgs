/*Menu driven C program to create an array of N elements with headings and to display them*/

#include<stdio.h>
#include<stdlib.h>

int flag,arr[],n,i,choice;

void create ();
void display ();

int main()
{
    while(1)
    {
        printf("\n Select the action to be performed: \n");
        printf("\n 1.Create \n 2.Display \n 3.Exit \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : create ();
            break;
            case 2 : display ();
            break;
            case 3 : exit(0);
            break;
            default : printf("\n Invalid \n");
            break;

        }
    }
}

void create ()
{
    printf("\n Enter the size of the array: \n");
    scanf("%d",&n);

    printf("\n Enter the array elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    flag=1;
}

void display ()
{
    if(flag==1)
    {
        printf("\n Display the array \n");
        for(i=0;i<n;i++)
        printf("\n %d \n",arr[i]);
    }
    else
    {
        printf("\n Elements are non existent");
        
    }
}
