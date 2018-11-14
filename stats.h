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
 * @brief This header file contains the function declaration for the statistics methods
 *
 * <Add Extended Description Here>
 *
 * @author Sergio Montano
 * @date Nov 13th 2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
/********************************************/
/* Type Definitions                         */
/********************************************/
/** 
 * @brief Standard Types 
 */
typedef unsigned char uint8
typedef signed char sint8
typedef unsigned short uint16
typedef signed short sint16
typedef unsigned long uint32
typedef signed long sint32

/**
 * @brief Function that prints the statistics of an array of unsigned integers.
 *
 * Minimum, Maximum, Mean, and Median.
 *
 * @param[in]  ps_dataIn_p8:    Pointer to data array.
 * @param[in]  ps_dataSize_u8:  Array size.
 *
 * @return     void
 */
void print_statistics (uint8 *ps_dataIn_p8, uint8 ps_dataSize_u8);
/**
 * @brief Function that prints an array of unsigned integers
 *
 *
 * @param[in]  pa_dataIn_p8:    Pointer to data array.
 * @param[in]  pa_dataSize_u8:  Array size.
 *
 * @return     void
 */
void print_array (uint8 *pa_dataIn_p8, uint8 pa_dataSize_u8);
/**
 * @brief Function that returns the median of an array of unsigned integers
 *
 * Given an array of data and a length, returns the median value
 *
 * @param[in]  fm_dataIn_p8:    Pointer to data array.
 * @param[in]  fm_dataSize_u8:  Array size.
 *
 * @return median of given array.
 */
uint8 find_median (uint8 *fm_dataIn_p8, uint8 fm_dataSize_u8);
/**
 * @brief Function that returns the mean of an array of unsigned integers
 *
 * Given an array of data and a length, returns the mean
 *
 * @param[in]  fn_dataIn_p8:    Pointer to data array.
 * @param[in]  fn_dataSize_u8:  Array size.
 *
 * @return mean of given array
 */
uint8 find_mean (uint8 *fn_dataIn_p8, uint8 fn_dataSize_u8);
/**
 * @brief Function that returns the maximum value of an array of unsigned integers
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param[in]  fx_dataIn_p8:    Pointer to data array.
 * @param[in]  fx_dataSize_u8:  Array size.
 *
 * @return max value of given array
 */
uint8 find_max (uint8 *fx_dataIn_p8, uint8 fx_dataSize_u8);
/**
 * @brief Function that returns minimum value of an array of unsigned integers 
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param[in]  fi_dataIn_p8:    Pointer to data array.
 * @param[in]  fi_dataSize_u8:  Array size.
 *
 * @return min value of given array
 */
uint8 find_min (uint8 *fi_dataIn_p8, uint8 fi_dataSize_u8);
/**
 * @brief Function that sorts an array of unsigned integers
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 *
 * @param[in-out]  sa_dataIn_p8:    Pointer to data array.
 * @param[in]      sa_dataSize_u8:  Array size.
 *
 * @return void
 */
void sort_array(uint8 *sa_SataIn_p8, uint8 sa_dataSize_u8);


#endif /* __STATS_H__ */
