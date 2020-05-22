#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Box {
    int width;
    char length;
    int height;

    void Print_Box_Information() {
        cout << "Width : " << width << endl << "Lenght : " << length << endl << "Height : " << height << endl;
    }
};
int main()
{
    ofstream file("in.txt");
    ifstream info_file;
    info_file.open("in.txt", ios_base::in);
    int i = 0;
    char str[40];
    while (!info_file.eof()) {
        info_file.getline(str, 40);
        i++; // визначаємо скільки є коробок у списку!
    }

    info_file.clear();
    info_file.seekg(0, ios_base::beg); // переміщення вкзівника файлу на початок файлу

    const int n = i;
    Box all_box[5]; // створеня масиву чтруктур для відповідної кількості людей
    int j = 0;
    while (!info_file.eof()) {
        info_file >> all_box[j].width;
        info_file >> all_box[j].length;
        info_file >> all_box[j].height;
        j++;
    }
    info_file.close();
    ofstream result;
    result.open("out.txt", ios_base::out);
    int size = i;
    int x = 0;
    int mas[100];
    int tmp;
    int max = all_box[0].length* all_box[0].width* all_box[0].height;
    int ind = 0;
    for (int i = 1; i < n; i++) {
        if (all_box[i].length * all_box[i].width * all_box[i].height > max) {
            max = all_box[i].length * all_box[i].width * all_box[i].height;
            ind = i; // зберізання індекса максимального елемента
        }
    }
    for (int i = size - 1; i > x; i--)
    {
        for (int j = size - 1; j > x; j--) {
            if (mas[j] < mas[j - 1]) {
                tmp = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = tmp;
                result << all_box[ind].length << "   " << all_box[ind].width << "   " << all_box[ind].height;

            }

        }
        
    }
    // Сортування масиву бульбашкою
    cout<< all_box[ind].width << "   " << all_box[ind].length << "   " << all_box[ind].height;
    result.close();
    return 0;
}