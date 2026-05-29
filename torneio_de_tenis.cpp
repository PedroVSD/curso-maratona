#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<char> jogos(6);
    int qnt_vitorias = 0;

    for(int i = 0; i < 6; i++){
        cin >> jogos[i].to_lower();
        if(jogos[i] == 'V'){
            qnt_vitorias++;
        }
    }

    if(qnt_vitorias >= 5){
        cout << 1 << endl;
    }
    else if(qnt_vitorias >= 3){
        cout << 2 << endl;
    }
    else if(qnt_vitorias >= 1){
        cout << 3 << endl;
    }
    else{
        cout << -1 << endl;
    }
}
