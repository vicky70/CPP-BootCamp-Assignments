// Write a program to count vowels in a given string
#include<stdio.h>
int main(){
    char str[20];
    int count =0;
    printf("Enter any string");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("Number of vowels in given strng is: %d", count);
    return 0;
}