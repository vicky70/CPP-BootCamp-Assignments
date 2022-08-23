// Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include<stdio.h>
int main(){
    int a[3][3], count = 0;
    printf("Enter sparse marices values:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (a[i][j] == 0)
           {
                count++;
           }
        }
    }
    if (count > (3 *3)/2)
    {
        printf("given matrices is sparse matrice:");
    }
    else{
        printf("given matrices is not sparse matrice:");
    }
    return 0;
}