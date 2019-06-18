/*My Third programme
This programme use to print character value */

//preprocessor way to include header file
#include<stdio.h>
#include<conio.h>

//This is main function
void main()
//start the main function
{

//declare a variable
float x;

//use to clear the before the printing in screen
clrscr();

//initialize the variable x
x=1.3333;

//command to print the screen
printf("Real character is %f\n",x);//indicate the command finish
printf("Real character is %.2f\n",x);
printf("Real character is %9.2f\n",x);
printf("Real character is %9f",x);

//use to hold thwe screen
getch();
//end of the main function
}