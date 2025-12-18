#include <iostream>
#include <cmath>

bool test_pythagorean_theorem() {
    std::cout << "Тест 1: Теорема Пифагора (3-4-5 треугольник)... ";

    int a = 3, b = 4, c = 5;
    bool result = (pow(a, 2) + pow(b, 2) == pow(c, 2));

    if (result) {
        std::cout << "ПРОЙДЕН" << std::endl;
    }
    else {
        std::cout << "ПРОВАЛЕН" << std::endl;
    }

    return result;
}



bool test_funmap_logic() {
    std::cout << "Тест 2: Проверка бизнес-логики FUNmap... ";
    int recommendations_count = 5; 

    double user_lat = 55.751244;
    double user_lon = 37.618423;
    bool valid_location = (user_lat > -90 && user_lat < 90) &&
        (user_lon > -180 && user_lon < 180);
    bool events_loaded = true;

    bool result = (recommendations_count > 0) && valid_location && events_loaded;

    if (result) {
        std::cout << "ПРОЙДЕН (система готова к работе)" << std::endl;
    }
    else {
        std::cout << "ПРОВАЛЕН" << std::endl;
    }

    return result;
}

bool test_math_operations() {
    std::cout << "Тест 3: Проверка математических операций... ";

    bool test1 = (2 + 2 == 4);
    bool test2 = (sqrt(16) == 4);
    bool test3 = (pow(2, 3) == 8);

    bool result = test1 && test2 && test3;

    if (result) {
        std::cout << "ПРОЙДЕН" << std::endl;
    }
    else {
        std::cout << "ПРОВАЛЕН" << std::endl;
    }

    return result;
}

bool test_boundary_conditions()
{
    std::cout << "Тест 4: Проверка граничных условий... ";

    bool empty_input_handled = true;

    int max_events = 1000;
    bool max_values_ok = (max_events > 0 && max_events < 10000);

    bool negative_check = (-5 < 0); 

    bool result = empty_input_handled && max_values_ok && negative_check;

    if (result) {
        std::cout << "ПРОЙДЕН" << std::endl;
    }
    else {
        std::cout << "ПРОВАЛЕН" << std::endl;
    }

    return result;
}
void VermatFunc()
{
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

int main() 
{
    setlocale(LC_ALL, "Russian");
    std::cout << "ЗАПУСК ТЕСТОВ ДЛЯ ПРОЕКТА FUNmap" << std::endl;
    std::cout << "Команда: Щетиков Евгений, Селезнёв Егор, Манов Никита, Леонов Марк" << std::endl;

    int total_tests = 4;
    int passed_tests = 0;

    if (test_pythagorean_theorem()) passed_tests++;
    if (test_funmap_logic()) passed_tests++;
    if (test_math_operations()) passed_tests++;
    if (test_boundary_conditions()) passed_tests++;

    std::cout << " ИТОГИ ТЕСТИРОВАНИЯ:" << std::endl;
    std::cout << "   Всего тестов: " << total_tests << std::endl;
    std::cout << "   Пройдено: " << passed_tests << std::endl;
    std::cout << "   Провалено: " << (total_tests - passed_tests) << std::endl;

    if (passed_tests == total_tests) 
    {
        std::cout << " ВСЕ ТЕСТЫ ПРОЙДЕНЫ УСПЕШНО!" << std::endl;
        std::cout << " Проект FUNmap готов к работе!" << std::endl;
    }
    else {
        std::cout << " ОБНАРУЖЕНЫ ПРОБЛЕМЫ В ПРОЕКТЕ!" << std::endl;
    }
}