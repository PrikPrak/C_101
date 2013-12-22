/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 6: The fscanf Function                                              */
/* Created On: 12/22/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE *filePtr;
  int num;

  num = 0;

  filePtr = fopen("testdata6", "r");

  fscanf(filePtr, "%d", &num); 

  printf("\nThe integer value read from testdata6 is %d.\n\n", num);

  fclose(filePtr);  

  return 0;
}

