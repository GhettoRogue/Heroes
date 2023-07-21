#pragma once

#include "../Armor.h"
#include "../ConfigGame.h"

class HeavyArmor : public Armor {
public:
    HeavyArmor() : Armor("HeavyArmor", ConfigGame::getDefenceHeavyArmor()) {}
};

