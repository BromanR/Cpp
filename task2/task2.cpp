// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int n, x;

    std::cout << "Enter amount of numbers\n";
    scanf_s("%d", &n);
    scanf_s("%d", &x);
    int min = x;
    int max = x;
    for (int i = 1; i < n; i++) {
        scanf_s("%d", &x);
        if (x > max) { max = x; }
        if (x < min) { min = x; }
    }
    printf("maximum = %d\n", max);
    printf("minimum = %d", min);
}
