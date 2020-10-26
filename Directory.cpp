//
// Created by patrick on 26/10/2020.
//

#include "Directory.hpp"
#include "File.hpp"

Directory::Directory(FileSystem *fs, int uid, string name,Directory *parent): Node(fs, uid, name, parent)
{

}

bool Directory::is_directory()
{
    return true;
}

Directory* Directory::to_directory()
{
    return this;
}

File* Directory::to_file()
{
    return nullptr;
}

int Directory::size()
{
    int sommeTaille = 0;
    for (auto i : children)
    {
        sommeTaille+= i->size();
    }

    return sommeTaille;
}

File* Directory::add_file(std::string fichier)
{
    for (Node* i : children) {
        if (i->get_name() == fichier) return nullptr;
    }
    File *f= new File(this->fs, this->fs->get_fresh_uid(),fichier,this->parent);
    children.push_back(f);
    return f;
}