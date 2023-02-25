#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    cout << "Do you want to play a game? (y/n): ";

    char response = getchar();
    cout << "You responded with: " << response << endl;

    tolower(response) == 'y' ? cout << "Let's play a game, then!" << endl : cout << "Oh well. Cya later!" << endl;

    system("read -p 'Press Enter to continue . . .' var");
    return 0;
}