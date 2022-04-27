#pragma once

namespace coup
{
    class Contessa : public Player
    {
        public:
            Contessa(Game &ref_game, const std::string  &name){};
            void block(Player &assa_target){};
    };    
}