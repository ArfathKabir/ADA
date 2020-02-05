#include<stdio.h>

void towerofhanoi(int n,char first, char last,char mid)
{
if(n==1)
{
printf("\n move disk 1 from %c to %c",first,last);
return;
}
towerofhanoi(n-1,first,mid,last);
printf("\n Move disk %d from %c to %c",n,first,last);
towerofhanoi(n-1,mid,last,first);
}
int main()
{ 
int n;
printf("Enter number");
scanf("%d",&n);
towerofhanoi(n,'A','C','B');
return 0;
}
