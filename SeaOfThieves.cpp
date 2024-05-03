#include "SeaOfThieves.h"
#include <iostream>

SeaOfThieves::SeaOfThieves(int n)
{
    N = n;
    M = new int*[n]; // M will be the int pointer to the array of array's we're making

    for (int k = 0; k < n; k++)
    {
        M[k] = new int[n];
        for (int l = 0; l < n; l++)
        {
            M[k][l] = 0;
        }
    }
    x = 0;
    y = 0;
}

SeaOfThieves::~SeaOfThieves()
{
    for (int k = 0; k < N; k++)
    {
        delete[] M[k];
    }
    delete[] M; // destruct the allocated memory used to make the 'map'
}

void SeaOfThieves::UP()
{
    if (y != (N - 1))
    {
        y++; //increment y if y is not a negative number/not out of bounds
    }
}

void SeaOfThieves::DOWN()
{
    if (y != 0)
    {
        y--; //decrement y by 1 if it's not equal to 0
    }
}

void SeaOfThieves::LEFT()
{
    if (x != 0)
    {
        x -= 1; //decrement x by 1 if it's not equal to 0 
    }
}

void SeaOfThieves::RIGHT()
{
    if (x != (N - 1))
    {
        x++; //increment x if x is not a negative number/out of bounds
    }
}

void SeaOfThieves::take_coin()
{
    if (M[y][x] > 0)
    {
        M[y][x] -= 1; // take a coin if the array location has a number bigger than 0
    }
}

void SeaOfThieves::hide_coin()
{
    M[y][x] += 1; // hide a coin at y and x coordinates
}

void SeaOfThieves::finish_program()
{
    int total = 0;
    for (int row = 0; row < N; row++) //add to total each time the array meets these conditions, and it loops through every item in the array
    {
        for (int ph = x; ph < N; ph++)
        {
            total += M[row][ph+1]; // adds up all the coins to total, loop ends when ph reaches the end of row
        }
    }
    std::cout << total << std::endl;
}