// Subarray permutations

#include <stdio.h>

int compute()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if (n == 1 && k == 1)
        printf("1\n");
    else
    {
        if (k < 2 || k > n)
            printf("-1\n");

        else
        {
            int count = 0;

            for (int i = 0; i < k - 1; i++)
            {
                printf("%d ", i + 1);
                count = i;
            }

            for (int i = 0; i < n - count - 1; i++)
            {
                printf("%d ", n - i);
            }

            printf("\n");
        }
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
        compute();
}