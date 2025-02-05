#include <iostream>

int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    std::cout << "Wprowadz dwie liczby calkowite: ";
    std::cin >> a >> b;

    // Sprawdzenie, czy liczby są dodatnie
    if (a <= 0 || b <= 0) {
        std::cout << "Wprowadz tylko liczby dodatnie!" << std::endl;
        return 0; // Kończy działanie programu, jeśli liczby są niedodatnie
    }

    std::cout << "Pierwsza liczba: " << a << ", Druga liczba: " << b << std::endl;
    std::cout << "Najwiekszy wspolny dzielnik: " << nwd(a, b) << std::endl;
    return 0;
}

