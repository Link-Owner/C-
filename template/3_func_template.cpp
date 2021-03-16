#include <iostream>
using namespace std;

//数组排序,从大到小

template <typename T>
void mySwap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++) {
        int max = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[max] < arr[j]) {
                max = j;
            }
        }
        if (max != i) {
            mySwap(arr[max], arr[i]);
        }
    }
}

void test01()
{
    char arr[] = "asdfg";
    mySort(arr, sizeof(arr)/sizeof(char));
    cout << arr << endl;

    int n_a[] = {1,3,5,7,2,4};
    mySort(n_a, sizeof(n_a)/sizeof(int));
    for (int i = 0; i < sizeof(n_a)/sizeof(int); i++) {
        cout << n_a[i] << endl;
    }
    cout << endl;
}

int main()
{
    test01();
    return 0;
}