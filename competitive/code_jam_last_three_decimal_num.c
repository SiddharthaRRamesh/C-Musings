#include <stdio.h>
#include <math.h>
int main()
{
    int n, s[10], top = -1, i;
    double m;

    printf("Enter power for value 5.236067977: ");
    scanf("%lf", &m);

    m = pow(5.236067977, m);

    n = (int) (m + 1) - 1;

    printf("%d\n", n);

    while(n > 0)
    {
        s[++top] = n % 10;
        n = n / 10;
    }

    printf("%d\n", top);

    if(top == 0)
    {
        s[1] = 0;
        s[2] = 0;
    }

    if(top ==1)
    {
        s[2] = 0;
    }

    for(i = 2; i >= 0; i--)
      printf("%d", s[i]);
}
