#include <iostream>
#include <iomanip>
#include <string>
#include "header.h"
int main()
{
    char grid[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
    bool end{false};
    int gamemode = setup(end);
    tutorial(gamemode,grid);
    // single player mode
    if (gamemode == 1)
    {
        std::string playerName = name();
        end = singlePlayer(grid, playerName, end);
        exit(end);
    }
    // two player mode
    else if (gamemode == 2)
    {

        std::string p1Name;
        std::string p2Name;
        std::cout << "Player one " << std::endl;
        p1Name = name();
        std::cout << "Player two " << std::endl;
        p2Name = name();
        end = twoPlayer(grid, p1Name, p2Name, end);
        exit(end);
    }
    return 0;
}