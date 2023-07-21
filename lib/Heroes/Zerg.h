#pragma once

#include "../Hero.h"
#include "../ConfigGame.h"

class Zerg : public Hero {
public:
    Zerg(const string &name) : Hero(name, ConfigGame::getHealthZerg(), ConfigGame::getDamageZerg()) {}
};


