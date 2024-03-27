#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, attempts = 0;
    const int max_attempts = 5;

    srand(time(NULL));

    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. You have %d attempts to guess it.\n",max_attempts);
    do
    {
        printf("Enter your guess : ");
        scanf("%d",&guess);
        attempts++;

        if(guess > number)
        {
            printf("Too High!, Try Again.\n");
        }
        else if(guess < number)
        {
            printf("Too Low!, Try Again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n",number,attempts);
            break;
        }
    } while(attempts < max_attempts);

    if(attempts == max_attempts)
    {
        printf("Sorry!, You've used all your attempts. The number was %d.\n",number);
    }
    return 0;
}