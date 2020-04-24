#include <iostream>
#include<cstring>
using namespace std;
void task3(char* str)
{
	
	for (int i = 0; i < strlen(str); i++) // довжина стрічки
	{
		if (str[i] == ' ') //доступ до елементів стрічки по індексно
			str[i] = '|';
		if (i == 0) {//якщо перша літера, або зустріли пробіл, тоді


			str[i] = '|';
		}
	}
	cout << str;
}
int main()
{

	const int MAX_N = 100; //максимальний розмір стрічки
	char str[MAX_N]; //оголосили стрічку
	cin.get(str, 100, '.'); //читаємо стрічку до крапки

	 task3(str); //друкуємо кількість слів
	return 0;
}


//Hello World.
//| ello | World
//C : \Users\Andrii\source\repos\CW_2_TASK3\Debug\CW_2_TASK3.exe(процесс 18388) завершил работу с кодом 0.
//Нажмите любую клавишу, чтобы закрыть это окно…
//


