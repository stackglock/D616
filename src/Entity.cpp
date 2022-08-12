#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "headers/Entity.h"

Entity::Entity() {
    
}

Entity::~Entity() {

}

void Entity::set_name(std::string m_name) {
    this->m_name = m_name;
}

void Entity::set_health(float m_fHealth) {
    this->m_fHealth = m_fHealth;
}

void Entity::set_armor(float m_fArmor) {
    this->m_fArmor = m_fArmor;
}

void Entity::set_speed(float m_fSpeed) {
    this->m_fSpeed = m_fSpeed;
}

void Entity::set_texture(sf::Texture m_texture) {
    this->m_texture = m_texture;
}

void Entity::set_sprite(sf::Sprite m_sprite) {
    this->m_sprite = m_sprite;
}

std::string Entity::get_name() { 
    return this->m_name;
}

float Entity::get_health() {
    return this->m_fHealth;
}

float Entity::get_armor() {
    return this->m_fArmor;
}

float Entity::get_speed() {
    return this->m_fSpeed;
}

sf::Texture Entity::get_texture() {
    return this->m_texture;
}

sf::Sprite Entity::get_sprite() {
    return this->m_sprite;
}

void Entity::updateState() {

}


