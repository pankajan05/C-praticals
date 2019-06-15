/*Author: Pankajan  S
date created: 11/07/2018
date modified: 11/07/2018
purpose: store 20 numbers in array and find minimum maxmimum  */

#include<stdio.h>          //preprocessor directive

void fun_input(int num[], int a);
int find_max(int num[], int a);
int find_min(int num[], int a);

void main()        //main function
{
int num[20];  //declaration of the array
int i=20;

clrscr();


fun_input(num,i);
printf("maximum number is %d\n",find_max(num,i));
printf("minimum number is %d\n",find_min(num,i));

getch();
}	//end of the function

void fun_input(int num[], int a)
{

for( ; a>0; a--)      //use to get 20 numbers and store it in array
{
printf("Enter %d numbers : ",a);
scanf("%d",&num[a]);
}

} //end the function


int find_max(int num[], int a)
{
int max=num[a];

for(; a>0; a--)
{
if(max < num[a])
max=num[a];
}

return max;
} //end the function

int find_min(int num[], int a)
{
int min=num[a];

for(; a>0; a--)
{
if(min > num[a])
min=num[a];
}

return min;
} //end the function