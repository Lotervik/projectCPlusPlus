//
// Created by patrick on 26/10/2020.
//

#include "FileSystem.hpp"



FileSystem::~FileSystem()
{
    delete root;
    delete this;
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

    root = new Directory(this,this->get_fresh_uid(),"root", nullptr);

}

int FileSystem::get_fresh_uid()
{
    return uid++;
}

ostream &operator<<(ostream &os,  FileSystem &fileSystem) {
    os << "filesystem " << fileSystem.name <<std::endl;
    fileSystem.get_root()->print_to(os,0);
    return os;
}

