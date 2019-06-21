/*Author: Pankajan  .S
Date created: 11/06/2018
Date modified: 11/06/2018
Purpose: Demonstrate basic data type in C*/

#include<stdio.h>           //preprocessor directive

void main()                 //main function
{                           //main function block start

int x,y;                    //variable declaration
float a,b;

clrscr();

x=5;                        //assign value
b=4.6789;

a=x;
y=b;

printf("Value of a = %f\n",a);      //printing statements
printf("Value of b = %f\n",b);
printf("Value of a = %d\n",y);

getch();

}                          	    //main function end