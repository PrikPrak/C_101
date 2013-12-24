/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 8: One Horizontal Line of Asterisks                                 */
/* Created On: 12/23/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE* filePtr;
  int num, i;
  
  num = 0;
  i = 0;

  filePtr = fopen("testdata8", "r");

  fscanf(filePtr, "%d", &num);

  printf("\n");

  for (i; i <= num; i++)
  {
    printf("*");
  }

  printf("\n\n");

  fclose(filePtr);

  return 0;
}

