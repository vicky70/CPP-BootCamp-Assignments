// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include<stdio.h>
int main(){
    char str[20];
    int alpha = 0, digit = 0, special = 0;
    printf("Enter any string: ");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alpha++;
        }
        else if (str[i] >= 48 && str[i] <= 57) 
        {
            digit++;
        }
        else{
            special++;
        }
    }
    printf("Number of alphabets in given String is: %d\n", alpha);
    printf("Number of Digits in given String is: %d\n", digit);
    printf("Number of special character in given String is: %d\n", special-1);
    return 0;
}