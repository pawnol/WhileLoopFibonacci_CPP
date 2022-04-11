/*
While Loop Fibonacci
Pawelski
4/10/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    int position;
    std::cout << "What position of the Fibonacci Sequence do you want to calculate? >> ";
    std::cin >> position;
    if (position == 0)
    {
        std::cout << "That will be 0.\n";
    }
    else if (position == 1)
    {
        std::cout << "That will be 1.\n";
    }
    else if (position > 1)
    {
        int i = 2;
        unsigned long previous = 0, current = 1, next_position;
        while (i <= position)
        {
            next_position = current + previous;
            previous = current;
            current = next_position;
            i++;
        }
        std::cout << "That will be " << current << ".\n";
    }
    else
    {
        std::cout << "Invalid position!\n"
    }
    return 0;
}