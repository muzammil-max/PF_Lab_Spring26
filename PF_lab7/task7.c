#include <stdio.h>
int main() {
    // int b1[10];
    int b1[10]= {2,3,5,3,5,9,1,2,8,1};
    int copy[10]={};
    int u = 0;
    int m = 0;
    // for (int i =0; i <=9;i++) {
    //     printf("\nEnter the values for number %d: ",i+1);
    //     scanf("%d",&b1[i]);
    // }

    for (;m <=9;m++) {
        if (m ==0) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;

            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            } else if (b1[m] == b1[m+4]) {
                copy[u] = m+4;
                u++;
            } else if (b1[m] == b1[m+5]) {
                copy[u] = m+5;
                u++;
            } else if (b1[m] == b1[m+6]) {
                copy[u] = m+6;
                u++;
            } else if (b1[m] == b1[m+7]) {
                copy[u] = m+7;
                u++;
            }  else if (b1[m] == b1[m+8]) {
                copy[u] = m+8;
                u++;
            } else if (b1[m] == b1[m+9]) {
                copy[u] = m+9;
                u++;
            }
        } else if (m==1) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;

            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            } else if (b1[m] == b1[m+4]) {
                copy[u] = m+4;
                u++;
            } else if (b1[m] == b1[m+5]) {
                copy[u] = m+5;
                u++;
            } else if (b1[m] == b1[m+6]) {
                copy[u] = m+6;
                u++;
            } else if (b1[m] == b1[m+7]) {
                copy[u] = m+7;
                u++;
            }  else if (b1[m] == b1[m+8]) {
                copy[u] = m+8;
                u++;
            }
        } else if (m==2) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;
            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            } else if (b1[m] == b1[m+4]) {
                copy[u] = m+4;
                u++;
            } else if (b1[m] == b1[m+5]) {
                copy[u] = m+5;
                u++;
            } else if (b1[m] == b1[m+6]) {
                copy[u] = m+6;
                u++;
            } else if (b1[m] == b1[m+7]) {
                copy[u] = m+7;
                u++;
            }

        } else if (m==3) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;
            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            } else if (b1[m] == b1[m+4]) {
                copy[u] = m+4;
                u++;
            } else if (b1[m] == b1[m+5]) {
                copy[u] = m+5;
                u++;
            } else if (b1[m] == b1[m+6]) {
                copy[u] = m+6;
                u++;
            }
        } else if (m==4) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;
            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            } else if (b1[m] == b1[m+4]) {
                copy[u] = m+4;
                u++;
            } else if (b1[m] == b1[m+5]) {
                copy[u] = m+5;
                u++;
            }
        } else if (m==5) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;
            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            } else if (b1[m] == b1[m+4]) {
                copy[u] = m+4;
                u++;
            }
        } else if (m==6) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;
            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            } else if (b1[m] == b1[m+3]) {
                copy[u] = m+3;
                u++;
            }
        } else if (m==7) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;

            } else if (b1[m] == b1[m+2]) {
                copy[u] = m+2;
                u++;
            }
        } else if (m==8) {
            if (b1[m]==b1[m+1]) {
                copy[u] = m+1;
                u++;
            }
        } else if (m==9) {
            //S=do nothingg meowwww
        }
    }
    int tmp = 0;
    int h =0;
    //now sort the copy array
    while (h < 9) {
        if (copy[h]> copy[h+1]) {
            tmp = copy[h];
            copy[h] = copy[h+1];
            copy[h+1] =tmp;
            h=0;
        } else {
            h++;
        }
    }
    int finalarr[100]={};
    int l = 0;
    for (int y =0;y<=9;y++) {
        if (copy[y] !=0) {
            finalarr[l] = copy[y];
            l++;
        }
    }
//0123
//3479
    int r = 0;
    for (int b = 0; b <= 9; b++) {
        if (r <= 3 && b == finalarr[r]) {
            b1[b] = -1;
            r++;
        }
    }
        for (int k = 0; k <=9;k++) {
            printf("%d",b1[k]);
        }
}