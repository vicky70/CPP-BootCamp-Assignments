// Write a program in C to find the sum of rows and columns of a Matrix
#include<stdio.h>
int main(){
    int a[3][3], sumRows=0, sumCol=0;
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
        for (int j = 0; j < 3; j++)
        {
            sumRows += a[i][j];
        }
        printf("Sum of %d Row is: %d\n", i+1, sumRows);
        sumRows = 0;
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumCol += a[j][i];
            
        }
        printf("Sum of %d Columns is: %d\n", i+1, sumCol);
        sumCol = 0;
    }
    return 0;
}