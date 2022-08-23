// . Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main(){
    int a[3][3], count = 0, maxOne = 0, index;
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
        count = 0;
        for (int j = 0; j < 3; j++)
        {
           if (a[i][j] == 1)
           {
                count++;
           }

        }
        if (maxOne < count)
        {
            maxOne = count;
            index = i;
        }
    }
    printf("maximum one Row is: %d", index);
    return 0;
}