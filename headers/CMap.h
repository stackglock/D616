#pragma once

#include "headers/CEntity.h"

class CMap 
{
private:
    std::vector<CEntity> m_entityList;

    char m_tileset[2][3];

    
public:

    void init();

};