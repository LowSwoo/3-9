#include <iostream>
#include <cstring>  
#include <string> 

using namespace std;

struct tableString
{ // Структура, содержащая информацию о типе данных для перевода
    char nein;
    char ternary[3];
};

const int LEN = 80;

const tableString table[9] = {
    {'0', "00"},
    {'1', "01"},
    {'2', "02"},
    {'3', "10"},
    {'4', "11"},
    {'5', "12"},
    {'6', "20"},
    {'7', "21"},
    {'8', "22"}};

int main()
{
    char ch[LEN]; // Объявление массива
    char res[LEN / 2];
    char tmp[2];
    int count = 0; // Подсчёт колличества символов
    int count_1 = 0; // Подсчёт колличества символов

    for (int i = 0; i <= LEN; i++)
    {              //Зачистка массива нулями
        ch[i] = 0; //Зачистка массива нулями
    }
    cin.getline(ch, LEN);          // Считывание данных с клавиатуры
    for (int i = 0; i <= LEN; i++) //Считаем символы и выводим их на экран
    {
        if (ch[i])
        {
            count++;
            cout << i << ": " << ch[i] << endl;
        }
    }
    if ((count % 2) != 0) // При нечётном кол-ве символов добавляем в начало 0
    {
        for (int i = count - 1; i >= 0; i--)
        {
            ch[i + 1] = ch[i];
        }
        ch[0] = '0';
    }
    cout << endl;
    for (int i = 0; i <= LEN; i++)
    {
        if (ch[i])
        {
            cout << i << ": " << ch[i] << endl;
        }
    }
    count_1 = 0;
    for (int i = 0; i <= count; i+=2) {
        tmp[0] = ch[i];
        tmp[1] = ch[i + 1];
        for (int j = 0; j< 9; j++) {
            // cout << "table:" << table[j].ternary  << " tmp:" << tmp << " tmp == table: " << ((tmp[0] == table[j].ternary[0]) and (tmp[1] == table[j].ternary[1])) << endl;
            if ((tmp[0] == table[j].ternary[0]) and (tmp[1] == table[j].ternary[1])){
                res[count_1] = table[j].nein;
                // cout << "strcmp" << endl << res[count] << endl;
                count_1++;
            }
        }
    }
    cout << endl;
    for (int i =0; i <= count; i++){
        cout  << res[i];
    }
    cout << endl;
    return 0;
}