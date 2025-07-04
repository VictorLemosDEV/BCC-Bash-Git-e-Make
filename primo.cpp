#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (long long i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {

	int n = 0;
	cin >> n;

	if (isPrime(n)) {


		cout << "Primo\n";

	} else {


		cout << "Não é Primo\n";

	}




	return 0;
}
