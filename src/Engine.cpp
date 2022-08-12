#include "../headers/Engine.h"
#include <SFML/Window/Event.hpp>
#include <thread>

void Engine::Input() {

}

void Engine::Update() {

}

void Engine::Render() {
    while(m_window.isOpen()) 
    {

        while(m_window.pollEvent(m_event)) 
        {
            if (m_event.type == sf::Event::Closed)
                m_window.close();
        }

        m_window.clear();
        m_window.display();

    }
}

Engine::Engine() {
    m_window.create(sf::VideoMode(m_iWidth, m_iHeight), "SFML works!");

    this->Render();

}

Engine::~Engine() {

}