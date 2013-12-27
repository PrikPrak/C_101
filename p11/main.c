/*******************************************************************************/
/* File Name: main.c                                                           */
/* Programmer: Corey Prak                                                      */
/* Problem 11: Equal to Zero?                                                  */
/* Created On: 12/26/2013                                                      */
/* Comments:                                                                   */
/* QUESTION: Why does character input make result = 0?                         */
/* ANSWER: Reached end of stream before any successful matches AKA early       */
/* matching failure, 0 returned.                                               */
/*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int num;
  num = 0;

  printf("\nPlease enter an integer: ");
  scanf("%d", &num);

  /* If statements, without brackets, consider only the next statement as part
  of the condition, which is why I placed the printf on the line. Is this
  standard practice, or should I just provide the brackets? Code looks better, 
  but I'm not sure if many would be aware of the fact that the printf statement
  belongs to the if condition. Would appreciate some feedback, thanks! */

  if (num == 0) printf("\nThe input entered, %d, is equal to zero.\n\n", num);

  else printf("\nThe number is not equal to zero.\n\n");

  return 0;
}

