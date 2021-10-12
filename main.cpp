#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
  srand(time (NULL));
  int x=rand() %101; // random numbers
  
  
  cout << "The Computer thought of the number from 0 to 100. Try to guess the number. You have 8 tries. Your number? ";
  int user_choice;
  bool flag=false;
  
  for(int i=0; i<8; i++)
  {
  cin >> user_choice;
  if (x == user_choice) 
    {cout << "YOU WIN!!"; flag=true; break;};
  if (x< user_choice)
     {cout << "LESS  ";};
  if (x> user_choice)
     {cout << "MORE  ";};
  }
if (flag==false) {cout << "YOU ARE LOSER!!!";};
return 0;
}
