#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include"contactList.hpp"

using namespace std;

void consoleClearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void includeContact(map<string, string> &contacts){
    string name;
    string phoneNumber;

    cout << "Please input a name: ";
    getline(cin, name);
    cout << "Please input a phone number ";
    getline(cin, phoneNumber);

    if(contacts.find(name) != contacts.end()){
        consoleClearScreen();
        cout << "Contact updated successfully!\n";
    } else{
        consoleClearScreen();
        cout << "Contact added successfully!\n";
    }

    contacts[name] = phoneNumber; 
}

void listContacts(map<string, string> &contacts){
    int n = 1;

    for(map<string, string>::iterator it = contacts.begin(); it != contacts.end(); ++it){
        string name = it->first;
        string phoneNumber = it->second;

        cout << n << " - " << name << ": " << phoneNumber << endl;
        n++;
    }
    cout << "You have " << contacts.size() << " contact(s)!" << endl;
}

void saveContactsList(map<string, string> &contacts){
    fstream contactsFile("contacts.sav", fstream::out | fstream::trunc);

    if(!contactsFile.is_open()){
        consoleClearScreen();
        cout << "./contacts.sav: No such file or directory";
        return;
    }

    int n = 1;

    for(map<string, string>::iterator it = contacts.begin(); it != contacts.end(); ++it){
        string name = it->first;
        string phoneNumber = it->second;

        contactsFile << n << " - " << name << ": " << phoneNumber << endl;
        n++;
    }
    consoleClearScreen();
    cout << "Saved successfully!\n";
}

void removeContact(map<string, string> &contacts){
    string nameToRemove;

    cout << "Please, provide a name to exclusion: ";
    getline(cin, nameToRemove);

    map<string, string>::iterator it = contacts.find(nameToRemove);

    if(it != contacts.end()){
        contacts.erase(it);
        consoleClearScreen();
        cout << "Contact removed successfully!\n";
    } else{
        consoleClearScreen();
        cout << "Contact not found!\n";
    }
}

void searchContacts(map<string, string> &contacts){
    string nameToSearch;

    int n = 1;

    cout << "Please, provide a name to search: ";
    getline(cin, nameToSearch);
    consoleClearScreen();
    for(map<string, string>::iterator it = contacts.begin(); it != contacts.end(); ++it){
        string name = it->first;
        string phoneNumber = it->second;

        if(name.find(nameToSearch) != -1){
            cout << name << ": " << phoneNumber << endl;
            n++;
        }
    }

    cout << "Found " << n-1 << " contact(s)" <<endl;
}

void eventLoop(map<string, string> &contacts){
    char op;

    do{
        cout << "Choose a command: \n" << "(A)dd\n(L)ist\n(S)ave\nsearc(H)\n(R)emove\n(E)xit\n";
        cin >> op;
        cin.ignore();

        switch(op){
            case 'a':
            case 'A':
                consoleClearScreen();
                includeContact(contacts);
            break;

            case 'l':
            case 'L':
                consoleClearScreen();
                listContacts(contacts);
            break;

            case 's':
            case 'S':
                consoleClearScreen();
                saveContactsList(contacts);
            break;

            case 'h':
            case 'H':
                consoleClearScreen();
                searchContacts(contacts);
            break;

            case 'r':
            case 'R':
                consoleClearScreen();
                removeContact(contacts);
            break;

            case 'e':
            case 'E':
                return;

            default:
                consoleClearScreen();
                cout << "Unknown command!\n";
            break;
        }
    } while(op != 'e');
}
