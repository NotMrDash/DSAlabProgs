#include<stdio.h>
void rtoh(int n,char A,char B,char C);
main()
{
	int n,result;
	printf("enter the value of n\n");
	scanf("%d",&n);
	rtoh(n,'A','B','C');	
}
	void rtoh(int n,char A,char B,char C)
{
if(n==0)
printf("\n The disk number %d is moved from %c to %c \n",n,A,C);

else
{
	rtoh(n-1,A,C,B);
	printf("\n The disk number %d is moved from %c to %c \n",n,A,C);
	rtoh(n-1,B,A,C);	
	}	
}

