/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 18: Solid Box of Asterisks                                          */
/* Created On: 01/04/2013                                                      */
/* Comments:                                                                   */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int L, H, asteriskHeight, asteriskLength;
  L = H = asteriskHeight = asteriskLength = 0;

  do
  { 
    printf("\nPlease enter two integers, first for length then height: ");
    scanf("%d %d", &L, &H);

    if ( (L + H) >= 21 )
    {
      printf("\nSum of two integers isn't less than 21.\n");
      continue;    
    }
  }
  while ( !((L + H) < 21) ); 
    
  printf("\n"); 
  
  for (asteriskHeight = 0; asteriskHeight < H; asteriskHeight++)
  {
    for (asteriskLength = 0; asteriskLength < L; asteriskLength++)
    {
      printf("*");    
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}

