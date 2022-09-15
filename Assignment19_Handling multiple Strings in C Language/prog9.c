// Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>
int calfact(int);
int main()
{
    char list[10][20] = {"vicky", "raaz", "farhan", "aarshi", "jamid", "alihassan", "noorain", "rizwi", "alina", "fiza"};
    char user[20];
    int i, result, fact;
    printf("Enter your user_name to calculate factorial:");
    scanf("%s", user);
    for ( i = 0; i < 10; i++)
    {
        if (strcmp(list[i], user) == 0)
        {
            printf("Enter number:");
            scanf("%d", &fact);
            result = calfact(fact);
            printf("factorial of %d is: %d", fact, result);
            break;
        }
    }
    if (i > 9)
    {
        printf("Error:\n you are not authorized to calculate factorial:");
    }
    
    return 0;
}
int calfact(int x)
{
    if (x <= 0)
    {
        return 1;
    }
    else
    {
        return x * calfact(x-1);
    }
}