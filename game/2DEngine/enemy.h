#ifndef _ENEMY_H
#define _ENEMY_H

#include "entity.h"
#include "constants.h"

namespace enemyNS
{
	const int WIDTH = 16;
	const int HEIGHT = 16;
	// location on screen
	const int X = 100;
	const int Y = 450;
	// pixels per second
	const float SPEED = 50;
	// minumum Y velocity
	const float MIN_VY = 1;
	const float MASS = 1.0f;
	const int SEAGULL_START_FRAME = 15;
	const int SEAGULL_END_FRAME = 17;
	const int WATER_START_FRAME = 12;
	const int WATER_END_FRAME = 12;
	const int RAVEN_START_FRAME = 18;
	const int RAVEN_END_FRAME = 21;
}

class Enemy : public Entity
{
public:
	Enemy();
	void update(float frameTime);
};

#endif