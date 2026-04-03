#include <stdio.h>

// this is not AI code plszz T T
int grid[6][6] = {
    //   0  1  2  3  4  5
    {1, 0, 0, 0, 0, 24},   // 0
    {0, 0, 6, 0, 0, 0},    // 1
    {9, 0, 0, 0, 0, 0},    // 2
    {0, 0, 0, 19, 0, 0},   // 3
    {13, 0, 0, 0, 31, 36}, // 4
    {0, 0, 16, 0, 0, 0}};  // 5

int previousnumberx = 0;
int previousnumbery = 0;
int fahh = 0;
int nextx = 0;
int nexty = 0;
int parstate = 0;
int userinputx;
int anchor;
int rows = 0;
int cols = 0;
int userinputy;
int num = 1;
int end = 0;
int state = 0;

void display()
{
    for (int rows = 0; rows <= 6 - 1; rows++)
    {
        for (int cols = 0; cols <= 6 - 1; cols++)
        {
            printf(" %d ", grid[rows][cols]);
        }
        printf("\n");
    }
}

int main()
{
    while (end == 0)
    {

        int anchorhere = 0;
        for (int a = 0; a <= 6 - 1; a++)
        {
            for (int b = 0; b <= 6 - 1; b++)
            {
                if (grid[a][b] == num)
                {
                    previousnumberx = a;
                    previousnumbery = b;
                    anchorhere = 1;
                }
            }
        }
        printf("\n");
        if (anchorhere == 0)
        {
            display();
            printf("Please enter the location for %d\n", num);
            scanf("%d %d", &userinputx, &userinputy);

            state = 0;
            if ((userinputx >= 0 && userinputx <= 5) && (userinputy >= 0 && userinputy <= 5))
            {
                if (grid[userinputx][userinputy] == 0)
                {
                    if (
                        (previousnumberx == userinputx && ((previousnumbery - userinputy) * (previousnumbery - userinputy) == 1)) ||
                        (previousnumbery == userinputy && ((previousnumberx - userinputx) * (previousnumberx - userinputx) == 1)))
                    {
                        state = 0;
                        for (int i = 0; i <= 6 - 1; i++)
                        {
                            for (int j = 0; j <= 6 - 1; j++)
                            {
                                if (grid[i][j] == num + 1)
                                {
                                    nextx = i;
                                    nexty = j;
                                    state = 1;
                                }
                            }
                        }

                        if (state == 1)
                        {

                            if ((
                                    (nextx == userinputx && ((userinputy - nexty) * (userinputy - nexty) == 1)) ||
                                    (nexty == userinputy && ((userinputx - nextx) * (userinputx - nextx) == 1))))
                            {

                                // grid[userinputx][userinputy] = num;
                                // previousnumberx = userinputx;
                                // previousnumbery = userinputy;
                                // num++;
                                fahh = 1;
                                int potty = 0;
                            }
                        }

                        // parity rule
                        parstate = 0;
                        if (num % 2 == 0)
                        {
                            if (userinputx % 2 == 0 && userinputy % 2 == 0)
                            {
                                printf("PaRITY error");
                                parstate = 1;
                            }
                            else
                            {

                                parstate = 0;
                            }
                        }

                        if (parstate == 0 || fahh == 1)
                        {

                            grid[userinputx][userinputy] = num;
                            previousnumberx = userinputx;
                            previousnumbery = userinputy;
                            num++;
                        }
                    }

                    else

                        if (parstate == 1)
                    {
                        printf("Parity Error");
                    }
                    else if (fahh == 0)
                    {
                        printf("Not Adjacent!");
                    }
                }
                else
                {
                    printf("\nValue already here!\n");
                }
            }
            else
            {
                printf("\n Out of Bounds \n");
            }
        }
        else
        {
            num++;
        }
        if (num == 36)
        {
            end = 1;
        }
    }
}