/*EXP NO : 5.2
 TITLE : WAP TO FIND A FACTRIOL OF NUMBER
 USING RECURSIVE FUNCTION
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
  DIV : ECS
*/
 #include<stdio.h>
 //Factorial function
 int CalcFact(int a)
 {
 // calculating factorial
 if (a==0 || a==1)
 {
 return 1;
 }
 else
 // recursive case
 return a*CalcFact(a-1);
 }
 // main function
 int main()
 {
 int x,result;

 printf("\t\t\t**To Find Factorial of a Number**\n\n");

 printf("Enter a Number: ");

 scanf("%d", &x);

 if ( x > 0 )
 {
 result = CalcFact( x ); // factorial function call

 //displaying the result
 printf("\nThe Factorial of %d is %d \n",x,result);
 }
 else // if condition false the error/end

 printf("\nERROR:number should be grater then 0\n");
 
 return 0;
 }
 /* OUTPUT

 **To Find Factorial of a Number**

 Enter a Number: 12

 The Factorial of 12 is 479001600
 */
