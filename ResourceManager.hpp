#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager()
    { 
        
    }
    ResourceManager(const ResourceManager& kopia)
    { 
        object = kopia.object;
    }
    ResourceManager& operator=(const ResourceManager& przypisany)
    {

        return *this;
    }

    double get() { return object.get();}

    Resource object;
};
