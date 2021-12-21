#include<iostream>
#include<map>
#include<string>
#include"lib/contactList.hpp"

using namespace std;

int main(){
    map<string, string> contacsList;

    consoleClearScreen();

    cout << "Welcome to this contacs list!\n";
    eventLoop(contacsList);

    consoleClearScreen();
    return 0;
}
