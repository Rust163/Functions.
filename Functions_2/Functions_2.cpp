#include <iostream>
using namespace std;

string showCard(string numberCard) {
    string gameCard;
    numberCard;
    int q = 0;
    int m = 0;
    switch (m)
    {
    case 1:
        gameCard = "pik ";
        break;
    case 2:
        gameCard = "kresti "; 
        break;
    case 3:
        gameCard = "bubi "; 
        break;
    case 4:
        gameCard = "viny "; 
        break;
    }

    switch (q)
    {
    case 6:
        numberCard = "6" + gameCard; 
        break;
    case 7:
        numberCard = "7" + gameCard;
        break;
    case 8:
        numberCard = "8" + gameCard; 
        break;
    case 9:
        numberCard = "9" + gameCard; 
        break;
    case 10:
        numberCard = "10" + gameCard;
        break;
    case 11:
        numberCard = "J" + gameCard;
        break;
    case 12:
        numberCard = "Q" + gameCard;
        break;
    case 13:
        numberCard = "K" + gameCard;
        break;
    case 14:
        numberCard = "A" + gameCard;
        break;
    }
    cout << "Вот ваша карта: " << numberCard << "\n";
    return numberCard;
}
//--------------------------------------------------------------------
int luckeNumber(int n) {
    if (n < 100000 && n > 999999) 
    {
        return 1;
    }
     return ((n / 100000) + ((n / 10000) % 10) + ((n / 1000) % 10)) == (((n / 100) % 10) + ((n / 10) % 10) + (n % 10));
}
//-----------------------------------------------------------------------
int leapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int difference(int day, int month, int year, int day1, int month1, int year1) {
    int daysOfMonth = 30 * month + (month + 5) * 4 / 7 - 35 + 2 * (month < 3);
    int leap = year - 1;
    int days = day + daysOfMonth + (leapYear(year) && month > 2) + leap * 365 + leap / 4 - leap / 100 + leap / 400;

    int daysOfMonth1 = 30 * month1 + (month1 + 5) * 4 / 7 - 35 + 2 * (month1 < 3);
    int leap1 = year1 - 1;
    int days1 = day1 + daysOfMonth1 + (leapYear(year1) && month1 > 2) + leap1 * 365 + leap1 / 4 - leap1 / 100 + leap1 / 400;
    

    return (days1 - days);
}
//--------------------------------------------------------------------------------------
int average(int arr[10], int avrg) {
    srand(time(0));
    int sumArr = 0;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < arr[i]; i++)
    {
        
        sumArr += arr[i];
        avrg = sumArr / 10;  
    }
    cout << "Среднеарифметическая сумма элементов массива равна " << avrg << "\n\n";
    return avrg;
}
//--------------------------------------------------------------------------------------
int arrayMinMaxZero(int arr1[20]) {
    srand(time(0));
    int min, max, zero;
    min = 0;
    max = 0;
    zero = 0;
    int i = 0;
    cout << "Дается массив: " << "\n";
    for (int i = 0; i < 20; i++)
    {
        arr1[i] = rand() % 100;
        cout << arr1[i] << ", ";
    }
    cout << endl;

    min = max = arr1[i];
    for (int i = 0; i < 20; i++)
    {
        if (arr1[i] < min) {
            min = arr1[i];
        }
    }
    cout << "Минимальное значение массива: " << min << "\n";

    for (int  i = 0; i < 20; i++)
    {
        if (arr1[i] > max) {
            max = arr1[i];
        }
    }
    cout << "Максимальное значение массива: " << max << "\n";

    for (int i = 0; i < 20; i++)
    {
        if (arr1[i] == 0) {
            zero += arr1[i];
        }
    }
    cout << "Количество нулей в массиве: " << zero << "\n";
    
    return min, max, zero;
}
int main()
{
    setlocale(LC_ALL, "");

   
    int n;
    cout << "Введите номер трамвайного билета и узнаем счасливый он или нет!: ";
    cin >> n;
    n = luckeNumber(n);
    if (n == 1)
    {
        cout << "Число является счастливым!" << "\n";
    }
    else if (n == 0) 
    {
        cout << "Число не является счастливым! Либо Вы ввели не корректный номер!" << "\n";
    }
    cout << endl;
    //-------------------------------------------------------------
    string numberCard;
    int q;
    cout << "Введите достоинство карты (от 6 до 14): ";
    cin >> q;
    int m;
    cout << "Введите масть карты (от 1 до 4): ";
    cin >> m;
    showCard(numberCard);
    
    //----------------------------------------------------------------
    int day;
    int month;
    int year;
    int day1;
    int month1;
    int year1;
    cout << "Введите день начала диапазона: ";
    cin >> day;
    cout << "Введите месяц начала диапазона: ";
    cin >> month;
    cout << "Введите год начала диапазона(в формате 4ех значного числа): ";
    cin >> year;
    cout << "Введите день конца диапазона: ";
    cin >> day1;
    cout << "Введите месяц конца диапазона): ";
    cin >> month1;
    cout << "Введите год конца диапазона(в формате 4ех значного числа): ";
    cin >> year1;
    if (year > year1) {
        cout << "Год начала диапазона не должно привышать год окончания диапазона!!!";
    }
    else {
        cout << "Дата начала диапазона: " << day << "." << month << "." << year << endl;
        cout << "Дата окончания диапазона: " << day1 << "." << month1 << "." << year1 << endl;
        cout << "Разность в днях с учетом високосных годов составляет: " << difference(day, month, year, day1, month1, year1) << " дня(-ей)" << "\n" << endl;
    }
    //----------------------------------------------------------------
    int arr[10];
    int avrg = 0;
    average(arr, avrg);
    //-------------------------------------------------------------------
    int arr1[20];
    arrayMinMaxZero(arr1);
}
                    