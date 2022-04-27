#include <iostream>
#include <string>
#include <vector>
#pragma once

namespace coup
{
    class Game 
    {
        public:
            Game(){};
            ~Game(){};
            std::string turn(){ std::string lol = "lol"; return lol;};
            std::vector<std::string> players(){std::vector<std::string> a; return a;};

    };
}