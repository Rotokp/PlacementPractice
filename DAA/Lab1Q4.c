#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Swapp(int a, int b, int c)
{
    swap(&a,&b);
    swap(&a,&c);
    printf("A=%d , B=%d , C=%d",a,b,c);
}
int main()
{
    int a=10,b=5,c=0;
    Swapp(a,b,c);
    return 0;
}