/* A very nice way of using pointer to create arrays without array names
   This is called as compound literals, and pointers to such array are
   pointers to compound literals
*/

#include<stdio.h>

int main()
{
    int *p = (int []){10,20,30,40,50};
    printf("%d ", *p);

    p++;

    printf(" %d ", *p);

    return 0;

}
