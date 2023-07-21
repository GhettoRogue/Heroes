cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp lib/ConfigGame.h lib/Hero.h lib/Armor.h lib/Armors/LigthArmor.h lib/Armors/HeavyArmor.h)
