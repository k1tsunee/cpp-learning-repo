#include<iostream>
#include"mallocAndReferences.h"
using namespace std;
#define BUFFER_SIZE 256

void getNumberOfStudents(int &total){
    cout << "How many students are there on the class?\n";
    cin >> total;
}

void getStudentsAndGrades(int total, char** &names, float* &n1, float* &n2, float* &n3){
    n1 = new float[total];
    n2 = new float[total];
    n3 = new float[total];

    names = new char*[total];

    for(int i = 0; i < total; i++){
        names[i] = new char[BUFFER_SIZE];
        cout << "Name of the student number " << i << ": ";
        cin >> names[i];

        cout << "Grade 1: ";
        cin >> n1[i];

        cout << "Grade 2: ";
        cin >> n2[i];

        cout << "Grade 3: ";
        cin >> n3[i];
    }
}

void showGrades(int total, char* names[], float n1[], float n2[], float n3[]){
    for(int i = 0; i < total; i++){
        cout << "\nName of the student number " << i << ": " << names[i];

        float media = (n1[i] + n2[i] + n3[i])/3.0f;
        
        if(media >= 7.0){
            cout << "\nYour media is: " << media << "\nYOU PASSED!\n";
        } else{
            cout << "\nYour media is: " << media << "\nYOU FAILED!\n";
        }
    }
}