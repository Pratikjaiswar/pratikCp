/*
EXP NO : 9.1
 TITLE : design a structure record to contain name , roll_number , and total marks obtained. write a program to read 5 student data from the user and then display the topper on the screen
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */

#include <stdio.h>
#include <string.h>
struct student_record {
 char name[50];
 int roll_number;
 float total_marks;
};
int main() {
 struct student_record students[5];
 int topperIndex = 0;
 for (int i = 0; i < 5; i++) {
 printf("Enter details for student %d:\n", i + 1);
 printf("Name: ");
 scanf(" %[^\n]", students[i].name);
 printf("Roll Number: ");
 scanf("%d", &students[i].roll_number);
 printf("Total Marks: ");
 scanf("%f", &students[i].total_marks);
 if (students[i].total_marks > students[topperIndex].total_marks) {
 topperIndex = i;
 }
 }
 printf("\nTopper:\n");
 printf("Name: %s\n", students[topperIndex].name);
 printf("Roll Number: %d\n", students[topperIndex].roll_number);
 printf("Total Marks: %.2f\n", students[topperIndex].total_marks);
 return 0;
}

/*
OUTPUT :Enter details for student 1:
Name: pratik
Roll Number: 73
Total Marks: 100
Enter details for student 2:
Name: abhay
Roll Number: 88
Total Marks: 99
Enter details for student 3:
Name: arman
Roll Number: 84
Total Marks: 90
Enter details for student 4:
Name: shubham
Roll Number: 55
Total Marks: 98
Enter details for student 5:
Name: ganpat
Roll Number: 66
Total Marks: 97
Topper: pratik
Roll Number: 73
Total Marks: 100
*/
