#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    
    ResourceManager() : Obj{new Resource} {}
    ResourceManager(const ResourceManager& kopia)
    {
        Obj = new Resource(*kopia.Obj);
    } 
    ResourceManager& operator=(const ResourceManager& przypisany)
    {
        delete Obj;
        Obj = new Resource(*przypisany.Obj);
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

/*ResourceManager()
    {   
        Obj = new Resource;
    }*/

