#include "CResourceManager.h"

#include "cmrc.hpp"
#include <cstddef>

CMRC_DECLARE(resources);

void CResourceManager::loadFile(std::string sFileName) 
{
    auto *temp = new cmrc::file;

    *temp = m_fsResources->open(sFileName);
    m_fileList[sFileName] = *temp;

    delete temp;

    temp = nullptr;
}

cmrc::file CResourceManager::getFile(std::string sFileName) 
{
    return m_fileList.at(sFileName);
}

void CResourceManager::initResources() 
{
    this->loadFile("player/player.png");
}

CResourceManager::CResourceManager() : 
m_fsResources(new cmrc::embedded_filesystem(cmrc::resources::get_filesystem())) 
{
    this->initResources();

    delete m_fsResources;

    m_fsResources = nullptr;
}

CResourceManager::~CResourceManager() 
{

}

