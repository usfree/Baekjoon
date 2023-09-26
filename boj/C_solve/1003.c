#include <stdio.h>
#include <string.h>

int dp[41] = { 0, 1, 1 };

int main(void)
{
    int t, n;

    for (int i = 3; i < 41; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]);
    
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        getchar();
        if (n == 0)
            printf("1 0\n");
        else if (n == 1)
            printf("0 1\n");
        else
            printf("%d %d\n", dp[n - 1], dp[n]);
    }
}