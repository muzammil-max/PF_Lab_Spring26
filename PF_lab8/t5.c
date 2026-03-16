#include <stdio.h>

int main()
{
    int det = 0;
    int arr[3][3];
    int cofactor[3][3];

    for (int i = 0; i <= 3 - 1; i++)
    {
        for (int j = 0; j <= 3 - 1; j++)
        {
            printf("Enter the element:\n");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nNormal Array\n");
    for (int i = 0; i <= 3 - 1; i++)
    {
        for (int j = 0; j <= 3 - 1; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Array\n");

    for (int i = 0; i <= 3 - 1; i++)
    {
        for (int j = 0; j <= 3 - 1; j++)
        {
            printf(" %d ", arr[j][i]);
        }
        printf("\n");
    }

    // Determinant
    det =
        (arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2])) -
        (arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[1][2])) +
        (arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]));

    printf("\nDeterminant: %d\n", det);

    // COFACTOR MATRIX
    cofactor[0][0] = (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]);
    cofactor[0][1] = -(arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]);
    cofactor[0][2] = (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    cofactor[1][0] = -(arr[0][1] * arr[2][2] - arr[0][2] * arr[2][1]);
    cofactor[1][1] = (arr[0][0] * arr[2][2] - arr[0][2] * arr[2][0]);
    cofactor[1][2] = -(arr[0][0] * arr[2][1] - arr[0][1] * arr[2][0]);

    cofactor[2][0] = (arr[0][1] * arr[1][2] - arr[0][2] * arr[1][1]);
    cofactor[2][1] = -(arr[0][0] * arr[1][2] - arr[0][2] * arr[1][0]);
    cofactor[2][2] = (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);

    printf("\nCofactor Array\n");

    for (int i = 0; i <= 3 - 1; i++)
    {
        for (int j = 0; j <= 3 - 1; j++)
        {
            printf(" %d ", cofactor[i][j]);
        }
        printf("\n");
    }

    // Adjoint (Transpose of cofactor)
    printf("\nAdjoint Array\n");

    for (int i = 0; i <= 3 - 1; i++)
    {
        for (int j = 0; j <= 3 - 1; j++)
        {
            printf(" %d ", cofactor[j][i]);
        }
        printf("\n");
    }

    // Inverse
    printf("\nInverse Array\n");

    float inv[3][3];

    for (int i = 0; i <= 3 - 1; i++)
    {
        for (int j = 0; j <= 3 - 1; j++)
        {
            inv[i][j] = 1.0 / arr[i][j];
            printf(" %.2f ", inv[i][j]);
        }

        printf("\n");
    }

}