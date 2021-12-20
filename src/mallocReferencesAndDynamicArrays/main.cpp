#include<iostream>
#include"lib/mallocAndReferences.h"
using namespace std;

int main(){
    int studentsTotal;
    float *grade1;
    float *grade2;
    float *grade3;
    char **names;

    getNumberOfStudents(studentsTotal);
    getStudentsAndGrades(studentsTotal, names, grade1, grade2, grade3);
    showGrades(studentsTotal, names, grade1, grade2, grade3);

    return 0;
}
