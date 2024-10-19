 /*
 EXP.No: 2.2
 TITLE:WAP to find the sum of all the odd numbers
 between numbers entered by the user.
 NAME:PRATIK JAISWAR
 ROLL.NO: 59
 DIV: E
 UIN: 241S077
 BRANCH: ECS
 */

 #include <stdio.h>

 int main() {
 int start_num, end_num, sum = 0, i;

 // Prompt user for input
 printf("\t\t\t*** Sum of Odd Numbers ***\n\n");
 printf("Enter a starting number: ");
 scanf("%d", &start_num);
 printf("Enter an ending number: ");
 scanf("%d", &end_num);

 // Check if the starting number is less than or equal to the ending number
 if (start_num > end_num) {
 printf("Start number is higher than the end number.\n");
 return 1; // Exit if the input is invalid
 }

 // Loop through the range from start_num to end_num
 for (i = start_num; i <= end_num; i++) {
 if (i % 2 != 0) { // Check if the number is odd
 sum += i; // Add the odd number to sum
 }
 }

 // Output the result
 printf("The sum of odd numbers between %d and %d is: %d\n", start_num, end_num, sum);
 return 0;
 }

 /*
 OUTPUT: *** Sum of Odd Numbers ***

 Enter a starting number: 15
 Enter an ending number: 9
 Start number is higher than the end number.

*/
