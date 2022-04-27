#pragma once

namespace coup
{
    class Assassin : public Player
    {
        public:
            Assassin(Game &ref_game, const std::string &name){};
            void kill(Player &target){};
    };    
}