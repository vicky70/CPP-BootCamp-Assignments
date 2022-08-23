// Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main(){
    int a[3][3];
    printf("Enter matrices values:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("%d ",a[i][j]);
            i++;
        }
    }
    return 0;
}