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
 * @brief contains the main function and the function definitions of the stats.h
 * function prototypes.
 *
 * The file contains the main() function and also provides the function definitions
 * for the stats package outlined in stats.h. The main function will perform statistical 
 * analysis on an array of char values and print the analysis to the screen.
 *
 * @author Del Ingvaldson
 * @date 2020-09-02
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  // print unsorted array
  printf("Unsorted array:\n\n");
  print_array(test,SIZE);
  // sort array
  sort_array(test,SIZE);
  // print sorted array
  printf("Sorted array:\n\n");
  print_array(test,SIZE);
  // print statistics
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array, unsigned int length) {
  unsigned char median,mean,max,min;
 
  median = find_median(array,length);
  mean = find_mean(array,length);
  max = find_maximum(array,length);
  min = find_minimum(array,length);

  printf("median:\t%d\n",median);
  printf("mean:\t%d\n",mean);
  printf("max:\t%d\n",max);
  printf("min:\t%d\n",min);
  printf("\n");
}

void print_array(unsigned char* array, unsigned int length) {
  for(int i=0;i<length;i++) {
    if (i == (length-1)) {
      printf("%d\n",array[i]);
      continue;
    }
    printf("%d, ",array[i]);
  }
  printf("\n\n");
}

unsigned char find_median(unsigned char* array, unsigned int length) {
  sort_array(array,length);
 
  return array[(length/2)-1];
}

unsigned char find_mean(unsigned char* array, unsigned int length) {
  unsigned int sum = 0;
  for(int i=0; i<length; i++) {
    sum += array[i];
  }

  return ((unsigned char)(sum/length));
}

unsigned char find_maximum(unsigned char* array, unsigned int length) {
  unsigned char max = 0;
  for(int i = 0; i<length; i++) {
    if (array[i] > max) max = array[i];
  }

  return max;
}

unsigned char find_minimum(unsigned char* array, unsigned int length) {
  unsigned char min = 255;
  for(int i=0; i<length; i++) {
    if (array[i] < min) min = array[i];
  }

  return min;
}

void sort_array(unsigned char* array, unsigned int length) {
  unsigned int i,j;
  unsigned char temp = 0;

  for(i=0; i<length-1; i++) {
    for(j=0; j<length-i-1; j++) {
      if (array[j] < array[j+1]) {
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}
