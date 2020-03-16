#include<iostream>
#include<mule.h>
#include<horse.h>
#include<funcs.h>
#include"reactphysics3d.h"

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
