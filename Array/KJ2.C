/*Author: Pankajan  S
date created: 11/07/2018
date modified: 11/07/2018
purpose: store 20 numbers in array and print it in a line    */

#include<stdio.h>          //preprocessor directive

void fun_input(int n[]);
void fun_ouput(int n[]);

void main()        //main function
{
int num[20];
//declaration of the array

clrscr();

fun_input(num);
fun_ouput(num);


getch();
}	//end of the function

void fun_input(int n[])
{
 int i;

for(i=0; i<20; i++)      //use to get 20 numbers and store it in array
{
printf("Enter %d numbers : ",i);
scanf("%d",&n[i]);
}

} //end the subfunction1

void fun_ouput(int n[])
{
int i;

for(i=0; i<20; i++)      //use to print the numbers
{
printf("number[%d] : %d\n", i, n[i]);
}
} //end the subfunction2
