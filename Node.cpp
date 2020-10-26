//
// Created by patrick on 26/10/2020.
//

#include "Node.hpp"
string Node::get_name()
{
    return name;
}



Node::Node(FileSystem *fs, int uid, string name,Directory *parent):fs(fs),uid(uid),name(name),parent(parent)
{

}