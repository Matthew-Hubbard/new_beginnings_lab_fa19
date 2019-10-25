#include "dlist.h"

int insert_after(node *& head)
{
    if(!head)
        return 0;
    int count = 0;
    //cout << "\nhead: " << head << endl;
    if(head->data == 2)
    {
        node * to_add = new node;
        to_add->data = 2;
        to_add->next = head->next;
        to_add->previous = head;

        if(head->next)
            head->next->previous = to_add;

        head->next = to_add;

        //head = head->next;   // NO!! Actually changes head that we passed in 
        count += 2;

        //cout << "\nto_add: " << to_add << endl;

        return insert_after(head->next->next) + count;
    }
    return insert_after(head->next) + count;
    //int ret = insert_after(head->next) + count;
    //cout << "\nhead (after): " << head << endl;
    //return ret;
    
}
