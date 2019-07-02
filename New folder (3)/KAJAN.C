/*Author:Pankajan
date created: 16/06/2018
date modified: 16/06/2018
purpose: Testing unary operators*/

#include<stdio.h>	//preprocessor directives

void main()        //main function
{

int x,y,z;      //variable declaration

clrscr();

x=10;
y=-x;

printf("value of x=%d\n",x);
printf("value of y=%d\n",y);

x++;  //x=x+1
printf("value of x=%d\n",x);

++x;  //x=x+1
printf("value of x=%d\n",x);

z=100;
z--;     //z=z-1;
printf("value of z=%d\n",z);

--z;     //z=z-1;
printf("value of z=%d\n",z);

getch();
}		//main function end