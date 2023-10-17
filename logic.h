// this function sets up the gamemode either single player, or two player
int setup(bool end);
// this function gets the name of the player
std::string name();
//this function takes and decides the userinput
void showMap(char grid[3][3], bool Tutorial);
// this function shows the tutorial depending on the gamemode
void tutorial(int gamemode, char grid[3][3]);
// this function makes the computers move
void cMove(char grid[3][3]);
// this function makes the moves for players
bool Pmove(char grid[3][3], int move, char element);
// this checks if any of the players win
bool Victory(char[3][3], char element);
// this is the single player gamemode
bool singlePlayer(char grid[3][3], std::string Uname, bool end);
// this is the two player gamemode
bool twoPlayer(char grid[3][3], std::string p1Name, std::string p2Name, bool end);
