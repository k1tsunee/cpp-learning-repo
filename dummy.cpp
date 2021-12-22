#include<iostream>
#include<vector>
#include<list>

using namespace std;

void teste_vector(){
    vector<int> vi;
    vector<int> vi2(100);

    vi.resize(100, 0);

    vi[10] = 100;
    vi2[10] = vi[10];

    cout << vi[10] << endl;
    cout << vi2[10] << endl;

    vi.push_back(99);

    cout << vi[100] << endl;

    vector<float> vp;
    vector<char> vc;
    vector<char*> vs;

    vector<int> vcc(100);
    vector<int> vcp(100);

    vcc = vcp;
}

void teste_listas(){
    list<int> li;

    li.push_back(10);
    li.push_front(5);

    int inicio = li.front();
    int final = li.back();

    cout << "inicio " << inicio << endl;
    cout << "final " << final << endl;

    li.pop_front();
    li.pop_back();

    cout << "itens na lista: " << li.size() << endl;
}

void teste_iteradores(){
    vector<int> vi;
    vi.resize(5, 3);

    for(vector<int>::iterator it = vi.begin(); it!= vi.end(); it++){
        cout << *it << endl;
    }

    list<int> li;
    li.push_back(4);
    li.push_back(4);
    li.push_back(4);
    li.push_back(4);
    li.push_back(4);
}

void teste_iterador_reverso(){
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(5);
    li.push_back(7);

    for(list<int>::reverse_iterator it = li.rbegin(); it!= li.rend(); it++){
        cout << *it << endl;
    }
    
}

int main(){
    teste_vector();
    teste_listas();
    teste_iteradores();
    teste_iterador_reverso();
    return 0;
}
