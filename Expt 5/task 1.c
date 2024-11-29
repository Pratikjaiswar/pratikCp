/*
 EXP NO : 5.1
 TITLE : WAP TO FIND A FACTRIOL OF NUMBER
 USING ITERATIVE FUNCTION
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */

 #include<stdio.h>

 // function
 int CalcFact(int a)
 {
 int fact=1;
 // condition
 for(int i=1; i<=a; i++ )
 {
 fact=fact*i;
 }
 return fact;
 }
 // main function
 int main()
 {
 int x,result;

 printf("\t\t\t**To Find Factorial of a Number**\n\n");

 printf("Enter a Number: ");

 scanf("%d", &x);

 //to check condition if (x > 0)

 if ( x > 0 )
 {
 // calling function
 result = CalcFact( x );

 //display the result
 printf("\nThe Factorial of %d is %d \n",x,result);
 }
 else // if condition wrong

 printf("\nERROR:number should be grater then 0***\n");

 return 0;
 }
 /*OUTPUT
 **To Find Factorial of a Number**

 Enter a Number: 7

 The Factorial of 7 is 5040
 */

