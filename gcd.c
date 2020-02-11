#include<stdio.h>
int gcd(int a,int b)
{
 if(b==0)
 return a;
 else
 return(b,a%b);
}

int main()
{
 int a=1,b=10;
printf("gcd(%d,%d)=%d",a,b,gcd(a,b));
 a=20,b=40;
printf("gcd(%d,%d)=%d",a,b,gcd(a,b));
return 0;
}













































































