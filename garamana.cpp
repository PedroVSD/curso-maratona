#include <iostream>
#include <map>

using namespace std;

int main(){

    map<char, int> conta_letra;

    string palavra_1;
    string palavra_2;

    cin >> palavra_1;
    cin >> palavra_2;
    int i = 0;

    while(palavra_1[i] != '\0'){

        conta_letra[palavra_1[i]]++;

        if (palavra_2[i] != '*'){
            conta_letra[palavra_2[i]]--;
        }
        i++;
    }

    char resp = 'S';
    for(const auto &[letra, qnt]: conta_letra){
        if(qnt < 0){
            resp = 'N';
            break;
        }
    }

    cout << resp << endl;

    return 0;
}
