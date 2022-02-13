/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

/*This program to calculate the amount to be paid for a rented vehicle.*/

#include<stdio.h>
/*function main begins program execution*/
int main(void){//start the main function
	
	float distance;//variable declaration
	
	printf("Enter the distance:");//input the distance
	scanf("%f",&distance);//read the distance
	
	if(distance<=30)//check the condition
	{
		distance=distance*50;
		printf("Amount  : %.2f",distance);//display the Amount
		
	}
	else{
		distance=(30*50)+(distance-30)*40;
		printf("Amount  : %.2f",distance);//display the Amount
	}
	return 0;
}//end the main function