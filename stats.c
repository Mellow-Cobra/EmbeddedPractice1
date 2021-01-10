/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This will calculate average mean, maximum, minimum, and will implement sorting
 *
 * This program was made to calculate a few statistical functions
 *
 * @author John Eric Gdovin
 * @date  01/02/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned float test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /*  Variable Declarations */
  
  unsigned float sortedArray[];
  unsigned float average;
  int p;
  float maximum, minimum;
 
  p = 40
  
  sortedArray[] =  bubbleSort(test[], p);
  average = findAverage(sortedArray[], p);
  minimum = 
  printArray(sortedArray[]);
  

}



/* Functions */


void bubbleSort(float statsArray[], int n){
		
		for ( int a = 0;  a < n-1; a++)
		{
			for (int b = 0; d < n - a - 1; b++)
			{
				if (statsArray[b] < statsArray[b+1])
				{
					swap  = statsArray[b];
					statsArray[b] = statsArray[b+1];
					statsArray[b+1] = swap;
				}
				
            }
		}
}


float findAverage(float statsArray[], int j){
	 
	 int i = 0, count=0, j;
	 
	 float average, sum=0;
	 
	 for (i=0; i<j;i++)
	 {
		  s =  statsArray[i];
		  sum += temp;
	 }
	  
	  average = sum / j;
	  
	  return average;
 
}

float minimumReturn(statsArray[]){
		
		float minimum;
		
		minimum = statsArray[0];
		
		return minimum;
			
}


float maximumReturn(statsArray[]){
 
	 float maximum;
	 
	 maxmum = statsArray[39];
	 
	 return maximum;
      
}



void printArray(float statsArray[]){
	
	printf("%f", statsArray[])

}

float findMedian(statsArray[]){
	
	
	

}


void printStatistics(float median, maximum, minimum){
	
}