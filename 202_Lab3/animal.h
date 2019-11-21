//#define CONSTRUCTOR 
//#define DESTRUCTOR 
//#define RUNTIME

class animal
{
  public:
    animal(); //default constructor
    animal(const char * name, float age, bool mammal);
    animal(const animal &); //copy constructor
    virtual ~animal(); //destructor

    //my public funcs
    virtual void read();
    virtual void display() const;
    virtual int move() const;
  protected:
    char * name;
    float age;
    bool mammal;
  private:
};

class kitten : public animal
{
  public:
    kitten(); //default constructor
    kitten(const char * name, float age, bool mammal, const char * fur_color);
    kitten(const kitten &); //copy constuctor
    ~kitten(); //destructor

    //my public funcs
    void read();
    void display() const;
    int move() const;
  protected:
  private:
    char * fur_color;
};

class sea_turtle : public animal
{
  public:
    sea_turtle(); //default constructor
    sea_turtle(const char * name, float age, bool mammal, const char * shell_color);
    sea_turtle(const sea_turtle &); //copy constructor
    ~sea_turtle(); //destructor

    //my public funcs
    void read();
    void display() const;
    int move() const;
  protected:
  private:
    char * shell_color; 
};

class owl : public animal
{
  public:
    owl(); //default constructor
    owl(const char * name, float age, bool mammal, const char * feather_color);
    owl(const owl &); //copy constructor
    ~owl(); //destructor

    //my public funcs
    void read();
    void display() const;
    int move() const;
  protected:
  private:
    char * feather_color; 
};
