#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(void){
    vector<int> jogadores(4);

    for(int i = 0; i < 4; i++){
        cin >> jogadores[i];
    }

    sort(jogadores.begin(), jogadores.end());

    int time_a = jogadores[0] + jogadores[3];
    int time_b = jogadores[1] + jogadores[2];

    int resultado = abs(time_a - time_b);

    cout << resultado << endl;
}
