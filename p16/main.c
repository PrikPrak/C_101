/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 16: Sine Function                                                   */
/* Created On: 12/26/2013                                                      */
/* Comments:                                                                   */
/* Reference http://www.cplusplus.com/reference/cmath/sin/                     */
/*******************************************************************************/

#include <stdio.h>
#include <tgmath.h>
#include <stdlib.h>

#define PI 3.14159265

int main(int argc, char* argv[])
{
  float num, result;
  num = atoi(argv[1]);

  result = sin(num*PI/180);

  printf("\nThe sine of argv[1], %f, in degrees is %f.\n\n", num, result);

  return 0;
}

