 /*
 EXP NO : 4
 TITLE : WAP TO FIND THE PRIME NUMBER BETWEEN TWO NUMBER
 NAME : PRATIK JAISWAR
 UIN :241S077
 Roll.No:59
 CLASS & DIV :F.E -ECS ENG(E3) */

 #include <stdio.h>
int isPrime(int num){
if (num < 2){
return 0;
}
for (int i = 2; i * i <= num; i++){
if (num % i == 0)
{
return 0;
}
}
return 1;
}
void findPrimes(int start, int end){
printf("Prime numbers between %d and %d are:\n", start, end);
for (int i = start; i <= end; i++)
{
if (isPrime(i))
{
printf("%d ", i);
}
}
printf("\n");
}
int main(){
int start, end;
printf("Enter the starting number: ");
scanf("%d", &start);
printf("Enter the ending number: ");
scanf("%d", &end);
findPrimes(start, end);
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
