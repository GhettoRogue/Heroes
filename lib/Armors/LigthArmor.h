#pragma once

#include "../Armor.h"
#include "../ConfigGame.h"

using namespace std;

class LightArmor : public Armor {
public:
    LightArmor() : Armor("LightArmor", ConfigGame::getDefenceLightArmor()) {}
};


