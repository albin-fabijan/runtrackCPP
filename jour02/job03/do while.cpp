#include <iostream>

int main() {
    int i = 0, n, som = 0;

    do {
        std::cout << "donner un entier : ";
        std::cin >> n;
        som += n;
        i++;
    } while (i < 4);

    std::cout << "somme : " << som << std::endl;

    return 0;
}
