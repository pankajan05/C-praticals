/*Author:Pankajan
date created: 16/06/2018
date modified: 16/06/2018
purpose: Testing unary operators in statements*/

#include<stdio.h>	//preprocessor directives

void main()        //main function
{

int x;      //variable declaration

clrscr();

x=10;
printf("x= %d \n",++x);   //preincrement statement
printf("x= %d \n",x);
printf("x= %d \n",x++);   //postincrement statement
printf("x= %d \n",x);



getch();
}		//main function end