#include "LevelOne.h"
#include <iostream>


LevelOne::LevelOne()
{
	sf::Texture t;
	t.loadFromFile("tile1.png");
	sf::Texture b;
	b.loadFromFile("tile2.png");

	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			m_tileP[i][j].setPosition(sf::Vector2f{ (float)j * 32,(float)i * 32 });
			if (game[i][j] == 1)
			{	
				m_tileP[i][j].setTexture(1);
			}
			else if (game[i][j] == 2)
			{
				m_tileP[i][j].setTexture(2); 
			}
		}
	}

}


LevelOne::~LevelOne()
{
}

void LevelOne::update(sf::Time DT)
{
}

void LevelOne::render(sf::RenderWindow &t_win)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			if (game[i][j] != 0)
			{
				m_tileP[i][j].render(t_win);
			}
		}
	}
}
