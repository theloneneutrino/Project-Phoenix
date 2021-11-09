#include <iostream>
using std::string;
class Entity
{
protected:
  Entity();
  int Health, Mana;
  string EntityName;
  
  void takeDamage(int);
};