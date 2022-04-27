#pragma once

namespace coup
{
    class Duke : public Player
    {
        public:
            Duke(Game &ref_game, const std::string &name){};
            void tax(){};
            void block(Player &assa_target){};
    };    
}