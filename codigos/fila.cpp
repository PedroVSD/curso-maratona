#include <iostream>
#include <vector>
//#include <map>

using namespace std;

int main(void){
    vector <pair<int, bool>> fila;

    int qnt;
    cin >> qnt;

    for(int i = 0; i < qnt; i++){
        int n;
        cin >> n;
        fila.push_back(make_pair(n, true));
    }

    int qntSai;
    cin >> qntSai;

    for(int i = 0; i < qntSai; i++){
        int m;
        cin >> m;
        for(auto &i : fila) {
            if(i.first == m) {
                i.second = false;
                break;
            }
        }
    }

    for(auto i : fila){
        if(i.second == true){
            cout << i.first << " ";
        }
    }

    cout << endl;
}
