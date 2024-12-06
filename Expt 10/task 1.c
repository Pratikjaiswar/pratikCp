/*
EXP NO : 10.1
 TITLE : WAP to add two numbers using pointer 
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */
// adding two numbers using pointers
#include <stdio.h>
int main() {
 int num1, num2, sum;
 int *ptr1, *ptr2, *ptrSum;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("Enter the second number: ");
 scanf("%d", &num2);
 ptr1 = &num1;
 ptr2 = &num2;
 ptrSum = &sum;
 *ptrSum = *ptr1 + *ptr2;
 printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);
 return 0;
}
/*
OUTPUT:- Enter the first number: 10
Enter the second number: 33
Sum of 10 and 33 is 43
*/
