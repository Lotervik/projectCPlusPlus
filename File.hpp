//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_FILE_HPP
#define TRAVAIL2_FILE_HPP

#include<iostream>
#include<string>

using namespace std;

#include "Node.hpp"


class File : public Node
{
    friend class Directory;
private:
    /* data */
    string content;
    File(FileSystem *fs, int uid, string name,Directory *parent);
    ~File();
public:
    //TODO: la derniere phrase qst1 FILE

    string get_content();
    void set_content(const std::string& str);
    bool is_directory() override;
    Directory* to_directory() override;
    File* to_file() override;
    int size() override;
    void print_to(std::ostream &os, int valeur) override;


};
#endif //TRAVAIL2_FILE_HPP
