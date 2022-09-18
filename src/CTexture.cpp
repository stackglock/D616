#include "CTexture.h"

void CTexture::load(cmrc::file &file) 
{
    this->loadFromMemory(file.begin(), file.size());
}

CTexture::CTexture(cmrc::file &file) 
{
    this->loadFromMemory(file.begin(), file.size());
}

CTexture::~CTexture() 
{

}