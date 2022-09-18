#pragma once

#include "CTexture.h"
#include <SFML/Graphics/Sprite.hpp>

class CSprite : public sf::Sprite {
private:
    CTexture *m_texture;

public:
    void load(CTexture &texture);

    CSprite(std::string sFileName);
    ~CSprite();
};