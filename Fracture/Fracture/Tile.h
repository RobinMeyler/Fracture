#pragma once

#include "SFML/Graphics.hpp"

class Tile
{
public:

	Tile(sf::Vector2f t_pos, sf::Texture &t_texture);
	~Tile();
	virtual sf::Vector2f getPosition() = 0;
	virtual sf::Sprite getSprite() = 0;

private:
	sf::Vector2f m_position;
};

