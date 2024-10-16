/* WEP to get student pcm marks from the user
 and find the average use conditional operator
 to print if student is eligible for the admission.
 eligibility criteria is 50% in PCM.
 NAME: PRATIK JAISWAR
 Roll.no:59
 div:E
 class: ECS
 UIN: 241S077
 */
 #include<stdio.h>

 int main()
 {
 int phy,chem,maths;
 float avg;

 printf("Enter PCM marks and check eligibility of students\n");

 printf("Enter physics marks =");
 scanf("%d",&phy);
 printf("Enter chemistry marks=");
 scanf("%d",&chem);
 printf("Enter maths marks =");
 scanf("%d",&maths);

 avg=(phy+chem+maths)/3;
 printf("PCM average= %.3f",avg);

 avg>50 ?
 printf("\n student is eligible for admission"):
 printf("\n student is not eligible for admission");



 return 0;
 }
 /*
 OUTPUT:-
 Enter PCM marks and check eligibility of students
 Enter physics marks =62
 Enter chemistry marks=58
 Enter maths marks =55
 PCM average= 58.000
 student is eligible for admission
 /*
