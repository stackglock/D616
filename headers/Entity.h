#pragma once

#include "includes.h"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>

class Entity {
private:
    std::string m_name;

    float m_fHealth;
    float m_fArmor;
    float m_fSpeed;

    float m_fMaxHealth;
    float m_fMaxArmor;

    sf::Texture m_texture;
    sf::Sprite m_sprite;

public:

    Entity();
    ~Entity();

    void set_name(std::string m_name);

    void set_health(float m_fHealth);
    void set_armor(float m_fArmor);
    void set_speed(float m_fSpeed);

    void set_texture(sf::Texture m_texture);

    void set_sprite(sf::Sprite m_sprite);

    std::string get_name();

    float get_health();
    float get_armor();
    float get_speed();

    sf::Texture get_texture();

    sf::Sprite get_sprite();

    void updateState();

};