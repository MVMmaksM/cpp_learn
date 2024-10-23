#include <iostream>

int main()
{
    int value1, value2;

    std::cout << "Введите число 1" << std::endl;
    std::cin >> value1;

    std::cout << "Введите число 2" << std::endl;
    std::cin >> value2;

    std::cout << "Сумма чисел: " << value1 << " и " << value2 << " равна " << value1 + value2 << std::endl;

    if(value1 > value2)
        std::cout << "Число 1 больше числа 2" << std::endl;
    else if(value1 == value2)
        std::cout << "Число 1 равно числу 2" << std::endl;
    else if (value1 < value2)
        std::cout << "Число 1 меньше числа 2" << std::endl;  

    return 0;
}