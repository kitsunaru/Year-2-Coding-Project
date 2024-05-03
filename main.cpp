#include "SeaOfThieves.h"
#include <iostream>

int main()
{
    int n;
    std::cin >> n;


    SeaOfThieves land(n);
    while (true)
    {
        char input; //receives input for the game
        std::cin >> input; //stores user input into 'input'
        if (input == 'w')
        {
            land.UP(); // assign 'u' to UP
        }

        else if (input == 's')
        {
            land.DOWN(); // assign 'd' to DOWN
        }

        else if (input == 'd')
        {
            land.LEFT(); // assign 'l' to LEFT
        }

        else if (input == 'a')
        {
            land.RIGHT(); // assign 'r' to RIGHT
        }

        else if (input == 'h')
        {
            land.hide_coin(); // assign 'h' to hide_coin
        }

        else if (input == 'g')
        {
            land.take_coin(); // assign 'g' to take coin
        }

        else if (input == 'e')
        {
            land.finish_program(); // assign 'e' to finish_program
            break;
        }
    }
}
