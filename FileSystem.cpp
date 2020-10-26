//
// Created by patrick on 26/10/2020.
//

#include "FileSystem.hpp"

FileSystem::~FileSystem()
{

}

string FileSystem::get_name()
{
    return name;
}


Directory* FileSystem::get_root()
{
    return root;
}



FileSystem::FileSystem(string name): name(name)
{

}

int FileSystem::get_fresh_uid()
{
    uid++;
    return uid;
}
