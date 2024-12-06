/*
EXP NO : 10.2
 TITLE : WAP to print the elements of an array in reverse order using pointers 
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG
 */
#include <stdio.h>
int main() {
 int n;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 int *ptr = arr;
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", ptr + i);
 }
 printf("Array elements in reverse order:\n");
 for (int i = n - 1; i >= 0; i--) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 return 0;
}
 
 /* OUTPUT:-
 Enter the number of elements in the array: 5
 Enter 5 elements:
 1 2 3 4 5
 Array elements in reverse order:
 5 4 3 2 1
 */
