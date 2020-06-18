#include<iostream>
#include<animals/mule.h>
#include<animals/horse.h>
#include<animals/funcs.h>
#include<reactphysics3d.h>

using namespace std;

int main() {
  mule m;
  horse h;
  cout << "\nMain is running.";
  dumbFunc();
  m.displayMule();
  h.displayHorse();
  cout << endl;
}
