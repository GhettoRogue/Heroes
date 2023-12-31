#pragma once

#include "Armor.h"
#include <string>

using namespace std;

class Hero {
private:
    string _name;
    int _health;
    int _damage;
    Armor *_armor;

protected:
    Hero(const string &name, int health, int damage) : _name(name), _health(health), _damage(damage) {
        _armor = nullptr;
    }

public:
    const string GetName() const {
        return _name;
    }

    int GetHealth() const {
        return _health;
    }

    int GetDamage() const {
        return _damage;
    }

    bool IsDead() {
        return _health == 0;
    }

    void SetArmor(Armor *armor) {
        _armor = armor->Clone();
    }

    void TakingDamage(int damage) {
        int armorDefence = _armor == nullptr ? 0 : _armor->GetDefence();
        int d = damage - armorDefence;
        _health -= d;
    }

    void Attack(Hero *enemy) {
        enemy->TakingDamage(_damage);
    }

};



