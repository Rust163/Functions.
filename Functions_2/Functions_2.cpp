#include <iostream>
using namespace std;
int luckeNumber(int number) {
    if (number / 2) {
        cout << "Число " << number << " является счастливым!" << endl;
    }
    else {
        cout << "Число " << number << " не является счастливым.";
    }
    return number;
}
int main()
{
    int number = 0;
    cout << "Введите любое число и проверим является ли оно счастливым: ";
    cin >> number;
    number = luckeNumber(number);
}
