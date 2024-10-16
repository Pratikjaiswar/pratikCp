/* WAP to find if entered number is even or odd*/

#include<stdio.h>
int main()

   {
       int num;

       printf("/t/t/t*** EVEN ODD FINDER ***/n/n/n");

       printf("ENTER NUMBER: ");
       scanf("%d", &num);

       if(num%2==0){
                printf("%d is EVEN",num);

       }else{
           printf("%d is ODD", num);
       }

       return 0;
   }
    /* OUTPUT:-
       *** EVEN ODD FINDER ***

       Enter a number: 2
       2 is EVEN
       *** EVEN ODD FINDER ***

       Enter a number: 5
       5 is ODD
       */

