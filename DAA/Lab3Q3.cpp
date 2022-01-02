#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int sqrt(int x)
{

    if (x == 0 || x == 1)
    return x;
  
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;   
}

void sqroot(int number){
    float temp, sqrt;
    sqrt = number / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
    printf("The square root of '%d' is '%f'", number, sqrt);
}

int main(){
    int num;
    
    printf("enter the number: \n");
    scanf("%d", &num);

    sqroot(num);
    
    return 0;
}