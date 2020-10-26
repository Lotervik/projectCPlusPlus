//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_NODE_HPP
#define TRAVAIL2_NODE_HPP
#include<iostream>
#include<string>
#include "FileSystem.hpp"

using namespace std;
class Directory;
class File;

class Node
{
    friend class Directory;
private:
    FileSystem *fs;
    int uid;
    string name;
    Directory *parent;
public:
    //TODO : qst2 NODE
    Node(FileSystem *fs, int uid, string name,Directory *parent = nullptr);
    ~Node();
    string get_name();
    virtual bool is_directory()= 0;
    virtual Directory* to_directory() = 0;
    virtual File* to_file() = 0;
    virtual int size() = 0;
};

#endif //TRAVAIL2_NODE_HPP
