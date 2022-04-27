#pragma once
namespace coup
{
    class Ambassador : public Player
    {
        public:
            Ambassador(Game &ref_game, const std::string  &name){};
            void transfer(Player &from, Player &to){};
    };    
}