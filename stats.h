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
 * @file stats.h 
 * @brief Contains the function prototypes for the stats.c file
 *
 * <Add Extended Description Here>
 *
 * @author Del Ingvaldson
 * @date 2020-09-02
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array
 *
 * This takes an array and its length and prints statistics about this array
 * Statistics printed include: minimum, maximum, mean, and median.
 *
 * @param array; the array whose statistics are printed;
 * @param length; the length of the array to be printed;
 *
 * @return no return;
 */
void print_statistics(unsigned char* array, unsigned int length);

/**
 * @brief Prints an array to the screen
 *
 * This takes an array and its length and prints it to the screen
 *
 * @param array; the array to be printed;
 * @param length; the length of the array to be printed;
 *
 * @return no return;
 */
void print_array(unsigned char* array, unsigned int length);

/**
 * @brief Finds the median value of an array
 *
 * This takes an array and its length and returns the median value
 *
 * @param array; the array whose statistics are printed;
 * @param length; the length of the array to be printed;
 *
 * @return median value;
 */
unsigned char find_median(unsigned char* array, unsigned int length);

/**
 * @brief Finds the mean of an array
 *
 * This takes an array and its length and returns the mean
 *
 * @param array; the array whose statistics are printed;
 * @param length; the length of the array to be printed;
 *
 * @return mean;
 */
unsigned char find_mean(unsigned char* array, unsigned int length);

/**
 * @brief Finds the maximum value of an array
 *
 * This takes an array and its length and returns the maximum value
 *
 * @param array; the array whose statistics are printed;
 * @param length; the length of the array to be printed;
 *
 * @return maximum value;
 */
unsigned char find_maximum(unsigned char* array, unsigned int length);

/**
 * @brief Finds the minimum value of an array
 *
 * This takes an array and its length and returns the minimum value
 *
 * @param array; the array whose statistics are printed;
 * @param length; the length of the array to be printed;
 *
 * @return minimum value;
 */
unsigned char find_minimum(unsigned char* array, unsigned int length);

/**
 * @brief Sorts an array from largest to smallest
 *
 * This takes an array and its length and sorts the array in order
 * of largest to smallest. Returns the sorted array
 *
 * @param array; the array whose statistics are printed;
 * @param length; the length of the array to be printed;
 *
 * @return sorted array;
 */
void sort_array(unsigned char* array, unsigned int length);



#endif /* __STATS_H__ */
