#include <iostream>
#include <cmath>


int main() 
{
    setlocale(LC_ALL, "Russian");
    std::cout << "FUNmap TeamCity Demo: Великая теорема Ферма" << std::endl;
    std::cout << "\nПроверяем для n=2 (теорема Пифагора):" << std::endl;

    int a = 3, b = 4, c = 5;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
        std::cout << "" << a << "² + " << b << "² = " << c << "²" << std::endl;
        std::cout << "   " << a * a << " + " << b * b << " = " << c * c << std::endl;
        std::cout << "   Теорема выполняется для n=2" << std::endl;
    }

    std::cout << "\nПроверяем для n>2 (Великая теорема Ферма):" << std::endl;
    int n = 3;
    std::cout << "Для n = " << n << " ищем целые a, b, c такие что:" << std::endl;
    std::cout << "aⁿ + bⁿ = cⁿ" << std::endl;

    bool found = false;
    for (int a_val = 1; a_val <= 10 && !found; a_val++) {
        for (int b_val = 1; b_val <= 10 && !found; b_val++) {
            for (int c_val = 1; c_val <= 10 && !found; c_val++) {
                if (pow(a_val, n) + pow(b_val, n) == pow(c_val, n)) {
                    std::cout << "Найдено: " << a_val << "³ + " << b_val << "³ = " << c_val << "³" << std::endl;
                    found = true;
                }
            }
        }
    }

    if (!found) {
        std::cout << " Решений не найдено!" << std::endl;
        std::cout << "   Великая теорема Ферма 'подтверждена' для n=" << n << std::endl;
    }

    std::cout << "Сборка в TeamCity выполнена успешно!" << std::endl;
    std::cout << "Проект FUNmap готов к работе!" << std::endl;

}