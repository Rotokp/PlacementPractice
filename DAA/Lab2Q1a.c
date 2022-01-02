#include <stdio.h>
#include<math.h>
int main()
{
int n,i,a = 1,c=0;
printf("Enter a number: \n");
c++;
scanf("%d", &n);
c++;
for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0) {
a = 0;
break;
} c++;
} c++;
if (n <= 1)
a = 0;
c++;
if (a == 1) {
printf("%d is a prime number\n", n);
} else {
printf("%d is not a prime number\n", n);
} c++;
printf("The Count is %d\n",c);
c++;
return 0;
}