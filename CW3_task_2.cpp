#include <fstream>
#include <iostream>
using namespace std;
int main()
{

	
	ifstream fout("in1.txt");
	ifstream file("in2.txt");
	ofstream fin("out.txt", ios_base::app);
	char arr[100];
	if (fin.is_open())
	{
		fout.getline(arr, 100);
		fin << arr;
		file.getline(arr, 100);
		fin << arr;
		fin.close();
		fout.close();
		file.close();

	}
	else
	{
		cout << "Error" << endl;
	}
	
	system("pause");
	return 0;
}
