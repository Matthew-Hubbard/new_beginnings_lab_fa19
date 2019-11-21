#include "animal.h"

#define MAX_ANIMALS 20

class zoo
{
  public:
    zoo();
    ~zoo();

    int add_animal(const animal & to_add);
    int build(); //add animals to the array
    void display_all() const;
    void watch() const;
  protected:
  private:
    animal * animals[MAX_ANIMALS];
    int index; //index after last animal
};
