#include<iostream>
#include"lib/firstClassHeader.hpp"
using namespace std;

int main(){
    float firstNumber = readNumber();
    float secondNumber = readNumber();
    char operation = readOperationType();

    cout << "Result = " << calculateFunction(firstNumber, secondNumber, operation);

    return 0;
}
