#include "list.h"

using namespace std;

list::list()
{
  head = NULL;
  tail = NULL;

  srand(time(NULL));
}

list::~list()
{
  //remove all
}

int list::insert(int data)
{
  return insert(head, data);
}

int list::insert(node *& head, int data)
{
  node * temp = head;
  head = new node;
  head->data = data;
  head->next = temp;
  return 1;
}

int list::build()
{
  int num_nodes = (rand() % 10) + 3;
  for(int i = 0; i < num_nodes; ++i)
  {
    insert((rand() % 19) + 1);
  }
  return num_nodes;
}

int list::display_all()
{
}

int list::display_all(node * head)
{
}




























int list::display_all_show()
{
  cout << "Main called wrapper function!\n\n";
  int n = 0;
  int count = display_all_show(head, n);
  cout << "\nReturned value " << count << " into wrapper function!\n";
  return count;
}

int list::display_all_show(node * head, int n)
{
  if(!head)
  {
    cout << "\nBASE CASE! Returning 0 back to the last call...\n\n";
    return 0;
  }
  ++n;
  cout << "Function call " << n 
    << " : head->data : " << head->data << " , head : (" << head << ")" << " \n";
  int count = display_all_show(head->next, n);
  cout << "Function call " << n 
    << " : head->data : " << head->data << " , head : (" << head << ")"
    << " : I got a return value of : " << count << "! "
    << "returning " << count + 1 << " to last call...\n";
  return count + 1;
}
