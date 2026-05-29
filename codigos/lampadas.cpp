//I1 acende A e I2 troca o estado as duas

#include <iostream>

int main(){

    int interruptor, n;
    int A = 0, B = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> interruptor;
        if(interruptor == 1){
            A = !A;
    }else if(interruptor == 2){
       A = !A;
       B = !B;
    }
    }
    cout << A, B endl;
    return 0;
}
