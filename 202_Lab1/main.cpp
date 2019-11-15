#include <iostream>
#include "monster.h"

using namespace std;

int main() 
{

  //cout << "Default constructor: \n";
  orc orc_obj;
  orc_obj.display();

  char name[NAME];
  cout << "Enter name: ";
  cin.get(name, NAME, '\n');
  cin.ignore(100, '\n');

  //cout << "Constructor with args:\n";
  orc orc_obj2(1000, 1200, name);
  orc_obj2.display();

  orc_obj.attack();
  orc_obj2.take_dmg(20);

  orc_obj2.smash();
  orc_obj.take_dmg(100);

  orc_obj.display();
  orc_obj2.display();

  return 0;
}
