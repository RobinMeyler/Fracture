#include "collision.h"
#include <iostream>


// Just a collision bool but code for which corner is in there as well.
bool collision::isCollided(const sf::Sprite& object1, const sf::Sprite& object2) 
{
	int collsionNum = 0;

	int X1min = object1.getPosition().x;
	int x1Max = X1min + OBJECT_SIZE;
	int Y1min = object1.getPosition().y;
	int Y1max = Y1min + OBJECT_SIZE;

	int X2min = object2.getPosition().x;
	int x2Max = X2min + OBJECT_SIZE;
	int Y2min = object2.getPosition().y;
	int Y2max = Y2min + OBJECT_SIZE;

	// Bottom Right / Top left
	if (   (x1Max > X2min)
		&& (X1min < X2min)

		&& (Y1max > Y2min)
		&& (Y1min < Y2min))
	{
		std::cout << " Bottom Right" << std::endl;
		collsionNum++;
	}

	// Top Right / Bottom left
	if (   (x1Max > X2min)
		&& (X1min < X2min)

		&& (Y1max > Y2max)
		&& (Y1min < Y2max))
	{
		std::cout << " Top Right" << std::endl;
		collsionNum++;
	}

	// Bottom Left / Top Right
	if (   (x1Max > x2Max)
		&& (X1min < x2Max)

		&& (Y1max > Y2min)
		&& (Y1min < Y2min))
	{
		std::cout << " Bottom Left" << std::endl;
		collsionNum++;
	}

	// Top Left / Bottom right
	if (   (x1Max > x2Max)
		&& (X1min < x2Max)

		&& (Y1max > Y2max)
		&& (Y1min < Y2max))
	{
		std::cout << " Top Left" << std::endl;
		collsionNum++;
	}

	if (collsionNum > 0)
	{
		return true;
	}
	return false;
}
