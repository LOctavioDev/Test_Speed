#include <iostream>
#include <vector>
#include <chrono>

bool es_primo(int numero) {
    if (numero < 2)
        return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

std::vector<int> primeros_primos(int n) {
    std::vector<int> primos;
    int numero = 2;
    while (primos.size() < n) {
        if (es_primo(numero)) {
            primos.push_back(numero);
        }
        numero++;
    }
    return primos;
}

int main() {
    auto inicio = std::chrono::high_resolution_clock::now();
    int n = 10000;
    primeros_primos(n);
    auto fin = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> tiempo = fin - inicio;
    std::cout << "Tiempo de ejecución en C++: " << tiempo.count() << " segundos" << std::endl;
    return 0;
}
