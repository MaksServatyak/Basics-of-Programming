#include <iostream>
#include <cstring>


using namespace std;


void task1() {
    int* ptrarr = new int[100];
    int n;
    cout << "Enter lenght of massive:";
    cin >> n;
    cout << "Enter array:";
    for (int i = 0; i < n; i++)
    {
        cin >> ptrarr[i];
    }
    int average = 0;
    for (int i = 0; i < n; i++)
    {
        average = average + ptrarr[i];
    }
    average = average / n;
    for (int i = 0; i < n; i++)
    {
        if (ptrarr[i] > average)
        {
            cout << ptrarr[i] << " ";
        }
    }
    delete[] ptrarr;
}
int main() {
    task1();
    system("pause");
    return 0;
}
//Enter lenght of massive : 3
//Enter array : 1
//2
//1
//2 Для продолжения нажмите любую клавишу . . .



//Enter lenght of massive : 5
//Enter array : 1
//1
//1
//2
//2
//2 2 Для продолжения нажмите любую клавишу . . .


//Enter lenght of massive : 4
//Enter array : 3
//5
//6
//8
//6 8 Для продолжения нажмите любую клавишу . . .


