// Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main(){
    char str[20];
    int count = 0;
    printf("Enter any string:");
    scanf("%s", str);
    for (int i = 0; str[i]; i++)
    {
        count++;
    }
    printf("Length of given string is: %d", count);
    return 0;
}