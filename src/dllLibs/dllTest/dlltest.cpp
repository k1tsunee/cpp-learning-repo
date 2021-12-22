#include"dlltest.h"
#include<iostream>

using namespace std;

DllTest::DllTest(){
    cout << "Constructor was called.\n";
}

void DllTest::operation(){
    cout << "Method was called.\n";
}
