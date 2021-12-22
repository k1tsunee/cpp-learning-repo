#include<iostream>

using namespace std;

int main(){
    int count = 0;

    try{
        while(true){
            new int[200000];
            cout << ++count << endl;
        }
    } catch(bad_alloc &e){
        cout << "Out of memory!\n";
        return 1;
    } catch(...){
        cout << "Unknown exception!\n";
    }
    
    return 0;
}
