#pragma once
#include <random>
#include <algorithm>

namespace Random
{
    inline std::mt19937& getGen()
    {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        return gen;
    }
    inline int getInt(int min, int max)
    {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(getGen());
    }
}