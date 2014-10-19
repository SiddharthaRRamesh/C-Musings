/* KN KING page 216 */

#include <stdio.h>

#define MAX_NUMBER 10

void selection_sort(int [], int []);

void selection_sort(int num[], int sorted[])
{
    int i, high = 0, k, j = 9, store;

    for(k = 0; k < MAX_NUMBER; k++)
    {
      for(i = 0; i < MAX_NUMBER; i++)
      {
         if(num[i] > high)
         {
             high = num[i];
             store = i;
         }
      }

      sorted[j] = high; // Place the highest number in the end of array and decrement array
      j--;
      num[store] = 0; // Place 0 in the place of maximum number that was in the array
      high = 0; // again make high as zero, so as to compare zerpo again with all the numbers that are in the array
    }
}

int main()
{
    int num[MAX_NUMBER], sorted[MAX_NUMBER];
    int i;

    printf("Enter %d numbers: ", MAX_NUMBER);

    for(i = 0; i < MAX_NUMBER; i++)
    {
        scanf("%d", &num[i]);
    }

    selection_sort(num, sorted);

    for(i = 0; i < MAX_NUMBER; i++)
      printf("%d ", sorted[i]);

    return 0;
}
