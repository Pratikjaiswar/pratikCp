/*
 EXP NO : 11.1
 TITLE : WAP to maintain a simple employee database using file handling
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG
 */
#include <stdio.h>
#include <stdlib.h>
struct Employee
{
int id;
char name[50];
float salary;
};
void addEmployee(FILE *file)
{
struct Employee emp;
printf("Enter Employee ID: ");
scanf("%d", &emp.id);
printf("Enter Employee Name: ");
scanf(" %[^\n]", emp.name);
printf("Enter Employee Salary: ");
scanf("%f", &emp.salary);
fwrite(&emp, sizeof(struct Employee), 1, file);
printf("Employee record added successfully.\n");
}
void displayEmployees(FILE *file)
{
struct Employee emp;
rewind(file);
printf("\nEmployee Records:\n");
printf("ID\tName\t\tSalary\n");
printf("----------------------------------\n");
while (fread(&emp, sizeof(struct Employee), 1, file))
{
printf("%d\t%-15s\t%.2f\n", emp.id, emp.name, emp.salary);
}
}
int main()
{
FILE *file;
int choice;
file = fopen("employee.dat", "rb+");
if (file == NULL)
{
file = fopen("employee.dat", "wb+");
if (file == NULL)
{
printf("Error opening file.\n");
exit(1);
}
}
do
{
printf("\nEmployee Database Menu:\n");
printf("1. Add Employee\n");
printf("2. Display Employees\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
addEmployee(file);
break;
case 2:
displayEmployees(file);
break;
case 3:
fclose(file);
printf("Exiting the program.\n");
break;

default:
printf("Invalid choice. Please try again.\n");
}
} while (choice != 3);
return 0;
}
/*
OUTPUT:

Employee Database Menu:
1. Add Employee
2. Display Employees
3. Exit
Enter your choice: 1
Enter Employee ID: Abhay
Enter Employee Name: Enter Employee Salary: 6000000
Employee record added successfully.

Employee Database Menu:
1. Add Employee
2. Display Employees
3. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
----------------------------------
-811607254      Abhay           6000000.00
*/
