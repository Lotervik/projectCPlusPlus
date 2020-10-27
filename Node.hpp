//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_NODE_HPP
#define TRAVAIL2_NODE_HPP
#include<iostream>
#include<string>


using namespace std;


class File;
class Directory;
class FileSystem;

class Node
{

protected:
    FileSystem *fs;
    int uid;
    string name;
    Directory *parent;

    Node(FileSystem *fs, int uid, string name, Directory *parent = nullptr);
    ~Node();

    virtual void print_to(std::ostream &os, int valeur) = 0;

public:

    string get_name();
    virtual bool is_directory()= 0;
    virtual Directory* to_directory() = 0;
    virtual File* to_file() = 0;
    virtual int size() = 0;
};

#endif //TRAVAIL2_NODE_HPP
