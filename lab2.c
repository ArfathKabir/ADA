#include<stdio.h>
int gcd(int m, int n)
{
if(m==n)
return m;
if(m>n)
return gcd(m-n,n);
if(m<n)
return gcd(m,n-m);
}

int main()
{
int m,n;
int res;
printf("Enter two numbers ");
scanf("%d",&m);
scanf("%d",&n);
res=gcd(m,n);
printf("%d",res);
}
