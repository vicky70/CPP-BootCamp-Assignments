// Write a C program to sort a string array in ascending order
#include<stdio.h>
void sort(char *, int);
int main()
{
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    char arr[n];
    printf("Enter array elements:");
    scanf("%s",arr);
    sort(arr, n);
    return 0;
}
void sort(char b[], int n)
{
    for (int j = 0; b[j]; j++)
    {
        for (int i = j+1; b[i] ; i++)
        {
            if (b[j] > b[i])
            {
                char temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
    printf("Sorted array is:");
    for (int j = 0; j < n; j++)
    {
        printf("%c ",b[j]);
    }
}