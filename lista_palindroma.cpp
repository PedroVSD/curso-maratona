#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> lista(n);
    int num_contracao = 0;
    int p_esquerda = 0;
    int p_direita = n-1;

    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }

    while(p_esquerda < p_direita){
        if(lista[p_esquerda] == lista[p_direita]){
            p_esquerda++;
            p_direita--;
            continue;
        }
        if(lista[p_esquerda] < lista[p_direita]){
            lista[p_esquerda + 1] += lista[p_esquerda];
            p_esquerda++;
        }else{
            lista[p_direita - 1] += lista[p_direita];
            p_direita--;
        }

        num_contracao++;
    }

    cout << num_contracao;

    return 0;
}
