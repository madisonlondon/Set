#include "Set.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  
  Set *set = new Set();
  
  set->add("blinky");
  set->add("pinky");
  set->add("clyde");
  cout <<"after first 3 adds size: " << set->getSize()<< endl;
  set->display();
  cout << endl;
  
  set->add("blinky");
  cout <<"after add of duplicate size: " << set->getSize()<< endl;
  set->display();
  cout << endl;
  
  string d = "blinky";
  if(set->contains(d)){
    cout <<"set contains " << d<< endl;
  }
  else{
    cout <<"set does not contain" << d<< endl;
  }
  
  d = "inky";
  if(set->contains(d)){
    cout <<"set contains " << d<< endl;
  }
  else{
    cout <<"set does not contain " << d<< endl;
  }
  cout << endl;
  
  bool result = set->remove("scooby");
  cout <<"result of remove of entry not in list " << result<< endl;
  set->display();
  cout <<"Size: " << set->getSize()<< endl;
  cout << endl;
  
  result = set->remove("blinky");
  cout <<"result of remove of blinky " << result<< endl;
  set->display();
  cout <<"Size: " << set->getSize()<< endl;
  cout << endl;
  
  d = "blinky";
  if(set->contains(d)){
    cout <<"set contains " << d<< endl;
  }
  else{
    cout <<"set does not contain " << d<< endl;
  }
  
  result = set->remove("pinky");
  cout <<"result of remove of pinky " << result<< endl;
  set->display();
  cout <<"Size: " << set->getSize() << endl;
  cout << endl;
  
  set->clear();
  cout <<"after clear "<< endl;
  set->display();
  cout <<"Size: " << set->getSize() << endl;
  cout << endl;
  
  d = "clyde";
  if(set->contains(d)){
    cout <<"set contains " << d<< endl;
  }
  else{
    cout <<"set does not contain " << d<< endl;
  }
  
  cout <<"set is empty? " << set->isEmpty()<< endl;
  
  set->add("goofy");
  cout <<"after add of goofy size: " << set->getSize()<< endl;
  set->display();
  cout << endl;
  
}
