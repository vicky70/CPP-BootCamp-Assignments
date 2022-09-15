// Write a program to convert a given string into lowercase
#include<stdio.h>
int main(){
    char str[20];
    printf("Enter any string: ");
    fgets(str, 20, stdin);
    fflush(stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    printf("lowercase string is: %s", str);
    return 0;
}