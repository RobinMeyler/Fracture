#include "Player.h"



Player::Player()
{
	m_position = MyVector3{ 32*3, 32 * 21, 0 };
	m_playerTexture.loadFromFile("playerTextureTemp.png");
	m_player.setTexture(m_playerTexture);
	m_player.setTextureRect(sf::IntRect{ 0,0, 32,32 });
	m_player.setPosition(m_position);
}


Player::~Player()
{
}

void Player::update(sf::Time dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_position.x += 4;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_position.x -= 4;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_position.y += 4;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_position.y -= 4;
	}
	m_player.setPosition(m_position);
}

void Player::render(sf::RenderWindow & t_window)
{
	t_window.draw(m_player);
}

sf::Sprite * Player::getBody()
{
	return &m_player;
}
