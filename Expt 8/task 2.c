 /*
 EXP NO : 8.2
 TITLE : WAP TO check if the entered string is palindrome or not
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */

#include <stdio.h>
#include <string.h>
int main() {
 char str[100];
 int length, isPalindrome = 1;
 printf("Enter a string: ");
 scanf("%s", str);
 length = 0;
 while (str[length] != '\0') {
 length++;
 }
 for (int i = 0; i < length / 2; i++) {
 if (str[i] != str[length - i - 1]) {
 isPalindrome = 0;
 break;
 }
 }
 if (isPalindrome) {
 printf("The string is a palindrome.\n");
 } else {
 printf("The string is not a palindrome.\n");
 }
 return 0;
}
/*
OUTPUT :
Enter a string: hello
The string is not a palindrome.
Enter a string: radar
The string is a palindrome.
*/
