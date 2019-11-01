#include <iostream>

using namespace std;

const int SIZE = 10;

struct node {
    int data;
    node * next;
};

int main()
{

    // An array is just a pointer to the first element

    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int * ptr = array;
    node * head;
    
    cout << sizeof(ptr) << endl;
    cout << sizeof(head) << endl;

    cout << "*ptr \t\t(" << ptr << "):\t" << *ptr 
        << "\narray[0] \t(" << &array[0] << "):\t" << array[0] 
        << "\n*array \t\t(" << array << "):\t" << *array << endl;
    ++ptr;
    cout << "++ptr \t\t(" << ptr << "):\t" << *ptr 
        << "\narray[1] \t(" << &array[1] << "):\t" << array[1] 
        << "\n*(array + 1) \t(" << &(*(array + 1)) << "):\t" << *(array + 1) << endl;
    
    for(int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
        //cout << *(array + i) << " ";
    }
    cout << endl;

    int * stop = array + SIZE;
    for(int * ptr = array; ptr < stop; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}
