/*******************************************************************************/
/* File Name: p4.c                                                             */
/* Programmer: Corey Prak                                                      */
/* Problem 4: The scanf Function                                               */
/* Created On: 12/18/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int userInteger;
  userInteger = 0;

  printf("\nEnter an integer: ");
  scanf("%d", &userInteger);

  printf("\nThe integer you entered was %d.\n\n", userInteger);

  return 0;
}

