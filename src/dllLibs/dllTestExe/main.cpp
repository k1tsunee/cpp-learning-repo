#include <QCoreApplication>
#include<iostream>
#include<dlltest.h>

using namespace std;

int main(){
    DllTest obj;

    cout << "Start test!\n";

    obj.operation();

    cout << "Test finished!\n";

    return 0;
}
