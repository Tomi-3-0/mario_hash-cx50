#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do{
        n = get_int("Height (input a number between 1 and 8, inclusive): ");
    }
    while(n < 1  || n > 8);

    // for each row
    for (int i = 1; i <= n; i++) {
        // define hashes,
        int hashes = i;
        //define spaces
        int spaces_required = n - hashes;
        //for each column:
        //1. print spaces
        for (int j = 1; j<= spaces_required; j++)
        {
            printf(" ");
        }
        //2. print hashes
        for (int k = 1; k<= hashes; k++)
         {
                printf("#");
        }
        //3.print 2 spaces in between right and left fence
        printf("  ");
        //print hashes. There's no need to print spaces
        for (int k = 1; k <= hashes; k++)
        {
                printf("#");
        }
        printf("\n");
i

    }
}

