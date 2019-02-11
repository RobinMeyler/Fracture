#pragma once
#include <SFML/Graphics.hpp>
#include "MyVector3.h"

class Player
{
public:
	Player();
	~Player();

	void update(sf::Time dt);
	void render(sf::RenderWindow & t_window);

	sf::Sprite *getBody();

private:
	sf::Texture m_playerTexture;
	sf::Sprite m_player;

	MyVector3 m_position;
};

