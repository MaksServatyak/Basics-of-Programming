
#include <iostream>
using namespace std;

void task1() {
    int n,k;
    cout << "Enter n:" << " ";
    cin >> n;
    while (n > 10) {
        k = n % 10;
        cout << k << " ";
        n = (n - k) / 10;
    }
    cout << n << " ";
}

void task2() {
    int number;
    cout << "Enter number:" << " ";
    cin >> number;
    if (number==0)
    {
        cout << number << "-" << "Zero";
    } else if (number == 1)
    {
        cout << number << "-" << "One";
    } else if (number == 2)
    {
        cout << number << "-" << "Two";
    } else if (number == 3)
    {
        cout << number << "-" << "Three";
    } else if (number == 4)
    {
        cout << number << "-" << "Four";
    } else if (number == 5)
    {
        cout << number << "-" << "Five";
    } else if (number == 6)
    {
        cout << number << "-" << "Six";
    } else if (number == 7)
    {
        cout << number << "-" << "Seven";
    } else if (number == 8)
    {
        cout << number << "-" << "Eight";
    } else if (number == 9)
    {
        cout << number << "-" << "Nine";
    }
    else {
        cout << number << "-" << "Wrong number";
    }
}
void task3() {
    int n,l,s;
    l = 1;
    s = 1;
    int A[200];
    string res,res2;
    cout << "Enter n:" << " ";
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> A[i];
    }
    for (int j = 0; j < n-1; j++)
    {
        if (A[j] < A[j + 1])
        {
            res = "Yes";

        }
        else
        {
            res = "No";
        }


        if (res == "Yes") {
            l = l + 1;
        }
        
        
        if (A[j] > A[j + 1])
        {
            res2= "Yes";
        }
        else
        {
            res = "No";
        }
        
        
        if (res2 == "Yes") {
            s = s + 1;
        }
       
    }if (l==n)
    {
        cout << "Yes";
    } else if (s == n)
    {
        cout << "Yes";
   
    }
    else {
        cout << "No";
    }

}


int main()
{
    task1();
    task2();
    task3();
    system("pause");
    return 0;
}

