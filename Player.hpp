#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#pragma once
namespace coup
{
    class Player
    {
        public:
            int my_money;
            Player(){};
            ~Player(){};
            void income(){};
            void foreign_aid(){};
            void coup(Player &target){};
            int coins(){return 1;};
    };
}