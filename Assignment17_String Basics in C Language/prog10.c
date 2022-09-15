// Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char arr[30];
    int arr1[30], count = 0;
    printf("Enter String:");
    fgets(arr, 30, stdin);
    for (int i = 0; arr[i]; i++)
    {
        count = 0;
        for (int j = i; arr[j]; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        arr1[i] = count;
    }
    fflush(stdin);
    printf("Frequency of characters are:\n");
    for (int i = 0; arr[i]; i++)
    {
       printf("%d ", arr1[i]);
    }
    printf("repectivly:");
    return 0;
}