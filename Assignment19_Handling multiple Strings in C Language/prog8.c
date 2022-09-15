// Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 2 )
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][30], word1[30], word2[30];
    int count, k=0, start=0;
    printf("enter number of string do you want to enter:");
    scanf("%d", &count);
    printf("Enter your strings:");
    fflush(stdin);
    for (int i = 0; i < count; i++)
    {
        gets(str[i]);
        fflush(stdin);
    }
    

    printf("Enter 1st word:");
    scanf("%s", word1);

    printf("Enter 2st word:");
    scanf("%s", word2);



    for (int i = 0; i < count; i++)
    {
        int check = strcmp(str[i], word1);
        if (check != 0)
        {
            continue;
        }
        else
        {
            start = i;
            break;
        }
    }
    for (int i = start; i < count; i++)
    {
        if (strcmp(str[i], word2) == 0)
        {
            break;
        }
        else
        {
            k++;
        }
    }
    printf("The distance b/w \" %s\" and \"%s\" strings is: %d", word1, word2, k-1);
    return 0;
}