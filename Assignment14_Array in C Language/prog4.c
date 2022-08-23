// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main(){
    int arr[10], greater;
    printf("Enter 10 number:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
    }
    greater = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (greater < arr[i])
        {
            greater = arr[i];
        }
        else
        {
            continue;
        } 
    }
    printf("The greater is: %d",greater);
    return 0;
}