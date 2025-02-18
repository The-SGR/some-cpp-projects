#include<iostream>
#include<cmath>
using namespace std;

int factorial() { //факториал
    setlocale(LC_ALL, "en_US.UTF-8");
    int n, i, res;

    cout << "Введите число, которое надо возвести в факториал: ";
    cin >> n;
    res = 1;
    for(i = 1; i <= n; i++) {
        res *= i;
    }
    cout << "Результат: " << res << endl;
    return res;
}

int square() { //сумма квадратов натуральных чисел
    setlocale(LC_ALL, "en_US.UTF-8");
    int n, s = 0;
    cout << "Введите верхнюю границу суммы: ";
    cin >> n;
    if (n > 0) {
        while(n) { //значение "0" означает false, когда любое другое положительное значение означает true
            s += n * n;
            n--;
        }
        cout << "Результат: " << s << endl;
        return s;
    } else {
        cout << "Введено неккоректное значение.";
        return 1;
    }
}

int discriminant() { //решение квадратного уравнения через дискриминант
    setlocale(LC_ALL, "en_US.UTF-8");
    float a, b, c, d, x1, x2;

    cout << "Введите коэффициенты квадратного уравнения: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    d = b * b - 4 * a * c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Результат: Дискриминант = " << d << ", x1 = " << x1 << ", x2 = " << x2 << endl;
        return x1, x2;
    } else if (d == 0) {
        x1 = -b / (2 * a);
        cout << "Результат: Дискриминант = " << d << ", x1 = " << x1 << endl;
        return x1;
    } else {
        cout << "Результат: корней нет" << endl;
        return 0;
    }
}

int bnm() {
    const int n = 10;
    int bnm[n + 1];
    int k = 0;
    bnm[0] = 1;
    cout << bnm[0];
    while (k < n) {
        bnm[k + 1] = bnm[k] * (n - k) / (k + 1);
        cout << " " << bnm[k + 1];
        k++;
    }
    cout << endl;
    return k;
}

int exponent() {
    int n = 10;
    float x = 1;
    float s = 0, q = 1, k = 0;
    do {
        s += q;
        k++;
        q *= x / k;
    } while (k <= n);
    cout << "Вычисленное значение: " << s << endl;
    cout << "Контрольное значение: " << exp(x) << endl;
    return x, s;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int choice;

    cout << "1 - Возвести число в факториал\n2 - Вычисление суммы квадратов натуральных чисел" << endl;
    cout << "3 - Решить квадратное уравнение (дискриминант)\n4 - Биномиальные коэффициенты" << endl;
    cout << "5 - Экспонента" << endl;
    cout << "Выберите действие: ";
    cin >> choice;
    switch (choice) {
        case 1:
            factorial();
            break;
        case 2:
            square();
            break;
        case 3:
            discriminant();
            break;
        case 4:
            bnm();
            break;
        case 5:
            exponent();
            break;
        default:
            cout << "Введено неверное значение." << endl;
    }
    cout << "Продолжить? [y/n]" << endl;
    char cont;
    cin >> cont;
    if (cont == 'y' || cont == 'Y') {
        main();
    } else {
        return 0;
    }
    return 0;
}