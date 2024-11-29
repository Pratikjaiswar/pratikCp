 /*
 EXP NO : 4
 TITLE : WAP TO FIND THE PRIME NUMBER BETWEEN TWO NUMBER
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */

 #include<stdio.h>

 //Prime Number function
 int isPrime_Num (int a, int b) {

 // Finding prime numbers
 for(int i=a+1; i< b; i++ )
 {
 if(i<2)
 {
 continue;
 }
 int prime=1;

 for(int j=2; j<i; j++)
 {
 if(i%j==0)
 {
 prime=0;

 break;
 }
 }
 if (prime==1)
 {
 printf("%d \t ", i);

 }
 }
 } // Prime Number function
 // main function
 int main()
 {
 int a,b;

 printf("\t\t\t***To Find the Prime Numbers between Two Numbers***\n\n");

 printf("Enter Two Numbers:\n");

 scanf("%d %d", &a, &b);

 //to check input is greater than 0

 if(a > 0 && b > 0)
 {
 printf("The Prime Numbers Between %d and %d are \n", a, b);

 isPrime_Num(a,b);
 }
 else
 printf("\nError:the number should be grater then 0\n");

 return 0;
 }
 /* OUTPUT
 ***To Find the Prime Numbers between Two Numbers***

 Enter Two Numbers:
 1
 50
 The Prime Numbers Between 1 and 50 are
 2 3 5 7 11
 13 17 19 23 29
 31 37 41 43 47
 [Process completed - press Enter]

