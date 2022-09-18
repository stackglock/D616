#include "CSprite.h"
#include "CTexture.h"
#include "CEngine.h"
#include "CResourceManager.h"


void CSprite::load(CTexture &texture) {
    this->setTexture(texture);
}

CSprite::CSprite(std::string sFileName) {
    cmrc::file file = g_resourceManager.getFile(sFileName);

    m_texture = new CTexture(file);
    m_texture->loadFromMemory(file.begin(), file.size());

    this->setTexture(*m_texture);
}

CSprite::~CSprite() {

    delete m_texture;

}