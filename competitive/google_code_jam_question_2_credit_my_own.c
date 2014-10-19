#include <stdio.h>

int main()
{
    int credit, num_of_items;
    int i = 0, j;

    printf("Enter credit: ");
    scanf("%d", &credit);

    printf("Enter number of items: ");
    scanf("%d", &num_of_items);

    int item_list[num_of_items - 1]; // array count from 0

    printf("Enter prince of items: ");

    for(i = 0; i < num_of_items; i++)
    {
        scanf("%d", &item_list[i]);
    }

   for(j = 0; j < num_of_items; j++)
   {
       for(i = 1; item_list[i] != item_list[j]; i = (i + 1) % num_of_items)
       {
           if(item_list[j] + item_list[i] == credit)
           {
               printf("%d %d ", item_list[j], item_list[i]);
               break;
           }
       }
   }


}
