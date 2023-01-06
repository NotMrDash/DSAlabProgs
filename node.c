#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
typedef struct node NODE;
int getnode(){
	  NODE *first;
 	  first = (NODE*)malloc(sizeof (NODE));
 	   printf("enter the data\n");
     scanf("%d",&first->data);
      first->link = NULL;
  printf("the data is %d",first->data);
 	  return first;
 }
  main(){
  NODE *first;
  first = NULL;
 first = getnode();
 // printf("enter the data\n");
  //scanf("%d",&first->data);
 // first->link = NULL;
 // printf("the data is %d",first->data);
  }

