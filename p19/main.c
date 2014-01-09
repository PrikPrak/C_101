/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 19: Area of a Rectangle                                             */
/* Created On: 01/08/2014                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  float rectLength, rectHeight;

  rectLength = 0;
  rectHeight = 0;

  printf("\nPlease enter two floating point values, first length, then height: ");
  scanf("%f%f", &rectLength, &rectHeight);

  printf("\nThe area of a rectangle with length %f and height %f is %f.\n\n", rectLength, rectHeight, (rectLength * rectHeight));

  return 0;
}

