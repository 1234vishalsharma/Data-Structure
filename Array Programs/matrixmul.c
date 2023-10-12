#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], c[5][5], i, j, k, m, n, o, p;
    printf("Enter the order of first matrix:\n");
    scanf("%d %d", &m, &n);
    printf("Enter the Elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the order of Second matrix:\n");
    scanf("%d %d", &o, &p);
    if (n != o)
    {
        printf("Cannot perform multiplication on this matrix:\n");
    }
    else
    {
        printf("Enter the Elements of Second matrix:\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("First matrix is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix is:\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < o; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        printf("Product of both the matrices are:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}