/*Author:Pankajan
date created: 16/06/2018
date modified: 16/06/2018
purpose: Testing preincrement operator in arithmatic statements*/

#include<stdio.h>	//preprocessor directives

void main()        //main function
{

int a,b,c,d;      //variable declaration

clrscr();

a=15;
b=10;
c=a++-b;

printf("a=%d \t b=%d  \t c=%d \n",a,b,c);

d=b+++a;
printf("a=%d \t b=%d  \t d=%d \n",a,b,d);

getch();
}		//main function end