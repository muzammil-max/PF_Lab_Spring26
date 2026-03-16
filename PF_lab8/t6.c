#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of Matx a: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matri b: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication not possible\n");
        return 0;
    }

    printf("\nEnter Matrix A elements:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter Matrix B elements:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(k=0;k<c1;k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\nResult Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}