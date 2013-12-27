/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 17: Count Characters                                                */
/* Created On: 12/27/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int charCount;
  charCount = 0;

  printf("\nEnter characters to be counted until EOF (Ctrl-D or Ctrl-Z): ");

  while (getchar() != EOF) charCount++;

  printf("\n\nThe character count was %d.\n\n", charCount);

  return 0;
}

