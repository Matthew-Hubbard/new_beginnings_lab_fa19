#include <iostream>
#include "list.h"

using namespace std;

int main()
{
  list list_obj;

  list_obj.build();

  cout << "\nList: ";
  int count1 = list_obj.display_all();
  cout << endl << endl;

  int count = list_obj.display_all_show();
  cout << endl;

  cout << "count: " << count << endl;
}
