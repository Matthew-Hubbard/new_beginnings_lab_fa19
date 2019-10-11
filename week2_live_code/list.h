#include <cstring>
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <ctime>


struct node
{
  int data;
  node * next;
};

class list
{
  public:
    list();
    ~list();
    int build();
    int display_all();
    int display_all_show();
    int insert(int data);

  private:
    int display_all(node * head);
    int display_all_show(node * head, int n);
    int insert(node *& head, int data);

    node * head;
    node * tail;
};
