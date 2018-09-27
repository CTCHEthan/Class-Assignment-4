#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Prompt the user for the length of the snake.

    printf("Enter the length of the snake: ");

    //Get input from user
    int snakeLength;
    scanf("%d", &snakeLength);

    //Start building the snake starting with the tail
    printf("***");

    //Build the snake body
    for (int i = 0; i < snakeLength; i++)
        {
        printf("=");
        }

    printf("<:>~");

    //printf("Hello world!\n");
    return 0;
}
