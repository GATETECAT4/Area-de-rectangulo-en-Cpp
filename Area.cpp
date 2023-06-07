#include <iostream>
#include <stdlib.h>

float area(float _b, float _h) {
    return _b * _h;
}

int main()
{
    // Calcula el area de un rectangulo
    
    float b;
    float h;

    std::cout << "Digite el valor de la base: "; std::cin >> b;

    std::cout << "Digite el valor de la altura: "; std::cin >> h;

    float A = area(b,h);

    std::cout << "El area del rectangulo es: " << A << "cm" << std::endl;
    return 0;

}
