#include <iostream>

int Potencia(int, int);

int Potencia(int a, int b)
{
    // Caso base: cualquier número elevado a la potencia 0 es 1
    if (b == 0)
        return 1;
    // Caso recursivo: multiplicar la base por la potencia de la base al exponente menos 1
    else
        return a * Potencia(a, b - 1);
}

int main()
{
    int base, exponente;

    std::cout << "Ingrese la base: ";
    std::cin >> base;

    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;

    int result = Potencia(base, exponente);

    std::cout << base << " elevado a la " << exponente << " es: " << result << std::endl;

    return 0;
}