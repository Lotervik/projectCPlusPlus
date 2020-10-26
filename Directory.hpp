//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_DIRECTORY_HPP
#define TRAVAIL2_DIRECTORY_HPP
#include<iostream>
#include<vector>
#include "Node.hpp"


class Directory : public Node
{
private:
    /* data */
    std::vector<Node*> children;
public:
//TODO: qst 1 derniere phrase
    Directory(FileSystem *fs, int uid, string name,Directory *parent);
    ~Directory();
    bool is_directory();
    Directory* to_directory();
    File* to_file();
    int size();

    File* add_file(std::string fichier);
};

#endif //TRAVAIL2_DIRECTORY_HPP
