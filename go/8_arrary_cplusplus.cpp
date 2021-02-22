#include <iostream>
using namespace std;

void modify(int array[5]) {
    array[0] = 10; // 试图修改数组的第一个元素
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << "\n" << endl;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    modify(array);
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << "\n" << endl;
    return 0;
}