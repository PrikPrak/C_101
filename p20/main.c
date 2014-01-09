/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 20: Area of a Circle                                                */
/* Created On: 01/08/2014                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
  float radius;
  radius = 0;

  printf("\nPlease enter a floating point value as the radius of a cirlce: ");
  scanf("%f", &radius);

  printf("\nThe area of a Circle with a radius of %f is %f.\n\n", radius, (M_PI * (radius * radius)));

  return 0;
}

