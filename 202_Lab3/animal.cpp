#include "animal.h"
#include <iostream>
#include <cstring>
#include <cstdio>

#define STRMAX 50

using namespace std;

//animal constructors
animal::animal() : name(NULL), age(0.0), mammal(false) 
{
	#ifdef CONSTRUCTOR
  cout << "animal::animal()\n";
	#endif
  read();
} 

animal::animal(const char * name, float age, bool mammal)
  : name(NULL), age(age), mammal(mammal)
{
	#ifdef CONSTRUCTOR
  cout << "animal::animal(char*,float,bool)\n";
	#endif
  this->name = new char [strlen(name) + 1];
  strcpy(this->name, name);
}

animal::animal(const animal & copy_from) 
  : name(NULL), age(copy_from.age), mammal(copy_from.mammal)
{
	#ifdef CONSTRUCTOR
  cout << "animal::animal(const animal &)\n";
	#endif
  if(!copy_from.name)
    return;
  name = new char [strlen(copy_from.name) + 1];
  strcpy(name, copy_from.name); //deep copy name
}

animal::~animal() 
{
 	#ifdef DESTRUCTOR
  cout << "~animal::animal()\n";
  #endif
  if(name)
    delete [] name;
  name = NULL;
  age = 0.0;
  mammal = false;
}

void animal::read()
{
  cout << "animal::read()\n";
  char temp[STRMAX];
  char r = '\0';
  cout << "Enter name: ";
  cin.get(temp, STRMAX, '\n');
  cin.ignore(100, '\n');
  name = new char [strlen(temp) + 1];
  strcpy(name, temp);
  cout << "Enter age: ";
  cin >> age;
  cin.ignore(100, '\n');
  cout << "Mammal?(y/n): ";
  cin >> r;
  cin.ignore(100, '\n');
  r = tolower(r);
  r == 'y' ? mammal = true : mammal = false;
}

void animal::display() const
{
  cout << "animal::display()\n";
  printf("name: %s\nage: %.1f\nmammal: %d\n", name, age, mammal);
}

int animal::move() const
{
  cout << "Animal moves.\n";
  return 1;
}

//kitten constructors
kitten::kitten() : fur_color(NULL) //default constructor
{
	#ifdef CONSTRUCTOR
  cout << "kitten::kitten()\n";
	#endif
  read();
} 

kitten::kitten(const char * name, float age, bool mammal, const char * fur_color)
  : animal(name, age, mammal), fur_color(NULL)
{
	#ifdef CONSTRUCTOR
  cout << "kitten::kitten(char*,float,bool,char*)\n";
	#endif
  this->fur_color = new char [strlen(fur_color) + 1];
  strcpy(this->fur_color, fur_color);
}

kitten::kitten(const kitten & copy_from) 
  : animal(copy_from), fur_color(NULL) 
{
	#ifdef CONSTRUCTOR
  cout << "kitten::kitten(const kitten &)\n";
	#endif
  if(!copy_from.fur_color)
    return;
  fur_color = new char [strlen(copy_from.fur_color) + 1];
  strcpy(fur_color, copy_from.fur_color);
}

kitten::~kitten() //destructor
{     
	#ifdef DESTRUCTOR
  cout << "~kitten::kitten()\n";
	#endif
  if(fur_color)
    delete [] fur_color;
  fur_color = NULL;
}

void kitten::read()
{
  cout << "kitten::read()\n";
  char temp[STRMAX];
  cout << "Fur color: ";
  cin.get(temp, STRMAX, '\n');
  cin.ignore(100, '\n');
  fur_color = new char [strlen(temp) + 1];
  strcpy(fur_color, temp);
}

void kitten::display() const
{
  cout << "kitten::display()\n";
  animal::display();
  cout << "fur color: " << fur_color << endl;
}

int kitten::move() const
{
  cout << "Kitten " << name << " rolls around.\n";
  return 1;
}

//sea_turtles constructors
sea_turtle::sea_turtle() : shell_color(NULL) 
{
	#ifdef CONSTRUCTOR
  cout << "sea_turtle::sea_turtle()\n";
	#endif
  read();
} //default constructor

sea_turtle::sea_turtle(const char * name, float age, bool mammal, const char * shell_color): 
  animal(name, age, mammal), shell_color(NULL)
{
	#ifdef CONSTRUCTOR
  cout << "sea_turtle::sea_turtle(char*,float,bool,char*)\n";
	#endif
  this->shell_color = new char [strlen(shell_color) + 1];
  strcpy(this->shell_color, shell_color);
}

sea_turtle::sea_turtle(const sea_turtle & copy_from) 
  : animal(copy_from), shell_color(NULL) 
{
	#ifdef CONSTRUCTOR
  cout << "sea_turtle::sea_turtle(const sea_turtle &)\n";
	#endif
  if(!copy_from.shell_color)
    return;
  shell_color = new char [strlen(copy_from.shell_color) + 1];
  strcpy(shell_color, copy_from.shell_color);
}

sea_turtle::~sea_turtle() //destructor
{ 
	#ifdef DESTRUCTOR
  cout << "~sea_turtle::sea_turtle()\n";
	#endif
  if(shell_color)
    delete [] shell_color;
  shell_color = NULL;
}

void sea_turtle::read()
{
  cout << "sea_turtle::read()\n";
  char temp[STRMAX];
  cout << "shell color: ";
  cin.get(temp, STRMAX, '\n');
  cin.ignore(100, '\n');
  shell_color = new char [strlen(temp) + 1];
  strcpy(shell_color, temp);
}

void sea_turtle::display() const
{
  cout << "sea_turtle::display()\n";
  animal::display();
  cout << "Shell color: " << shell_color << endl;
}

int sea_turtle::move() const
{
  cout << "Sea turtle " << name << " swims.\n";
  return 1;
}

//owls constructors
owl::owl() : feather_color(NULL) 
{
  cout << "owl::owl()\n";
  read();
} //default constructor

owl::owl(const char * name, float age, bool mammal, const char * feather_color)
  : animal(name, age, mammal), feather_color(NULL)
{
	#ifdef CONSTRUCTOR
  cout << "owl::owl(char*,float,bool,char*)\n";
	#endif
  this->feather_color = new char [strlen(feather_color) + 1];
  strcpy(this->feather_color, feather_color);
}

owl::owl(const owl & copy_from) 
  : animal(copy_from), feather_color(NULL) 
{
	#ifdef CONSTRUCTOR
  cout << "owl::owl(const owl &)\n";
	#endif
  if(!copy_from.feather_color)
    return;
  feather_color = new char [strlen(copy_from.feather_color) + 1];
  strcpy(feather_color, copy_from.feather_color);
}
owl::~owl() //destructor
{ 
	#ifdef DESTRUCTOR
  cout << "~owl::owl()\n";
	#endif
  if(feather_color)
    delete [] feather_color;
  feather_color = NULL;
}

void owl::read()
{
  cout << "owl::read()\n";
  char temp[STRMAX];
  cout << "feather color: ";
  cin.get(temp, STRMAX, '\n');
  cin.ignore(100, '\n');
  feather_color = new char [strlen(temp) + 1];
  strcpy(feather_color, temp);
}

void owl::display() const
{
  cout << "owl::display()\n";
  animal::display();
  cout << "feather color: " << feather_color << endl;
}

int owl::move() const
{
  cout << "Owl " << name << " flies through the air.\n";
  return 1;
}

