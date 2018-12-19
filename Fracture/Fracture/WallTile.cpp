#include "WallTile.h"



WallTile::WallTile()
{
	m_wallTexture.loadFromFile("block2.png");
	m_wallTexture2.loadFromFile("block1.jpg");
	m_wallSprite.setTexture(m_wallTexture);
}

WallTile::WallTile(sf::Vector2f t_pos, sf::Texture const  & t_texture)
{
	m_wallTexture.loadFromFile("tile1.png");
	m_wallSprite.setTexture(m_wallTexture);
	m_wallSprite.setPosition(t_pos);
}


WallTile::~WallTile()
{
}

void WallTile::setTexture(int t_int)
{
	if (t_int == 1)
	{
		m_wallSprite.setTexture(m_wallTexture);
	}
	else if (t_int == 2)
	{
		m_wallSprite.setTexture(m_wallTexture2);
	}
}

void WallTile::setPosition(sf::Vector2f t_pos)
{
	m_wallSprite.setPosition(t_pos);
}

sf::Vector2f WallTile::getPosition()
{
	return sf::Vector2f();
}

sf::Sprite  WallTile::getSprite()
{
	return m_wallSprite;
}

void WallTile::render(sf::RenderWindow & t_win)
{
	t_win.draw(m_wallSprite);
}

