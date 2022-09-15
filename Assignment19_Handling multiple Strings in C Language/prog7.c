// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20];
    int arr[10];
    printf("Enter number of ip adress you wanna enter:");
    int count;
    scanf("%d",count);
    for (int i = 0; i < count; i++)
    {
        gets(str[i]);
    }
    int m=0, count1;
    char *a = strtok(str[m], ".");
    while (a != NULL)
    {
        *a = strtok(str[m++], ".");
        int x = atoi(a);
        if ((x >= 0) && (x <= 255))
        {
            count1++;
            arr[m] = m;
        }
        a = strtok(NULL, ".");
    }
    for (int i = 0; i < count1; i++)
    {
        printf("Valid ip adddress are: %s", str[arr[i]]);
    }
    return 0;
}
//  123.45.12.67    IPv4