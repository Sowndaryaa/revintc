#include<stdio.h>
#include<conio.h>
void main()
{
 unsigned long int rev=0,digit,num;
 clrscr();
 printf("enter the number");
 scanf("%lu",&num);
 while(num!=0)
 {
 digit=num%10;
 rev=rev*10+digit;
 num=num/10;
 }
 printf("the reverse of the integer is %lu",rev);
 getch();
}