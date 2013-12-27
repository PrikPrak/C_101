/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 15: Using the sqrt Function                                         */
/* Created On: 12/26/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
  float num;
  num = 0;

  printf("\nPlease enter a floating point number: ");
  scanf("%f", &num);

  printf("\nThe square root of your input, %f, is %f.\n\n", num, sqrt(num));

  return 0;
}

