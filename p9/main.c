/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 9: Using a For Loop                                                 */
/* Created On: 12/23/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE* filePtr;
  int num, i;


  filePtr = fopen("testdata9", "r");
  num = 0;
  i = 0;

  for (i; i < 5; i++)
  {
    fscanf(filePtr, "%d", &num);
    printf("\n%d", num);    
  }

  printf("\n\n");

  fclose(filePtr);

  return 0;
}

