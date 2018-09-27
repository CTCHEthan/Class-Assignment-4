#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userInput;

    do
    {


        printf("Choose and option: \n1 New Game \n2 Load Game \n3 More Options \n4 Quit \n Your Selection:" );
        scanf("%d", &userInput);

        switch (userInput)
        {
        case 1:
            printf("You chose New Game! \n\n");
            break;

        case 2:
            printf("You chose Load Game! \n\n");
            break;

        case 3:
            printf("You chose More Options! \n\n");
            break;

        case 4:
            printf("You chose Quit! \n\n");
            break;
        }

    }
    while (userInput != 4);


    //printf("Hello world!\n");
    return 0;
}
