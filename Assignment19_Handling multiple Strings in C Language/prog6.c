// Write a program to print the strings which are palindrome in the list of strings
#include<stdio.h>
#include<string.h>
int palindrome(char*);
int length(char*);
int main()
{
    char str[10][30], arr[30];
    int k=0, l;
    printf("Enter number string do you want too find palindrome:");
    int n;
    scanf("%d",&n);
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
        fflush(stdin);
    }
    for (int i = 0; i < n; i++)
    {
        int Not = palindrome(str[i]);

        if (Not != 0)
        {
            printf("\nPalindrome string is: %s", str[i]);
        }
    }
    
    
    return 0;
}
int palindrome(char b[])
{
    char aux[30];
    int len = length(b);
    for (int i = 0; b[i]; i++)
    {
        aux[i] = b[i];
    }
    int k =0;
    for (int i = len; i >= 0; i--)
    {
        if (aux[i] == b[k])
        {
            k++;
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int length(char arr[])
{
    int count=0;
    for (int i = 0; arr[i]; i++)
    {
        count++;
    }
    return count - 1;
}