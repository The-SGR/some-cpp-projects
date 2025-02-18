#include<iostream>
#include<conio.h>
using namespace std;

float msInS() {
    setlocale(LC_ALL, "en_US.UTF-8");
    const float msInS = 1000;
    float ms, res;
    
    cout << "Введите время в миллисекундах: ";
    cin >> ms;
    res = ms / msInS;
    cout << "Результат: " << res;
    return res;
}

float sInM() {
    setlocale(LC_ALL, "en_US.UTF-8");
    const float sInM = 60;
    float s, res;

    cout << "Введите время в секундах: ";
    cin >> s;
    res = s / sInM;
    cout << "Результат: " << res;
    return res;
}

float mInS() {
    setlocale(LC_ALL, "en_US.UTF-8");
    const float mInS = 60;
    float res, m;

    cout << "Введите время в минутах: ";
    cin >> m;
    res = m * mInS;
    cout << "Результат: " << res;
    return res;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int choice;
    cout << "1 - Конвертация из миллисекунд в секунды\n2 - Конвертация секунд в минуты" << endl;
    cout << "3 - Конвертация минут в секунды" << endl;
    cout << "Выберите операцию: ";
    cin >> choice;
    if (choice == 1) {
        msInS();
        getch();
    } else if (choice == 2) {
        sInM();
        getch();
    } else if (choice == 3) {
        mInS();
        getch();
    } else {
        return 1;
    }
}