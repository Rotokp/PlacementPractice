#include<stdio.h>
int main(){
int n,i,m=0,a=0,c=0;
printf("Enter a number:\n");
c++;
scanf("%d",&n);
c++;
m=n/2;
c++;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("Number is not prime\n");
a=1;
break;
}
c++;
} c++;
if(a==0)
printf("Number is prime\n");
c++;
printf("The Count is %d\n",c);
c++;
return 0;
}