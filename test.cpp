#include <iostream>

using namespace std;

const int SIZE = 10;

int main()
{

    // An array is just a pointer to the first element

    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int * ptr = array;
    cout << "*ptr: " << *ptr << " array[0]: " << array[0] << " *array: " << *array << endl;
    ++ptr;
    cout << "++ptr: " << *ptr << " array[1]: " << array[1] << " *(array + 1): " << *(array + 1) << endl;

    for(int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for(int * ptr = array; ptr < array[SIZE]; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout << endl;
    

    return 0;
}
