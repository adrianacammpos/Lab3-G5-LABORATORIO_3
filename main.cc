#include <iostream>
int sumaNaturales(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumaNaturales(n - 1);
}
int main(int argc, char *argv[])
{
      int N;
      
     std::cout << "Ingresa el valor de N: ";
     std::cin >> N;
     std::cout << "La suma de los primeros " << N << " números naturales es: " << sumaNaturales(N) <<std:: endl;

    return 0;
}