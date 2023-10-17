#include <iostream>
#include <iomanip>
#include <string>
#include "logic.h"
int main()
{   
    const int Splayer{1};
    const int Mplayer{2};
    char grid[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
    bool end{false};
    int gamemode = setup(end);
    tutorial(gamemode,grid);
    // single player mode
    if (gamemode == Splayer)
    {
        std::string playerName = getName();
        end = singlePlayer(grid, playerName, end);
        exit(end);
    }
    // two player mode
    else if (gamemode == Mplayer)
    {

        std::string p1Name;
        std::string p2Name;
        std::cout << "Player one " << std::endl;
        p1Name = getName();
        std::cout << "Player two " << std::endl;
        p2Name = getName();
        end = twoPlayer(grid, p1Name, p2Name, end);
        exit(end);
    }
    return 0;
}