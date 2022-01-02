#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>

#define n 3

void rounded_matrix(float a[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            float x=a[i][j];
            if(x-(int)x>=0.5)
            a[i][j]=a[i][j]+0.5;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",(int)a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int i,j;

    float a[n][n];
    printf("enter the value of array\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%f",&a[i][j]);
        }
    }

    rounded_matrix(a);

    return 0;
}