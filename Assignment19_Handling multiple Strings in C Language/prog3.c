// Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter number of strings do want too enter:");
    scanf("%d", &n);
    char str[n][20];
    fflush(stdin);
    printf("Enter your %d strings:", n);
    for (int i = 0; i < n; i++)
    {
        fgets(str[i], 20, stdin);
    }
    fflush(stdin);
    printf("The input Strings are listed below:\n");
    for (int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    return 0;
}