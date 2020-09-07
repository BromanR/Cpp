// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double x, ans;
    const double eps = 0.001;
    printf("Enter x: ");
    scanf_s("%lf", &x);

 /*   if ((x > 5) || (abs(x - 5) < eps)) {
        ans = x * x + log(x);
    }
    else if ((abs(x) < 1) || (abs(abs(x - 1)) < eps)) {
        ans = tan(x) + pow(x, 1. / 3);
    }
    else {
        ans = log(abs(x)) + cbrt(x);
    }*/

    ans = ((x > 5) || (abs(x - 5) < eps)) ? 
        x * x + log(x) : (((abs(x) < 1) || (abs(abs(x - 1)) < eps)) ? 
            tan(x) + pow(x, 1. / 3) : log(abs(x)) + cbrt(x));

    printf("f(x)=%lf\n", ans);
        return 0;
}