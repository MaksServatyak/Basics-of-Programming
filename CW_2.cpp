#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size ";
    cin >> n;
    int** x = new int* [n];
    for (int i = 0; i < n; i++)
        x[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> x[i][j];
    
    cout << endl;
    for (int j = 0; j < n; j++) {
        for (int i = n - 1; i >= 0; i--)
            cout << x[i][j] << " ";
        cout << endl;
    }
    return 0;
}


//Enter size 3
//1 2 3
//4 5 6
//7 8 9
//
//7 4 1
//8 5 2
//9 6 3



//Enter size 2
//1 2
//4 5
//
//4 1
//5 2
//


//Enter size 4
//1 2 3 5
//4 5 6 8
//5 5 8 5
//5 5 5 2
//
//5 5 4 1
//5 5 5 2
//5 8 6 3
//2 5 8 5
