/* Working quicksort
 * Robert sedgewick best
 */

#include <stdio.h>

void quicksort(int[], int, int); // prototype

void quicksort(int a[], int l, int r) // What is the value of l. Why hasn't the author
                                      // mentioned it. Is it the size of the array?
{
    int i, j, v, t;
    if(r > l)
    {
        v = a[r];
        i = l - 1; // What is l here? Is it the size if yes look at first while statement
        j = r;

        for(;;)
        {

            /*The algorithm says: scan from right until an element < a[r] is found. Where
              r is the last position in the array. But while checking in the second while
              loop elements > a[r] is searched */

            while (a[++i] < v); // How can you increment again after reaching end of arrray
                                // size if l is the size of the array
            while (a[--j] > v);
            if(i >= j) break;
            t = a[i]; a[i] = a[j]; a[j] = t;
        }


    t = a[i]; a[i] = a[r]; a[r] = t;

    quicksort(a, l, i - 1);
    quicksort(a, i + 1, r);

    }
    return;
}

int main()
{
    int i, a[3]; // assuming size is 10

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    int l = 0; // I am passing size of the array
    int r = 2; // position of last element

    quicksort(a, l, r);

       int s;

    for(s = 0; s < 3; s++)
    {
        printf("%d ", a[s]);
    }
    return 0;
}
