/*Tower of hanoi */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void tower (int n,char s,char t,char d)
{
    if(n==0)
    return;
    tower(n-1,s,d,t);
    printf("\n move disk %d from %c to %c",n,s,d);
    tower(n-1,t,s,d);
}

void main()
{
    int n;
    printf("Enter number of disc :\n");
    scanf("%d",&n);

    tower(n,'A','B','C');

    printf("\n Total number of moves = %d",(int)pow(2,n)-1);
}
