#pragma once

namespace coup
{
    class Captain : public Player
    {
        public:
            Captain(Game &ref_game, const std::string  &name){};
            void steal(Player &target){};
            void block(Player &assa_target){};
    };    
}