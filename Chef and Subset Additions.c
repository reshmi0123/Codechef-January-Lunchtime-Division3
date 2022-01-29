// Chef and Subset Additions 

#include <stdio.h>

int main()
{

    int T;
    scanf("%d", &T);
    while (T--)

    {

        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if ((a == b + c) | (b == a + c) | (c == a + b))

            printf("YES\n");

        else

            printf("NO\n");
    }
}