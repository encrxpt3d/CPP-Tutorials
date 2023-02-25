#include <stdlib.h>
#include <iostream>
#include <string>

using std::cout, std::cin, std::string, std::endl;

int main()
{
    cout << "What is your name?\n";

    string name;

    cin >> name;
    cout << "Your name is: " << name << endl;

    system("read -p 'Press [Any Key] to continue . . .' var");
    return 0;
}