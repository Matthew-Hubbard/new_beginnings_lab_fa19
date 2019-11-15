#include "monster.h"

using namespace std;

//--MONSTER CLASS--
monster::monster() : health(100), name(NULL) //initialization list
{ 
  // GET NAME
  prompt_name();
}

monster::~monster() //destructor
{
  delete [] name;
}

monster::monster(const int & hp) : health(hp) //initialization list 
{
  prompt_name();
}

monster::monster(const int & hp, const char * name) : health(hp), name(NULL)
{
  this->name = new char [strlen(name) + 1];
  strcpy(this->name, name);
}

monster::monster(const monster & copy_from) : health(copy_from.health), name(NULL)
{
  // Dynamic memory needs to be copied in body
  name = new char [strlen(copy_from.name)];
  strcpy(name, copy_from.name);
}

void monster::prompt_name()
{
  char temp[NAME];
  cout << "Enter name: ";
  cin.get(temp, NAME, '\n');
  cin.ignore(100, '\n');
  name = new char [strlen(temp) + 1];
  strcpy(name, temp);
}

void monster::display() const 
{ 
  cout << "Name: " << name << endl;
  cout << "Health: " << health << endl;
}

void monster::take_dmg(const int & dmg) 
{
  health -= dmg;
  if(health <= 0)
    cout << name << " has died!\n";
}

void monster::attack()
{
  cout << name << " attacks with basic attack!\n";
}

//----ORC CLASS-------------------------------------------
orc::orc() : belly_weight(200), tribe(NULL)
{
  // calls default monster constructer before
}

orc::~orc() // DESTRUCTOR
{
  // Calls destructor for monster after this
  if(tribe)
    delete [] tribe;
}

orc::orc(const int & hp) : monster(hp), belly_weight(200), tribe(NULL)
{
}

orc::orc(const int & hp, const int & belly, const char * name)
  : monster(hp, name), belly_weight(belly), tribe(NULL)
{
}

void orc::display() const 
{ 
  monster::display(); 
  cout << "Race: Orc" << endl;
  cout << "BELLY_WEIGHT: " << belly_weight << endl;
}

void orc::smash() 
{
  cout << name << " smashes! **ORC SMASH! ORC SMASH!**\n";
}
