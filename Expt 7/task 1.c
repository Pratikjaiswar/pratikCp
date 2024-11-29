 /*
 EXP NO : 7.1
 TITLE : WAP TO FIND the largest element in an array
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */

#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int largest = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
}
printf("The largest element in the array is: %d\n", largest);
return 0;
}

/*
OUTPUT :
Enter the number of elements in the array: 5
Enter 5 elements:
45 18 63 69 77
The largest element in the array is: 77
*/
