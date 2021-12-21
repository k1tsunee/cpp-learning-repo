#ifndef CONTACTLIST_HPP_
#define CONTACTLIST_HPP_

using namespace std;

void consoleClearScreen();
void includeContact(map<string, string> &contacts);
void listContacts(map<string, string> &contacts);
void saveContactsList(map<string, string> &contacts);
void removeContact(map<string, string> &contacts);
void searchContacts(map<string, string> &contacts);
void eventLoop(map<string, string> &contacts);

#endif