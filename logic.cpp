#include <iostream>
#include <string>
#include <iomanip>
// this function sets up the gamemode by returning the ascociated intiger
int setup(bool end)
{   
    const std::string Splayer{"1"};
    const std::string Mplayer{"2"};
    std::string UserInput;
    int gamemode;
    bool validInput{false};
    std::cout << "Greetings this is a practice project on my c++ journey" << std::endl;
    std::cout << "I hope you have fun playing this game" << std::endl;
    std::cout << "TLDR this is a tic tac toe game for either 2 or 1 player" << std::endl;
    std::cout << "Now now, choose the gamemode" << std::endl;
    std::cout << "For single player type in: 1, for Two player type in: 2" << std::endl;
    std::cout << "If you want to exit the game just type in: exit" << std::endl;

    while (!validInput)
    {
        std::cin >> UserInput;
        if (UserInput == Splayer || UserInput == Mplayer)
        {
            gamemode = std::stoi(UserInput);
            return gamemode;
        }
        else if (UserInput == "exit")
        {
            end = true;
            exit(end);
        }
        else
        {
            std::cout << "Invalid input please type in either 1, 2, or exit" << std::endl;
        }
    }
    return gamemode;
}
std::string getName()
{
    std::string name;
    std::cout << "Please enter your name:" << std::endl;
    std::cin >> name;
    return name;
}
void showMap(char grid[3][3], bool Tutorial)
{

    if (!Tutorial)
    {
        // using space
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        std::cout << std::setw(2) << std::setfill(' ') << grid[0][0] << std::setw(2) << "|" << std::setw(2) << grid[0][1] << std::setw(2) << "|" << std::setw(2) << grid[0][2] << std::setw(1) << "\0" << std::endl;
        // using underscore
        std::cout << std::setw(4) << std::setfill('_') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        // using space
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        std::cout << std::setw(2) << std::setfill(' ') << grid[1][0] << std::setw(2) << "|" << std::setw(2) << grid[1][1] << std::setw(2) << "|" << std::setw(2) << grid[1][2] << std::setw(1) << "\0" << std::endl;
        // usingunderscore
        std::cout << std::setw(4) << std::setfill('_') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        // using space
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        std::cout << std::setw(2) << std::setfill(' ') << grid[2][0] << std::setw(2) << "|" << std::setw(2) << grid[2][1] << std::setw(2) << "|" << std::setw(2) << grid[2][2] << std::setw(1) << "\0" << std::endl;
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
    }
    else if (Tutorial)
    {
        // using space
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        std::cout << std::setw(2) << std::setfill(' ') << "0" << std::setw(2) << "|" << std::setw(2) << "1" << std::setw(2) << "|" << std::setw(2) << "2" << std::setw(1) << "\0" << std::endl;
        // using underscore
        std::cout << std::setw(4) << std::setfill('_') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        // using space
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        std::cout << std::setw(2) << std::setfill(' ') << "3" << std::setw(2) << "|" << std::setw(2) << "4" << std::setw(2) << "|" << std::setw(2) << "5" << std::setw(1) << "\0" << std::endl;
        // usingunderscore
        std::cout << std::setw(4) << std::setfill('_') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        // using space
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
        std::cout << std::setw(2) << std::setfill(' ') << "6" << std::setw(2) << "|" << std::setw(2) << "7" << std::setw(2) << "|" << std::setw(2) << "8" << std::setw(1) << "\0" << std::endl;
        std::cout << std::setw(4) << std::setfill(' ') << "|" << std::setw(4) << "|" << std::setw(3) << "\0" << std::endl;
    }
}
void tutorial(int gamemode, char grid[3][3])
{
    const int Splayer{1};
    const int Mplayer{2};
    if (gamemode == Splayer)
    {
        bool Tutorial{true};
        std::cout << "You have chosen the single player option" << std::endl;
        std::cout << "In this gamemode your oponent will be Carl a rudimentary random number generator" << std::endl;
        std::cout << "First off here be the map:" << std::endl;
        showMap(grid, Tutorial);
        std::cout << "The numbers on the screen visualize the avaliable positions to take" << std::endl;
        std::cout << "to take a position simply type in its number" << std::endl;
    }
    else if (gamemode == Mplayer)
    {
        bool Tutorial{true};
        std::cout << "You have chosen the Multplayer option" << std::endl;
        std::cout << "In this gamemode your oponent will be one of your friends if you have those" << std::endl;
        std::cout << "or yourself:)" << std::endl;
        std::cout << "First off here be the map:" << std::endl;
        showMap(grid, Tutorial);
        std::cout << "The numbers on the screen visualize the avaliable positions to take" << std::endl;
        std::cout << "to take a position simply type in its number" << std::endl;
    }
}
void cMove(char grid[3][3])
{
    bool ValidMove{false};
    int mapSize{9};
    int startFrom{0};
    while (!ValidMove)
    {
        int move = startFrom + rand() % mapSize;
        switch (move)
        {
        case 0:
            if (grid[0][0] == '*')
            {
                grid[0][0] = 'O';
                ValidMove = true;
            }
            break;
        case 1:
            if (grid[0][1] == '*')
            {
                grid[0][1] = 'O';
                ValidMove = true;
            }
            break;
        case 2:
            if (grid[0][2] == '*')
            {
                grid[0][2] = 'O';
                ValidMove = true;
            }
            break;
        case 3:
            if (grid[1][0] == '*')
            {
                grid[1][0] = 'O';
                ValidMove = true;
            }
            break;
        case 4:
            if (grid[1][1] == '*')
            {
                grid[1][1] = 'O';
                ValidMove = true;
            }
            break;
        case 5:
            if (grid[1][2] == '*')
            {
                grid[1][2] = 'O';
                ValidMove = true;
            }
            break;
        case 6:
            if (grid[2][0] == '*')
            {
                grid[2][0] = 'O';
                ValidMove = true;
            }
            break;
        case 7:
            if (grid[2][1] == '*')
            {
                grid[2][1] = 'O';
                ValidMove = true;
            }
            break;
        case 8:
            if (grid[2][2] == '*')
            {
                grid[2][2] = 'O';
                ValidMove = true;
            }
            break;
        default:
            ValidMove = false;
        }
    }
}
bool Pmove(char grid[3][3], int move, char element)
{
    bool ValidMove;
    switch (move)
    {
    case 0:
        if (grid[0][0] == '*')
        {
            grid[0][0] = element;
            ValidMove = true;
        }
        break;
    case 1:
        if (grid[0][1] == '*')
        {
            grid[0][1] = element;
            ValidMove = true;
        }
        break;
    case 2:
        if (grid[0][2] == '*')
        {
            grid[0][2] = element;
            ValidMove = true;
        }
        break;
    case 3:
        if (grid[1][0] == '*')
        {
            grid[1][0] = element;
            ValidMove = true;
        }
        break;
    case 4:
        if (grid[1][1] == '*')
        {
            grid[1][1] = element;
            ValidMove = true;
        }
        break;
    case 5:
        if (grid[1][2] == '*')
        {
            grid[1][2] = element;
            ValidMove = true;
        }
        break;
    case 6:
        if (grid[2][0] == '*')
        {
            grid[2][0] = element;
            ValidMove = true;
        }
        break;
    case 7:
        if (grid[2][1] == '*')
        {
            grid[2][1] = element;
            ValidMove = true;
        }
        break;
    case 8:
        if (grid[2][2] == '*')
        {
            grid[2][2] = element;
            ValidMove = true;
        }
        break;
    default:
        std::cout << "Invalid move try again" << std::endl;
        ValidMove = false;
    }
    return ValidMove;
}
bool Victory(char grid[3][3], char element)
{
    // check rows
    for (int col{0}; col < 3; col++)
    {
        int count{0};
        for (int row{0}; row < 3; row++)
        {
            if (grid[col][row] == element)
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
            else
            {
                continue;
            }
        }
    }
    // check colums
    for (int row{0}; row < 3; row++)
    {
        int count{0};
        for (int col{0}; col < 3; col++)
        {
            if (grid[row][col] == element)
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
            else
            {
                continue;
            }
        }
    }
    //check diagonally
    for (int i{0}; i < 3; i++)
    {
        int count{0};
        if (grid[i][i] == element)
        {
            count++;
            if (count == 3)
            {
                return true;
            }
        }
        else
        {
            continue;
        }
    }
    //check contra diagonally
    for (int i{0}; i < 3; i++)
    {
        int count{0};
        if (grid[i][2 - i] == element)
        {
            count++;
            if (count == 3)
            {
                return true;
            }
        }
        else
        {
            continue;
        }
    }
    return false;
}
bool singlePlayer(char grid[3][3], std::string Uname, bool end)
{
    int CarlWinCount{0};
    int PlayerWinCount{0};
    int DrawCount{0};
    std::cout << "Greetings " << Uname << std::endl;
    std::cout << "Good luck beating Carl" << std::endl;
    std::cout << "You are the X" << std::endl;
    //single player loop
    while (!end)
    {
        bool gameOver{false};
        bool validInput{false};
        bool validMove{false};
        bool someoneWon{false};
        char Pelement{'X'};
        char Celement{'O'};
        //gameplay loop
        while (!someoneWon)
        {
            bool PWon{false};
            bool Cwon{false};
            //player move loop
            while (!validMove)
            {
                int move;
                std::string userInput;
                std::cout << Uname << " make your move" << std::endl;
                std::cin >> userInput;
                if (isdigit(userInput[0]))
                {
                    move = stoi(userInput);
                }
                else if (userInput == "exit" || userInput == "Exit")
                {
                    end = true;
                    return end;
                }
                validMove = Pmove(grid, move, Pelement);
            }
            PWon = Victory(grid, Pelement);
            if (PWon)
            {
                PlayerWinCount++;
                someoneWon = true;
                break;
            }
            validMove = false;
            cMove(grid);
            showMap(grid, 0);
            Cwon = Victory(grid, Celement);
            if (Cwon)
            {
                CarlWinCount++;
                someoneWon = true;
                break;
            }
            //check for empty spaces on the map
            for (int row{0}; row < 3; row++)
            {
                for (int col{0}; col < 3; col++)
                {
                    if (grid[row][col] == '*')
                    {
                        gameOver = false;
                        break;
                    }
                    else
                    {
                        gameOver = true;
                        break;
                    }
                }
            }
            if (gameOver)
            {
                DrawCount++;
                someoneWon = true;
            }
            std::cout << "Carl won : " << CarlWinCount << " " << Uname << " won : " << PlayerWinCount << " Draw : " << DrawCount << std::endl;
        }
        //new round input loop
        while (!validInput)
        {
            std::string Uin;
            std::cout << "New round Y/N?" << std::endl;
            std::cin >> Uin;
            //resetting the map
            if (Uin == "Y" || Uin == "y")
            {
                validInput = true;
                end = false;
                for (int row = 0; row < 3; row++)
                {
                    for (int col = 0; col < 3; col++)
                    {
                        grid[row][col] = '*';
                    }
                }
            }
            else if (Uin == "N" || Uin == "n")
            {
                validInput = true;
                end = true;
            }
            else
            {
                validInput = false;
                std::cout << "Invalid Input" << std::endl;
            }
        }
        //resetting booleans
        gameOver = false;
        validInput = false;
        validMove = false;
        someoneWon = false;
    }
    return end;
}
bool twoPlayer(char grid[3][3], std::string p1Name, std::string p2Name, bool end)
{
    int p1WinCount{0};
    char p1Element{'X'};
    int p2WinCount{0};
    char p2Element{'O'};
    int drawCount{0};
    // two player loop
    while (!end)
    {
        int move;
        bool gameOver{false};
        bool validInput{false};
        bool validMove{false};
        bool someoneWon{false};
        // game loop
        while (!someoneWon)
        {
            bool p1Won{false};
            bool p2Won{false};
            // Plater 1 move loop
            while (!validMove)
            {
                int move;
                std::string userInput;
                std::cout << p1Name << " make your move" << std::endl;
                std::cin >> userInput;
                if (isdigit(userInput[0]))
                {
                    move = stoi(userInput);
                }
                else if (userInput == "exit" || userInput == "Exit")
                {
                    end = true;
                    return end;
                }
                validMove = Pmove(grid, move, p1Element);
            }
            validMove = false;
            showMap(grid, 0);
            p1Won = Victory(grid, p1Element);
            if (p1Won)
            {
                p1WinCount++;
                someoneWon = true;
            }
            // player 2 move loop
            while (!validMove)
            {
                int move;
                std::string userInput;
                std::cout << p2Name << " make your move" << std::endl;
                std::cin >> userInput;
                if (isdigit(userInput[0]))
                {
                    move = stoi(userInput);
                }
                else if (userInput == "exit" || userInput == "Exit")
                {
                    end = true;
                    return end;
                }
                validMove = Pmove(grid, move, p2Element);
            }
            validMove = false;
            showMap(grid, 0);
            p2Won = Victory(grid, p2Element);
            if (p2Won)
            {
                p2WinCount++;
                someoneWon = true;
                break;
            }
            // checks for empty spaces on the map
            for (int row{0}; row < 3; row++)
            {
                for (int col{0}; col < 3; col++)
                {
                    if (grid[row][col] == '*')
                    {
                        gameOver = false;
                        break;
                    }
                    else
                    {
                        gameOver = true;
                        break;
                    }
                }
            }
            if (gameOver)
            {
                drawCount++;
                someoneWon = true;
                break;
            }
            std::cout << p1Name << " won : " << p1WinCount << " " << p2Name << " won : " << p2WinCount << " Draw : " << drawCount << std::endl;
        }
        // new round input loop
        while (!validInput)
        {
            std::string Uin;
            std::cout << "New round Y/N?" << std::endl;
            std::cin >> Uin;
            if (Uin == "Y" || Uin == "y")
            {
                validInput = true;
                end = false;
                // resetting the map
                for (int row = 0; row < 3; row++)
                {
                    for (int col = 0; col < 3; col++)
                    {
                        grid[row][col] = '*';
                    }
                }
            }
            else if (Uin == "N" || Uin == "n")
            {
                validInput = true;
                end = true;
            }
            else
            {
                validInput = false;
                std::cout << "Invalid Input" << std::endl;
            }
        }
        // resetting booleans
        gameOver = false;
        validInput = false;
        validMove = false;
        someoneWon = false;
    }
    return end;
}
