#include "doctest.h"

TEST_CASE("tests")
{
    SUBCASE("sub tests")
    {

        for (int i=0; i < 21; i++)
        {
            CHECK_EQ(i * 99 * 127, i * 3 * 11 * 3 * (4*4*4*2 - 1)); // lmao..
        }
    }
}