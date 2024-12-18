#include<windows.h>
#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
	char str1[100], str2[100], ch, *p;

	// Дана строка символов. Заменить в ней все пробелы на табуляции.
	RussianMessage("Введите строку символов: ");
	cin.getline(str1, 100);
	RussianMessage("Модифицированная строка: ");
	cout << ReplaceByTabSpace(str1) << endl;

	// Подсчитать количество слов во введенном предложении.
	RussianMessage("Введите строку символов: ");
	cin.getline(str1, 100);
	RussianMessage("Количество слов в строке: ");
	cout << CountWordInString(str1) << endl;

	// Подсчитать количество гласных букв в русском тексте
	RussianMessage("Введите строку символов: ");
	cin.getline(str1, 100);
	OemToCharA(str1, str1);
	RussianMessage("Количество гласных букв в строке: ");
	cout << NumberOfVowelsInString(str1) << endl;

	RussianMessage("Введите строку символов: ");
	cin >> str1;
	RussianMessage("Длина введённой строки: ");
	cout << mystrlen(str1);

	p = mystrcpy(str2, str1);
	RussianMessage("\nСкопированная строка: ");
	cout << p;

	RussianMessage("\nВведите строку символов: ");
	cin >> str1;
	RussianMessage("Введите символ для поиска: ");
	cin >> ch;
	p = mystrchr(str1, ch);
	if (!p)
		RussianMessage("Символ не найден!\n");
	else
	{
		RussianMessage("Первое вхождение символа в строку: ");
		cout << p << endl;
	}
	cin.get();
	RussianMessage("Введите первую строку символов: ");
	cin.getline(str1, 100);
	RussianMessage("Введите вторую строку символов: ");
	cin.getline(str2, 100);
	p = mystrcat(str1, str2);
	RussianMessage("Результат конкатенации двух строк: ");
	cout << p << endl;

	return 0;
}