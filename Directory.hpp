//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_DIRECTORY_HPP
#define TRAVAIL2_DIRECTORY_HPP
#include<iostream>
#include<vector>

#include "Node.hpp"
#include "File.hpp"
#include "FileSystem.hpp"

class Directory : public Node
{
    friend class FileSystem;
private:
    /* data */
    std::vector<Node*> children;

    ~Directory();

public:
//TODO: qst 1 derniere phrase
    Directory(FileSystem *fs, int uid, string name, Directory *parent = nullptr);
    bool is_directory() override;
    Directory* to_directory() override;
    File* to_file() override;
    int size() override;
    void print_to(std::ostream &os, int valeur) override;

    friend ostream &operator<<(ostream &os, Directory &directory);

    File* add_file(std::string fichier) ;
    Directory* add_directory(std::string fichier);
    bool remove_node(std::string noeud);
    Node* find_node(std::string noeud);
};

#endif //TRAVAIL2_DIRECTORY_HPP
