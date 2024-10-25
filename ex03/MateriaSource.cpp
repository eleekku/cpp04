#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
    for (int i = 0; i < 4; i++)
        _source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
    if (this != &src) {
        _count = src._count;
        for (int i = 0; i < 4; i++) {
            if (_source[i]) {
                delete _source[i];
                _source[i] = NULL;
            }
            if (src._source[i])
                _source[i] = src._source[i]->clone();
            else
                _source[i] = nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_source[i]) {
            delete _source[i];
            _source[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    if (_count < 4 && m) {
        _source[_count] = m;
        _count++;
        return ;
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_source[i] && _source[i]->getType() == type)
            return _source[i]->clone();
    }
    return nullptr;
}