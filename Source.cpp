#include <iostream>
#include<cstring>
using namespace std;
void task3(char* str)
{
	
	for (int i = 0; i < strlen(str); i++) // ������� ������
	{
		if (str[i] == ' ') //������ �� �������� ������ �� ��������
			str[i] = '|';
		if (i == 0) {//���� ����� �����, ��� ������� �����, ���


			str[i] = '|';
		}
	}
	cout << str;
}
int main()
{

	const int MAX_N = 100; //������������ ����� ������
	char str[MAX_N]; //��������� ������
	cin.get(str, 100, '.'); //������ ������ �� ������

	 task3(str); //������� ������� ���
	return 0;
}


//Hello World.
//| ello | World
//C : \Users\Andrii\source\repos\CW_2_TASK3\Debug\CW_2_TASK3.exe(������� 18388) �������� ������ � ����� 0.
//������� ����� �������, ����� ������� ��� ����
//


