// Write a program in C to copy one string to another string
#include<stdio.h>
int main()
{
    char arr[30], arr1[30];
    printf("Enter any string:");
    fgets(arr, 30, stdin);
    for (int i = 0; arr[i]; i++)
    {
        arr1[i] = arr[i];
    }
    printf("Array is copied:\n");
    for (int i = 0; arr1[i]; i++)
    {
        printf("%c", arr1[i]);
    }
    
    return 0;
}