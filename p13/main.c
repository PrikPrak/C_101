/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 13: The abs Function                                                */
/* Created On: 12/26/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int num;
  num = 0;

  printf("\nPlease enter an integer: ");
  scanf("%d", &num);

  printf("\nThe absolute value of the integer entered is %d.\n\n", abs(num));

  return 0;
}


