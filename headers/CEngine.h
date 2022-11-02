#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <cstddef>
#include <thread>

#include "CMap.h"
#include "CResourceManager.h"
#include "CPlayer.h"
#include "CSprite.h"

class CEngine 
{
private:
    sf::RenderWindow *m_pWindow;
    sf::Event m_event;

    unsigned short int m_iWidth = 1920;
    unsigned short int m_iHeight = 1080;

    std::thread *m_tRender = nullptr;
    std::thread *m_tUpdate = nullptr;
    std::thread *m_tInput = nullptr;

    CMap *m_pCurrentMap = nullptr;

public: 
    void initSprites();
    void freeSprites();

    void Input();
    void Update();
    void Render();

    void Start();

    CEngine();
    ~CEngine();
};

inline std::map<std::string, CSprite*> g_spriteList;