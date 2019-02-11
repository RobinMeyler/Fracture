#pragma once

// Robin Meyler

#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "collision.h"

#include "MyVector3.h"
#include "Xbox360Controller.h"
#include "WallTile.h"
#include "LevelOne.h"

#include "Player.h"

class Game
{
public:
	Game();
	~Game();

	void run();


protected:

	void intialize();
	void update(sf::Time t_deltaTime);
	void processInput();
	void render();

	Player m_player;
	LevelOne m_levelOne;
	sf::RenderWindow m_renderWin;
	Xbox360Controller m_gameControllerPad;
	
};

