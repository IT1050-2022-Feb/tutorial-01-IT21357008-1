/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

/*This C program to calculate the sum of the numbers from 1to n.*/

#include<stdio.h>
/*function main begins program execution*/
int main(void)
{
	int n,sum=0;//variable declaration
	
	printf("Enter the number :");//Input the number
	scanf("%d",&n);//read number
	
	for(int i=1;i<=n;i++){//check the condition
		sum=sum+i;
		
	}
	printf("Sum = %d",sum);//Display the sum

return 0;

}//end the main function

