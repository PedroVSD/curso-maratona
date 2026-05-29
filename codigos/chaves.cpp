#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    stack<char> pilha;

    for (int i = 0; i < n; i++) {
        string palavra;
        getline(cin, palavra);

        for (char j : palavra) {
            if (j == '{') {
                pilha.push('{');
            }
            else if (j == '}') {
                if (pilha.empty()) {
                    cout << "N" << endl;
                    return 0;
                }

                pilha.pop();
            }
        }
    }

    if (pilha.empty()) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
