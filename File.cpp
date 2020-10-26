//
// Created by patrick on 26/10/2020.
//

#include "File.hpp"

File::File(FileSystem *fs, int uid, string name,Directory *parent): Node( fs, uid, name, parent)
{

}

string File::get_content()
{
    return content;
}

void File::set_content(const std::string& str)
{
    content = str;
}

bool File::is_directory()
{
    return false;
}

Directory* File::to_directory()
{
    return nullptr;
}

File* File::to_file()
{
    return this;
}

int File::size()
{
    return content.length();
}