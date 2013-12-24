/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 10: Sum of Twenty                                                   */
/* Created On: 12/23/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE* filePtr;
  int num, sum, i;

  filePtr = fopen("testdata10", "r");
  num = sum = i = 0;

  for (i; i < 20; i++)
  {
    fscanf(filePtr, "%d", &num);
    sum += num;
  }

  printf("\nThe sum of the twenty integers is %d.\n\n", sum);

  fclose(filePtr);

  return 0;
}
