#include <iostream>

using namespace std;

void ImprimirMatriz(int size, int** matriz) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void AdicaoMatrizes(int size,int** matrizA, int** matrizB, int** matrizR) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
        };
                    
    }
}

void SubtracaoMatrizes(int size,int** matrizA, int** matrizB, int** matrizR) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrizR[i][j] = matrizA[i][j] - matrizB[i][j];
        };
                    
    }
}

void MultiplicacaoMatrizes(int size,int** matrizA, int** matrizB, int** matrizR) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrizR[i][j] = 0;
            for (int k = 0; k < size; k++) {
                matrizR[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

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

    int** matrizR = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrizR[i] = new int[n];
    }

    char operacao;
    cin >> operacao;

    if (operacao == 'a') {
        AdicaoMatrizes(n, matrizA, matrizB, matrizR);
    } else if (operacao == 's') {
        SubtracaoMatrizes(n, matrizA, matrizB, matrizR);
    } else if (operacao == 'm') {
        MultiplicacaoMatrizes(n, matrizA, matrizB, matrizR);
    } 
    
    

    ImprimirMatriz(n, matrizR);

    return 0;
}

 