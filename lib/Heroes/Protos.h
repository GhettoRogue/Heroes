#pragma once

#include "../Hero.h"
#include "../ConfigGame.h"

class Protos : public Hero {
public:
    Protos(const string &name) : Hero(name, ConfigGame::getHealthProtos(), ConfigGame::getDamageProtos()) {}
};

