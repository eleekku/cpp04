#pragma once

class Character
{
    public:
        Character();
        virtual ~Character();
        Character(const Character &other);
        Character &operator=(const Character &other);
};