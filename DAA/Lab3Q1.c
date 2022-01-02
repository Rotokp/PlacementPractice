#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void insertSort(int * arr, int n) {
  int x, j;
  for (int i = 1; i < n; i++) {
    x = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > x) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = x;
  }
}
int main() {
  int * arr, n, choice;
  time_t start, end, total;
  printf("Enter Size of Array:- ");
  scanf("%d", & n);
  int mood = 1;
  while (mood) {
    printf("Menu:- \n");
    printf("1.Compute For Best Case\n");
    printf("2.Compute For Average Case\n");
    printf("3.Compute for Worst Case\n");
    printf("4.Exit From Program\n");
    printf("\nEnter Your Choice:- ");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      printf("\nEnter %d Numbers in ascending order:- ", n);
      start = clock();
      for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
      }
      insertSort(arr, n);
      end = clock();
      total = end - start;
      printf("Time Taken For this operation in seconds is %lf\n", (double)(total / CLOCKS_PER_SEC));
      break;
    case 2:
      printf("\nEnter %d Numbers in random order:- ", n);
      start = clock();
      for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
      }
      insertSort(arr, n);
      end = clock();
      total = end - start;
      printf("Time Taken For this operation in seconds is %lf\n", (double)(total / CLOCKS_PER_SEC));
      break;
    case 3:
      printf("\nEnter %d Numbers in descending order:- ", n);
      start = clock();
      for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
      }
      insertSort(arr, n);
      end = clock();
      total = end - start;
      printf("Time Taken For this operation in seconds is %lf\n", (double)(total / CLOCKS_PER_SEC));
      break;
    case 4:
      mood = 0;
      break;
    default:
      printf("\n Invalid Input Try Again\n");
      break;
    }
  }
  return 0;
}