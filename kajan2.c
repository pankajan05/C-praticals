 /*
 Author: Panakajan   S.
 Purpose: Arithmatic calculations
 Date created: 19/06/2018
 Date modified: 19/06/2018
 */

 #include<stdio.h>	//preprocessor directives

 void main()      	//main function
 {

 int integer_code, number_1, number_2, result;  	 //integer declaration

 clrscr();   	 //clear the screen


 printf("Enter 2 Integer Numbers: ");      		 //ask user to enter 2 number
 scanf(" %d %d", &number_1, &number_2);     		//read 2 numbers



 printf("\n\nEnter No 1 to calculate the sum\n"
	"Enter No 2 to calculate the substraction\n"
	"Enter No 3 to calculate the product\n\n");

 printf("Enter the Integer code: ");       		 //ask to Enter Integer code
 scanf(" %d", &integer_code);              	 	//read the integer code


 if( integer_code == 1 )			//decide to calculate the sum
 {
 result = number_1 + number_2;
 printf("your result is %d\n", result);		//print the result
 }

 else if( integer_code == 2 )			//decide to calculate the substraction
 {
 result = number_1 - number_2;
 printf("your result is %d\n", result);		//print the result
 }

 else if( integer_code == 3 )			//decide to calculate the production
 {
 result = number_1 * number_2;		
 printf("your result is %d\n", result);		//print the result
 }

 else						//decide to print the error message
 {
 printf("sorry there is no operation");		
 }


 getch();	 //hold the screen
 }               //end of the main function