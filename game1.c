#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rn(int n)
{
    srand(time(NULL));  // Move the srand call here to seed the random number generator once
    return rand() % n;
}

int main()
{
    int k = 0, h = 0, i = 0;
    
    printf("Type\n0 for ROCK\n1 for PAPER\n2 for SCISSORS.\n");

    while (i < 3)
    {
        int a = rn(3);
        int b;
        scanf("%d", &b);

        if (a == 0 && b == 0)
        {
            k++;
            h++;
        }
        else if (a == 0 && b == 1)
        {
            h++;
        }
        else if (a == 0 && b == 2)
        {
            k++;
        }
        else if (a == 1 && b == 0)
        {
            k++;
        }
        else if (a == 1 && b == 1)
        {
            h++;
            k++;
        }
        else if (a == 1 && b == 2)
        {
            h++;
        }
        else if (a == 2 && b == 0)
        {
            h++;
        }
        else if (a == 2 && b == 1)
        {
            k++;
        }
        else
        {
            h++;
            k++;
        }
        i++;
    }

    if (h > k)
    {
        printf("YOU WON");
    }
    else if (h < k)
    {
        printf("YOU LOSE");
    }
    else
    {
        printf("TIE");
    }

    return 0;
}
