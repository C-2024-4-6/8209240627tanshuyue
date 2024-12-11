#include<iostream>
using namespace std;

   void sort(int* array, int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }

    int main() {
        int size;
        cout << "输入元素的个数: ";
        cin >> size;
        int* array = new int[size];
        cout << "输入数组里的元素: \n";
        for (int i = 0; i < size; ++i) {
            std::cin >> array[i];
        }
        cout << endl;
        sort(array, size);
        cout << "排列后的数组 ";
        for (int i = 0; i < size; ++i) {
            cout << *(array + i) << " ";
        }
        cout << endl;
        delete[] array;
        return 0;
    }
