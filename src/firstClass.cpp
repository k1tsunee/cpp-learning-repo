#include<iostream>
#include"lib/firstClassHeader.h"
using namespace std;

int main(){
    float firstNumber = readNumber();
    float secondNumber = readNumber();
    char operation = readOperationType();

    cout << "Result = " << calculateFunction(firstNumber, secondNumber, operation);

    return 0;
}
