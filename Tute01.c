/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

/*This C program for calculate and print the average of the two marks*/

#include<stdio.h>
/*function main begins program execution*/
int main(void){//strat the main function
	
	int mark1,mark2;
	float average;//variable declaration
	
	printf("Enter the mark1 :");//input mark1
	scanf("%d",&mark1);//read mark1
	
	printf("Enter the mark2 :");//input mark2
	scanf("%d",&mark2);//read mark2
	
	average=(mark1+mark2)/2.0;//calculation average of mark1,mark2
	
	printf("\nAverage is : %.2f",average);//Display average of mark1,mark2
	
	return 0;
}// end the main function

