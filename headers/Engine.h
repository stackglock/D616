#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class Engine {
private:
    sf::RenderWindow m_window;
    sf::Event m_event;

    unsigned short int m_iWidth = 1920;
    unsigned short int m_iHeight = 1080;

    void Input();
    void Update();
    void Render();
public:

    void Start();

    Engine();
    ~Engine();
};