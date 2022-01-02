#include <stdio.h>
int main() {
int n, i, a = 0,c=0;
printf("Enter positive integer: ");
c++;
scanf("%d", &n);
c++;
for (i = 2; i <= n / 2; ++i) {
if (n % i == 0) {
a = 1;
break;
} c++;
} c++;
if (n == 1) {
printf("1 is neither prime nor composite.\n");
} else {
if (a == 0)
printf("%d prime number.\n", n);
else
printf("%d not a prime number.\n", n);
}
c++;
printf("The Count is %d\n",c);
c++;
return 0;
}