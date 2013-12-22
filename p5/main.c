/*******************************************************************************/
/* File Name: p5.c                                                             */
/* Programmer: Corey Prak                                                      */
/* Problem Problem 5: Sum of Two Values                                        */
/* Created On: 12/18/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int num1, num2, sum;
  num1 = num2 = sum = 0;

  printf("\nPlease enter two integer values:\n");
  scanf("%d %d", &num1, &num2);

  sum = num1 + num2;

  printf("\nThe sum of the two integers is %d.\n\n", sum);

  return;
}
