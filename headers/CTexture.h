#pragma once

#include "SFML/Graphics/Texture.hpp"
#include "cmrc.hpp"

class CTexture : public sf::Texture {
private:

public: 
    void load(cmrc::file &file);

    CTexture(cmrc::file &file);
    ~CTexture();

};