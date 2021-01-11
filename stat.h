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
 * @file <Add File Name>
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief sorts array in ascending order.
 *
 * This functions uses a bubble sort to sort
 * the array in ascending order. The greater numbe
 * bubbles its way to the top. Using two for loops,
 * the array is stepped through. Each elements is
 * compared, and swapped until the condition is met.
 *
 * @param test float array to be sorted
 * @param p  count of elements in array
 *
 * @return returns array sorted in ascending order
 */


/**
 * @brief finds the average of the array of floats
 *
 * This functions takes a sorted array, and returns the
 * average of all floating point numbers. It initialize a
 * for loop that sums all elements, and divides by the
 * amount of elements.
 *
 * @param testSorted float array sorted
 * @param p count of elements in array
 * @return return the average of the array
 */



/**
 * @brief returns the minimum number
 *
 * A sorted array is taken, and knowing
 * that the lowest number occurs at index
 * zero. The function assigns that element
 * to a variable and returns it.
 *
 * @param testSorted float array sorted
 *
 * @return return minimum number
 */


/**
 * @brief returns the maximum number
 *
 * A sorted array is taken, and knowing
 * that the lowest number occurs at index
 * zero. The function assigns that elements
 * to a variable and returns it.
 *
 * @param testSorted float array sorted
 *
 * @return return the maximum number
 */


 /**
 * @brief prints the sorted array
 *
 * A sorted array is taken, and then
 * formated, and printed using stdio.h.
 *
 * @param testSorted float array sorted
 *
 * @return no return void function
 */


/**
 * @brief find the median of the array
 *
 * A sorted array is taken, and elements
 * are divided by two to centroid element.
 *
 * @param testSorted float array sorted
 *
 * @return returns the middle number in array
 */


/**
 * @brief print all statistical values
 *
 * All calculated parameters are taken
 * then formated and printed to the console.
 * This functions has no return. Function
 * will only print out statistics.
 *
 * @param median
 * @param maximum
 * @param minimum
 * @param average
 *
 * @return no return void function
 */


#endif /* __STATS_H__ */
