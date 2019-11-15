#include <cstring>
#include <iostream>

using namespace std;

const int NAME = 20;

class monster
{
  public: //can access from any scope 
    monster(); //default constructor
    ~monster(); //destructor
    monster(const int & hp); //constructor with arg 
    monster(const int & hp, const char * name); //constructor with args
    monster(const monster &); //copy constructor

    //public member functions
    void display() const;
    void take_dmg(const int & dmg);
    void attack();
    void prompt_name();
  protected: //other classes in hierachy can access
    //data members
    int health;
    char * name;
  private: //only this class can access
    //int health;
};

class orc : public monster //derivation list
{
  public:
    orc(); //default constructor
    ~orc(); //destructr
    orc(const int & hp);
    orc(const int & hp, const int & belly, const char * name);
    void smash();
    void display() const;
  protected:
  private:
    int belly_weight;
    char * tribe;
};


/*
 * Maybe try writing a goblin class?
   class goblin: public monster
   {
   public:
   goblin();
   goblin(int hp);
   protected:
   private:
   };
*/

