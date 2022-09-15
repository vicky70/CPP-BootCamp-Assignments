// Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.
#include<stdio.h>
#include<string.h>
void swap(char*, char*);
int main()
{
    char str[10][20];
    printf("Enter 10 city name\n");
    for (int i = 0; i < 10; i++)
    {
        fgets(str[i], 20, stdin);
    }

    for (int i = 0; i < 9; i++)
    {
        
        for (int j = i+1; j < 10 ; j++)
        {
            if (strcmp(str[i],str[j]) > 0)
            {
                swap(str[i], str[j]);
            }
        }
    }
    printf("Sorted names are listed below:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s", str[i]);
    }
    
    return 0;
}
void swap(char str[], char str1[])
{
    char temp[20];
    strcpy(temp, str);
    strcpy(str, str1);
    strcpy(str1, temp);
}