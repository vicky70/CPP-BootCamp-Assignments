// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main(){
    char str[20], ch;
    int count=0;
    printf("Enter any string:");
    scanf("%s", str);
    fflush(stdin);
    printf("Enter a character to find in given string:\n");
    scanf("%c", &ch);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("character occurrence in string is: %d", count);
    return 0;
}