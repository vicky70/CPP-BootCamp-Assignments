// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int length=0;
    printf("Enter any String: ");
    fgets(str, 20, stdin);
    length = strlen(str);
    printf("Reverse string is: ");
    for (int i = length; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}