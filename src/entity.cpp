#include "entity.h"

Entity::Entity()
{
	Health = 0; Mana = 0;
};

void Entity::takeDamage(int damageAmount)
{
Compiler-Setup
  using std::cout;
  using std::endl;
  Health -= damageAmount;
  cout << EntityName << " has taken " << damageAmount << "damage" << endl;

  Health -= damageAmount;

}