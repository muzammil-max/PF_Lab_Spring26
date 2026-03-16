#include <stdio.h>

int main()
{
    int i, j;
    int det = 0;

    int rows = 0, cols = 0;
    int sq = 1, rect = 1, ident = 1, zero = 1, diag = 1, scal = 1, upper = 1, lower = 1, symm = 1, skew = 1;
    int single = 1;
    int equal = 1;
    int rowmat = 0;
    int colmat = 0;
    int null = 1;

    int myarr[5][5];
    int myarr2[5][5];

    printf("Enter the number of rows:");
    scanf("%d", &rows);

    printf("\nEnter the number of cols:");
    scanf("%d", &cols);

    for (i = 0; i <= rows - 1; i++)
    {
        for (j = 0; j <= cols - 1; j++)
        {
            printf("\nEnter the element input: ");
            scanf("%d", &myarr[i][j]);
        }
    }

    printf("\nTHIS IS YOUR ARRAY:\n");

    for (i = 0; i <= rows - 1; i++)
    {
        for (j = 0; j <= cols - 1; j++)
        {
            printf(" %d ", myarr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    if (rows == cols)
    {
        rect = 0;

        for (i = 0; i <= rows - 1; i++)
        {
            for (j = 0; j <= cols - 1; j++)
            {

                if ((i == j) && (myarr[i][j] != 1))
                {
                    ident = 0;
                }

                if ((i != j) && (myarr[i][j] != 0))
                {
                    diag = 0;
                    ident = 0;
                    scal = 0;
                }

                if ((j > i) && (myarr[i][j] == 0))
                {
                    upper = 0;
                }

                if ((j > i) && (myarr[i][j] != 0))
                {
                    lower = 0;
                }
            }
        }

        if ((diag != 0) && (ident == 0))
        {
            for (int m = 0; m <= rows - 2; m++)
            {
                for (int n = 0; n <= cols - 2; n++)
                {
                    if ((m == n) && (myarr[m][n] != myarr[m + 1][n + 1]))
                    {
                        scal = 0;
                    }
                }
            }
        }
        else
        {
            scal = 0;
        }

        for (int m = 0; m <= rows - 1; m++)
        {
            for (int n = 0; n <= cols - 1; n++)
            {
                if (myarr[m][n] != myarr[n][m])
                {
                    symm = 0;
                }

                if (myarr[m][n] != -myarr[n][m])
                {
                    skew = 0;
                }
            }
        }
    }
    else
    {
        sq = 0;
        ident = 0;
        diag = 0;
        scal = 0;
        upper = lower = 0;
        symm = skew = 0;
    }

    if (rows == 2 && cols == 2)
    {
        det = (myarr[0][0] * myarr[1][1]) - (myarr[0][1] * myarr[1][0]);

        if (det != 0)
        {
            single = 0;
        }
    }

    for (int x = 0; x <= rows - 1; x++)
    {
        for (int f = 0; f <= cols - 1; f++)
        {
            if (myarr[x][f] != myarr2[x][f])
            {
                equal = 0;
            }
        }
    }

    for (int x = 0; x <= rows - 1; x++)
    {
        for (int f = 0; f <= cols - 1; f++)
        {
            if (myarr[x][f] != 0)
            {
                null = 0;
                zero = 0;
            }
        }
    }

    if (rows == 1 && rows < cols)
    {
        rowmat = 1;
    }

    if (cols == 1 && cols < rows)
    {
        colmat = 1;
    }


printf("\nMatrix Properties:\n");

if (sq == 1)
    printf("Matrix is Square\n");

if (rect == 1)
    printf("Matrix is Rectangular\n");

if (ident == 1)
    printf("Matrix is Identity\n");

if (diag == 1)
    printf("Matrix is Diagonal\n");

if (scal == 1)
    printf("Matrix is Scalar\n");

if (upper == 1)
    printf("Matrix is Upper Triangular\n");

if (lower == 1)
    printf("Matrix is Lower Triangular\n");

if (symm == 1)
    printf("Matrix is Symmetric\n");

if (skew == 1)
    printf("Matrix is Skew-Symmetric\n");

if (single == 1)
    printf("Matrix is Singular\n");
else
    printf("Matrix is Non-Singular\n");

if (rowmat == 1)
    printf("Matrix is Row Matrix\n");

if (colmat == 1)
    printf("Matrix is Column Matrix\n");

if (null == 1)
    printf("Matrix is Null (Zero) Matrix\n");

if (equal == 1)
    printf("Matrices are Equal\n");
        
}