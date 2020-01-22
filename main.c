#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter , num ,j=0;
    printf("enter a number");
    scanf("%d",&num);
    for(counter=2 ;counter<=num ; counter++ )
    {
        if(num%counter==0)
        {
             j++;
        }
        if(j==0)
        {
             printf("the number is prime");
             break;
        }

        else
        {
            printf("the number is not prime");
            break;
        }
    }
    return 0;
}
