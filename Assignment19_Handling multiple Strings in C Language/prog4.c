// Write a program to search a string in the list of strings
#include<stdio.h>
#include<string.h>
int main()
{
    int n, k;
    printf("Enter number of string do you want to enter:");
    scanf("%d", &n);
    char str[n][20], search[20];
    printf("Enter your %d Strings:");
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        fgets(str[i], 20, stdin);
    }
    printf("Enter a string to be searched:");
    fflush(stdin);
    fgets(search, 20, stdin);
    fflush(stdin);
    for (k = 0; k < n; k++)
    {
        if (strcmp(search, str[k]) == 0)
        {
            printf("String %s is founded at index number: %d", search, k);
            break;
        }
    }
    if (k == n)
    {
        printf("String %s is not present in array:");
    }
    
    return 0;
}