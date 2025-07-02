#include <iostream>

using namespace std;

int main() {

    int n = 0;
    cin >> n;

    int** matrizA = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrizA[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrizA[i][j];
        }
    }

    int** matrizB = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrizB[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrizB[i][j];
        }
    }

    char operacao;
    cin >> operacao;
    

    return 0;
}

 