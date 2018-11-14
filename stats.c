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
 * @brief Source file contains the definition for the statistics methods
 *
 * <Add Extended Description Here>
 *
 * @author Sergio Montano
 * @date Nov 13th 2018
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics (uint8 *ps_dataIn_p8, uint8 ps_dataSize_u8)
{

}

void print_array (uint8 *pa_dataIn_p8, uint8 pa_dataSize_u8)
{

}

uint8 find_median (uint8 *fm_dataIn_p8, uint8 fm_dataSize_u8)
{
  return 0;
}

uint8 find_mean (uint8 *fn_dataIn_p8, uint8 fn_dataSize_u8)
{
  return 0;
}

uint8 find_max (uint8 *fx_dataIn_p8, uint8 fx_dataSize_u8)
{
  return 0;
}
uint8 find_min (uint8 *fi_dataIn_p8, uint8 fi_dataSize_u8)
{
  return 0;
}

void sort_array(uint8 *sa_SataIn_p8, uint8 sa_dataSize_u8)
{

}
