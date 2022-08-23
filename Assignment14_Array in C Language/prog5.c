// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main(){
    int arr[10], smallest;
    printf("Enter 10 number:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
        
        if (arr[i] < arr[i+1])
        {
            smallest = arr[i];
        }
        else{
            smallest = arr[i+1];
        }
    }
    printf("The greater is: %d",smallest);
    return 0;
}