/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 12: Positive, Negative, or Zero?                                    */
/* Created On: 12/26/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* arv[])
{
  int num;

  printf("\nPlease enter an integer: ");
  scanf("%d", &num);

  if (num > 0) printf("\nThe number is positive.\n\n");

  else if (num < 0) printf("\nThe number is negative.\n\n");

  else printf("\nThe number is zero.\n\n");

  return 0;
}

