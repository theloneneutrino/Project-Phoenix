#include "entity.h"

Entity::Entity()
{
	Health = 0; Mana = 0;
};

void Entity::takeDamage(int damageAmount)
{
  Health -= damageAmount;
}