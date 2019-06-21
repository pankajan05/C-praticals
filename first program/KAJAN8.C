/*Author: Pankajan  .S
Date created: 11/06/2018
Date modified: 11/06/2018
Purpose: Demonstrate typecasting and variables in C*/

#include<stdio.h>           //preprocessor directive
#include<limits.h>
#include<float.h>

void main()                 //main function
{                           //main function block start

int x,y;                    //variable declaration
float a,b,c;
char C;
double d;

clrscr();

x=15;                        //assign value
y=4;

a=x/y;
b=(float)x/y;
c=15/4.0;

printf("Value of a =%f\n",a);      //printing statements
printf("Value of b =%f\n",b);
printf("Value of c =%f\n\n",c);

//print the size of the variables
printf("size of char=%d\n",sizeof(char));
printf("size of int=%d\n",sizeof(int));
printf("size of long int=%d\n",sizeof(long int));
printf("size of short int=%d\n",sizeof(short int));
printf("size of long=%d\n",sizeof(long));
printf("size of short=%d\n",sizeof(short));
printf("size of float=%d\n",sizeof(float));
printf("size of double=%d\n\n",sizeof(double));

printf("maximum of int=%d\n",INT_MAX);
printf("minimum of int=%d\n",INT_MIN);
printf("maximum of float=%f\n",FLT_MAX);
printf("minimum of float=%f\n",FLT_MIN);
printf("maximum of double=%lf\n",DBL_MAX);
printf("maximum of double=%lf\n",DBL_MIN);

getch();

}