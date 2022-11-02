#include "headers/CMap.h"
#include "CEntity.h"
#include "CPlayer.h"
#include "CSprite.h"
#include <cstddef>
#include <vector>

void CMap::initEntities()
{
    m_pMainPlayer = new CPlayer();

    struct crack {
        float m_fHealth;
    } ;
    float a = reinterpret_cast<crack* >(&m_pMainPlayer)->m_fHealth;

    m_pMainPlayer->getHealth();

    m_pEntityList->push_back(m_pMainPlayer);
}

void CMap::updateEntities()
{
    for(size_t i = 0; i < m_pEntityList->size(); ++i) 
    {
        m_pEntityList->at(i)->updateState();
    }
}

void CMap::renderEntities(sf::RenderWindow* m_pWindow) 
{
    for(size_t i = 0; i < m_pEntityList->size(); ++i) 
    {
        m_pWindow->draw(m_pEntityList->at(i)->getSprite());
    }
} 

CPlayer* CMap::getPlayer()
{
    return m_pMainPlayer;
}

CMap::CMap() 
{
    m_pEntityList = new std::vector<CEntity*>;

    this->initEntities();
}

CMap::~CMap()
{
    delete m_pMainPlayer;

    for(size_t i = 0; i < m_pEntityList->size(); ++i)
    {
        delete m_pEntityList->at(i);

        m_pEntityList->at(i) = nullptr;
    }

    delete m_pEntityList;

    m_pEntityList = nullptr;
    m_pMainPlayer = nullptr;
}