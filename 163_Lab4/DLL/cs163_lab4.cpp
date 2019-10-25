#include "dlist.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    
    cout << "head main: " << head << endl;

    cout << "Inserted 2's. Number of 2's in list: " << insert_after(head) << endl;

    cout << "head main: " << head << endl;



    display(head);
    destroy(head);    
    return 0;
}
