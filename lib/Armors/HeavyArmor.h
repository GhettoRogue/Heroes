#pragma once

#include "../Armor.h"
#include "../ConfigGame.h"

class HeavyArmor : public Armor {
public:
    HeavyArmor(const string &name) : Armor(name, ConfigGame::getDefenceHeavyArmor()) {}
};

