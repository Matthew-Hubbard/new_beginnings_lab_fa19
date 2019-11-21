#include <iostream>
#include <time.h>
#include "zoo.h"

#define MAX 1000

using namespace std;

int main()
{
  // Get start time to time program
	#ifdef RUNTIME
  clock_t start, end;
  double cpu_time_used;
  start = clock();
	#endif

  // show upcasting with static binding

  // show upcasting with dynamic binding

  /*
     kitten k;
     k.display();
     */

  //upcasing 
  /*
     animal * k = new kitten("Sir Meow", 0.7, 1, "Orange");
     k->move();
     */

  /*
     animal * obj = new kitten("Katie", 0.8, 1, "Black");  
     obj->display();
     */

  zoo my_zoo;
  my_zoo.build();
  //my_zoo.display_all();
  my_zoo.watch();

  // Get end time and calculate program time
	#ifdef RUNTIME
  end = clock();
  cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
  cout << "Runtime: " << cpu_time_used << endl;
	#endif
  return 0;
}
