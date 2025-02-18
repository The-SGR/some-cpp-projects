#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    const float mile = 1.60934;
    const int ftInMile = 5280;
    const float mInFt = 0.3048;
    const float fahrenheit = 32;
    float tempF, tempC;
    int distMile, distFt, distKm, distM;
    cout << "Что вы хотите конвертировать?\n1 - Расстояние в милях и футах в расстояние в километрах и метрах\n2 - Расстояние в км. и м. в расстояние в милях и фт." << endl;
    cout << "3 - Цельсии в фаренгейты\n4 - Фаренгейты в цельсии" << endl;
    cout << "Введите значение: ";
    short choice;
    cin >> choice;
    if (choice == 1) {
        cout << "Введите расстояние в милях: ";
        cin >> distMile;
        cout << "Введите расстояние в футах: ";
        cin >> distFt;
        float totalFt = (distMile * ftInMile) + distFt;
        float distanceM = distFt * mInFt;
        float distanceKm = distMile * mile;
        distM = (int)distanceM;
        distKm = (int)distanceKm;
        cout << "Расстояние в километрах: " << distKm << ", в метрах: " << distM << endl;
    } else if (choice == 2) {
        cout << "Введите расстояние в километрах: ";
        cin >> distKm;  
        cout << "Введите растояние в метрах: ";
        cin >> distM;
        float totalM = (distKm * 1000) + distM;
        float distanceFt = totalM / mInFt;
        float distanceMile = distKm / mile;
        distFt = (int)distanceFt;
        distMile = (int)distanceMile;
        cout << "Расстояние в милях: " << distMile << ", в футах: " << distFt << endl;
    } else if (choice == 3) {
        cout << "Введите температуру в цельсиях: ";
        cin >> tempC;
        tempF = (tempC * 9 / 5) + fahrenheit;
        cout << "Температура в фаренгейтах: " << tempF << endl;
    } else if (choice == 4) {
        cout << "Введите температуру в фаренгейтах: ";
        cin >> tempF;
        tempC = (tempF - fahrenheit) * 5 / 9;
        cout << "Температура в цельсиях: " << tempC << endl;
    } else {
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