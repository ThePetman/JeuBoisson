#ifndef MEMORY_H
#define MEMORY_H

#include "rapidite.h"

class memory
{
private:
    std::string mot;
    std::vector< std::string > liste;
public:
    memory();
    std::vector< std::string > createAlphabet();
void createMot(std::vector< std::string > alphabet, std::vector< std::string > liste, std::string mot);
int jouerMemory(std::vector< std::string > liste, std::string mot);
};

#endif // MEMORY_H
