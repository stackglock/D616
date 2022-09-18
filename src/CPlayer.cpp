#include "CPlayer.h"
#include <SFML/Window/Keyboard.hpp>

void CPlayer::listenInput() 
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
            this->movePosition('U');
    } 
    
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
            this->movePosition('D');
    }

    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
            this->movePosition('L');
    }

    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
            this->movePosition('R');
    }
}