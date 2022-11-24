#include<stdio.h>

main()
{
    int a=0;
    int i=7;
    printf("Try to guess the number.\n");
    while(a!=i)
    {
        printf("Enter your choice: \n");
        scanf("%i",&a);
        if(a>i)
        {
            printf("Your number is greater.\n");
        }
        else
        {
            if(a<i)
            {
                printf("Your number is less.\n");
            }
        }
        
        if(a>10)
        {
            printf("Your number is greater than 10.\n");
        }
        else
        {
            if(a<10)
            {
                printf("Your number is less than 10.\n");
            }
            else
            {
                printf("Your number is equal 10.\n");
            }
        }


        if(a%2 == 0)
        {
            printf("The number is divisible by 2 without a remainder.\n");
        }
        else
        {
            printf("The number is not divisible by 2 without a remainder.\n");
        }

        if(a%3 == 0)
        {
            printf("The number is divisible by 3 without a remainder.\n");
        }
        else
        {
            printf("The number is not divisible by 3 without a remainder.\n");
        }
        printf("\n\n");
    }
    printf("You guessed it. Well done.");
}