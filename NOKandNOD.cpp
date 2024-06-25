#include <iostream>
#include <QString>
#include <QTextStream>

using namespace std;

class Math {
public:
    // Функция для вычисления НОД двух чисел
    static int nod(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Функция для вычисления НОК двух чисел
    static int nok(int a, int b) {
        int nodValue = nod(a, b);
        return (a * b) / nodValue;
    }
};

int main() {
    int num1, num2;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    int nodValue = Math::nod(num1, num2);
    int nokValue = Math::nok(num1, num2);

    cout << "NOD: " << nodValue << endl;
    cout << "NOK: " << nokValue << endl;

    // Проверка, являются ли числа взаимно простыми
    if (nodValue == 1) {
        cout << "Mutually prime numbers." << endl;
    }

    return 0;
}
