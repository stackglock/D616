#pragma once

#include <string>

#include "CEngine.h"
#include "cmrc.hpp"

class CResourceManager 
{
private:
    cmrc::embedded_filesystem *m_fsResources;
    std::map<std::string, cmrc::file> m_fileList;
public:

    void loadFile(std::string sFileName);
    cmrc::file getFile(std::string sFileName);
    void initResources(); 

    CResourceManager();
    ~CResourceManager();

};

inline CResourceManager g_resourceManager;