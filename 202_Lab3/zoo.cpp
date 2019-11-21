#include <iostream>
#include "zoo.h"

using namespace std;

zoo::zoo() : index(0)
{
	#ifdef CONSTRUCTOR
  cout << "zoo::zoo()\n";
	#endif
  for(int i = 0; i < MAX_ANIMALS; ++i)
    animals[i] = NULL;
}

zoo::~zoo()
{
	#ifdef DESTRUCTOR
  cout << "~zoo::zoo()\n";
	#endif
  for(int i = 0; i < MAX_ANIMALS; ++i)
  {
    if(animals[i])
    {
      delete animals[i];
      animals[i] = NULL;
    }
  }
  index = 0;
}

int zoo::add_animal(const animal & to_add)
{
  const kitten * kptr = dynamic_cast<const kitten *>(&to_add);
  if(kptr)
  {
    animals[index] = new kitten(*kptr);
    ++index;
    return 1;
  }
  const sea_turtle * stptr = dynamic_cast<const sea_turtle *>(&to_add);
  if(stptr)
  {
    animals[index] = new sea_turtle(*stptr);
    ++index;
    return 2;
  }
  const owl * optr = dynamic_cast<const owl *>(&to_add);
  if(optr)
  {
    animals[index] = new owl(*optr);
    ++index;
    return 1;
  }
  else // we're a base class animal
  {
    animals[index] = new animal(to_add);
    ++index;
    return 3;
  }
  return -1;
}

int zoo::build()
{
  animal * obj = new kitten("Katie", 0.8, 1, "black");  
  add_animal(*obj);
  delete obj;
  obj = NULL;
  obj = new sea_turtle("Scappy", 114, 0, "green");
  add_animal(*obj);
  delete obj;
  obj = NULL;
  obj = new owl("Poppy", 58, 0, "white");
  add_animal(*obj);
  delete obj;
  obj = NULL;
  return 1;
}

void zoo::display_all() const
{
  for(int i = 0; i < index; ++i)
    animals[i]->display();
}

void zoo::watch() const
{
  cout << "You look around the zoo.\n";
  for(int i = 0; i < index; ++i)
    animals[i]->move();
}

