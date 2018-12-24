#include "WallTile.h"



WallTile::WallTile()
{
	
}

WallTile::WallTile(sf::Vector2f t_pos, sf::Texture const  & t_texture)
{
	m_wallSprite.setPosition(t_pos);
}


WallTile::~WallTile()
{
}

void WallTile::setTexture(int t_int)
{
	switch (t_int)
	{
	case 1:
		m_wallTexture.loadFromFile("outBk.jpg");
		m_wallSprite.setTexture(m_wallTexture);
		break;
	case 2:
		m_wallTexture2.loadFromFile("objectBK.png");
		m_wallSprite.setTexture(m_wallTexture2);
		break;
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

