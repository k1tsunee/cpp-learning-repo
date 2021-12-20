#include<iostream>
#include"firstClassHeader.h"
using namespace std;

float readNumber(){
    float numberToRead;

    cout << "Please, type the number.\n";
    cin >> numberToRead;

    return numberToRead;
}

char readOperationType(){
    char operationType;

    cout << "Please, type the operation type (+, -, *, /)\n";
    cin >> operationType;

    return operationType;
}

float calculateFunction(float n1, float n2, char operation){
    float result;

    switch(operation){
        case '+':
            result = n1 + n2;
        break;

        case '-':
            result = n1 - n2;
        break;

        case '*':
            result = n1 * n2;
        break;

        case '/':
            result = n1 / n2;
        break;

        default:
            cout << "Invalid operator!\n";
            result = 0;
        break;
    }

    return result;
}