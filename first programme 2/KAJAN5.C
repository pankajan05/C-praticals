/*Author:Pankajan
date created: 16/06/2018
date modified: 16/06/2018
purpose: Testing short form od arithmatics*/

#include<stdio.h>	//preprocessor directives

void main()        //main function
{

int a=16;      //variable declaration

clrscr();

a+=3;  //a=a+3
printf("a=%d \n",a);

a-=12;  //a=a-12
printf("a=%d \n",a);

a*=2;  //a=a*2
printf("a=%d \n",a);

a/=3;  //a=a/3
printf("a=%d \n",a);

a%=3;  //a=a%3
printf("a=%d \n",a);

getch();
}		//main function end