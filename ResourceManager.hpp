#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    
    ResourceManager()
    {   
        Obj = new Resource;
    }
    ResourceManager(const ResourceManager& kopia)
    { 
        //object = kopia.object;
    }
    ResourceManager& operator=(const ResourceManager& przypisany)
    {
        
        return *this;
    }
    /* ResourceManager(ResourceManager&& przeniesiony)
    { 
        ResourceManager zwrot{std::move(przeniesiony)};
        return zwrot;
    } */
     ~ResourceManager()
    {
        delete Obj;
    }

    double get()
    {
        return Obj->get();
    } 


    Resource* Obj;
    // tu musi byæ dynamiczna alokacja
};
