#include "CPlayer.h"
#include "CEngine.h"
#include "CSprite.h"
#include <SFML/Window/Keyboard.hpp>

void CPlayer::listenInput() 
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        this->movePosition('U');
    } 
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        this->movePosition('D');
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        this->movePosition('L');
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        this->movePosition('R');
    }
}

CPlayer::CPlayer() 
{
    this->setSprite(g_spriteList["player"]);

    this->setSpeed(0.03f);

}

CPlayer::~CPlayer()
{

}
