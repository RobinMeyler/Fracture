#pragma once

#include "Tile.h"

class WallTile 
{
public:
	WallTile();
	WallTile(sf::Vector2f t_pos, sf::Texture const  &t_texture);
	~WallTile();
	void setTexture(int t_int);
	void setPosition(sf::Vector2f t_pos);

	virtual sf::Vector2f getPosition();
	sf::Sprite getSprite();
	void render(sf::RenderWindow &t_win);
private:
	sf::Texture m_wallTexture;
	sf::Texture m_wallTexture2;
	sf::Sprite m_wallSprite;
};

