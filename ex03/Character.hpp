#pragma once

class Character : public ICharacter
{
    public:
        Character();
        virtual ~Character();
        Character(const Character &other);
        Character &operator=(const Character &other);

        Character(const std::string &name);
        virtual std::string const &getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

};