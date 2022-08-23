// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void arrayRotationL(int arr[], int, int);
void arrayRotationR(int arr[], int, int);
int main(){
    int n,ro;
    int dir;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter number of rotation (rotation number should be less then size of the array:)\n");
    scanf("%d",&ro);
    printf("Enter \"0\" for left and \"1\" for right");
    scanf("%d",&dir);

    if (dir == 0)
    {
        arrayRotationL(arr, n, ro);
    }
    else{
        arrayRotationR(arr, n, ro);
    }
    return 0;
}
void arrayRotationL(int b[], int n, int rotation){
    int temp=0;
    for (int i = 0; i < rotation; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            temp = b[j];
            b[j] = b[j+1];
            b[j+1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
}
void arrayRotationR(int b[], int n, int rotation){
    int temp=0;
    for (int i = 0; i < rotation; i++)
    {
        for (int j = n-1; j > 0; j--)
        {
            temp = b[j];
            b[j] = b[j-1];
            b[j-1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
}