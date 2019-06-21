/*My second programme
This programme use to print integer value */

//preprocessor way to include header file
#include<stdio.h>
#include<conio.h>

//This is main function
void main()
//start the main function
{

//declare a variable
int x,y;

//use to clear the before the printing in screen
clrscr();

//ask the user to input
printf("Enter 2 numbers: ");
scanf("%d %d",&x,&y);

//command to print the screen
printf("%d+%d value is %d",x,y,(x+y));//indicate the command finish

//use to hold thwe screen
getch();
//end of the main function
}