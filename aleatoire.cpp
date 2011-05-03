#include <iostream>
using namespace std;

#include <time.h>

int main () {

  cout << "Premier nombre aleatoire : " << rand()%10 << endl ;
  srand ( time(NULL) );
  cout << "un autre nombre aleatoire : " << rand()%10 << endl ;
  srand(1);
  cout << "On retombe sur le premier nombre ici : "<< rand() %10 << endl ;
  
  return 0;
}
