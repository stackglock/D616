#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Vector2.hpp>
#include <map>
#include <thread>

class CEntity 
{
private:
    std::string m_sName;
    std::string m_sTexturePath;

    float m_fHealth;
    float m_fArmor;
    float m_fSpeed;

    float m_fMaxHealth;
    float m_fMaxArmor;

    sf::Texture m_texture;
    sf::Sprite m_sprite;

    sf::Vector2f m_position;

public:

    CEntity();
    ~CEntity();

    void setName(std::string m_sName);

    void setHealth(float m_fHealth);
    void setArmor(float m_fArmor);
    void setSpeed(float m_fSpeed);

    void setTexture(sf::Texture m_texture);
    void setSprite(sf::Sprite m_sprite);

    std::string getName();

    float getHealth();
    float getArmor();
    float getSpeed();

    sf::Texture getTexture();
    sf::Sprite getSprite();

    void updateState();

    void loadTexture(std::string m_sTexturePath);
    void drawEntity(sf::RenderWindow *m_pWindow);

    void setPosition(float fX, float fY);
    void movePosition(char cDirection);


};