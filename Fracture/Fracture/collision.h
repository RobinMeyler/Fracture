#pragma once
#include "SFML/Graphics.hpp"

#include "WorldData.h"

class collision
{
public:

	bool static isCollided(const sf::Sprite& object1, const sf::Sprite& object2);

};