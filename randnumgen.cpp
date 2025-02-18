#include<iostream>
#include<random>
using namespace std;

unsigned int x = 4294967295;

int random() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, x);
    unsigned long y = distr(gen);
    unsigned long seed = y;
    seed = seed * 1103515245 + 12345;
    return (seed / 65536) % 32768;
}

int linear() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int z;
    cout << "Укажите число генераций: ";
    cin >> z;
    if (z <= 0) {
        do {
            cout << "Число генераций должно быть больше 0!" << endl;
            cout << "Укажите число генераций: ";
            cin >> z;
        } while (z <= 0);
    } else {
        for (int i = 0; i < z; i++) {
            cout << random() << endl;
        }
    }
    return z;
}

int range() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int a, b, c;
    cout << "Введите нижнюю границу генераций (целое неотрицательное число): ";
    cin >> a;
    cout << "Введите верхнюю границу генераций (целое неотрицательное число): ";
    cin >> b;
    c = a + rand() % (b - a + 1);
    cout << c << endl;
    return c;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int choice;
    cout << "1 - ГСЧ через линейный конгруэнтный метод\n2 - ГСЧ с диапазоном чисел" << endl;
    cout << "Выберите действие: ";
    cin >> choice;
    switch(choice) {
        case 1:
            linear();
            break;
        case 2:
            range();
            break;
        default:
            cout << "Введено некорекктное значение" << endl;
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