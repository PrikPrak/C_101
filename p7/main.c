/*******************************************************************************/
/* File Name: p7.c                                                             */
/* Programmer: Corey Prak                                                      */
/* Problem 7: Bigger than 100?                                                 */
/* Created On: 12/23/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int inputNum;
  inputNum = 0;

  printf("\nPlease enter an integer:");
  scanf("%d", &inputNum);

  if (inputNum > 100) printf("\nThe number is bigger than 100.\n");

  else printf("\nThe number is not bigger than 100.\n\n");

  return 0;
}

