#pragma once

#include "CPlayer.h"
#include "headers/CEntity.h"
#include <vector>

class CMap 
{
private:
    std::vector<CEntity*> *m_pEntityList;

    char m_tileset[2][3];

    CPlayer *m_pMainPlayer = nullptr;

    
public:

    void initEntities();
    void updateEntities();
    void renderEntities(sf::RenderWindow *m_pWindow);

    CPlayer* getPlayer();

    CMap();
    ~CMap();
};