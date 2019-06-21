/*Author: Pankajan  .S
Date created: 11/06/2018
Date modified: 11/06/2018
Purpose: Demonstrate typecating in C*/

#include<stdio.h>           //preprocessor directive
#include<math.h>

void main()                 //main function
{                           //main function block start
  //find the root of equation x^2 - 4.0000000 *x+ 3.999999=0
  //root1 = -b +sqrt(b^2 - 4ac)/2a
  //root1 = -b -sqrt(b^2 - 4ac)/2a

float fa,fb,fc,fr1,fr2;                    //variable declaration
double da,db,dc,dr1,dr2;

clrscr();

fa=1;
fb=-4.000000;
fc=3.999999;

fr1= (-fb +sqrt(fb*fb - (4*fa*fc))) / 2*fa;
fr2= (-fb -sqrt(fb*fb - (4*fa*fc))) / 2*fa;

printf("float root 1= %f\n",fr1);     //print statement
printf("float root 2= %f\n",fr2);

da=1;
db=-4.000000;
dc=3.999999;

dr1= (-db +sqrt(db*db - (4*da*dc)))/ (2*da);
dr2= (-db -sqrt(db*db - (4*da*dc))) / (2*da);

printf("double root 1= %f\n",dr1);     //print statement
printf("double root 2= %f\n",dr2);

getch();

}
