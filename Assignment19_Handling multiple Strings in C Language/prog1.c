// Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.
#include<string.h>
#include<stdio.h>
int main()
{
    char str[5][20];
    int arr[30], count=0;
    printf("Enter any five strings:");
    for (int i = 0; i < 5; i++)
    {
       scanf("%s", str[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        count=0;
        for (int j = 0; str[i][j]; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i'|| str[i][j] == 'o' || str[i][j] == 'u')
            {
                count++;
            }
        }
        arr[i] = count;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Number of vowels in %d string is: %d\n",i+1, arr[i]);
    }
    return 0;
}