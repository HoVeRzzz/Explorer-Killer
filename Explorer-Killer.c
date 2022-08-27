/*
Author: HoVeRzzz
Purpose: Testing Purposes
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;
    while (answer != 'c')
    {
        printf("type y to kill explorer.exe | type n to start explorer.exe | type c to close the program\n");
        scanf("%c", &answer);
        if (answer == 'y')
        {
            system("taskkill /IM explorer.exe /F");
            printf("'Explorer killed successfully!\n");
        }
        if (answer == 'n')
        {
            system("start explorer.exe");
            printf("Explorer started successfully!\n");
        }
        if (answer == 'c')
        {
           continue;
        }
        else
        {
            printf("INVALID!!\n");
        }
    }
    return 0;
}    

