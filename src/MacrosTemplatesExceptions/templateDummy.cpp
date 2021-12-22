#include<iostream>

using namespace std;

template<typename T>
T media(T a, T b, T c){
    return (a + b + c) / 3;
}

int main(){
    cout << media<int>(7.8, 7, 10) << endl;

    return 0;
}
