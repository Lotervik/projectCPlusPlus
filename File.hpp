//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_FILE_HPP
#define TRAVAIL2_FILE_HPP

#include<iostream>
#include<string>

//#include"Node.hpp"
//#include"FileSystem.hpp"
//#include"Directory.hpp"
#include "Node.hpp"

using namespace std;

class File : public Node
{
private:
    /* data */
    string content;
public:
    //TODO: la derniere phrase qst1 FILE
    File(FileSystem *fs, int uid, string name,Directory *parent);
    ~File();
    string get_content();
    void set_content(const std::string& str);
    bool is_directory();
    Directory* to_directory();
    File* to_file();
    int size();
};
#endif //TRAVAIL2_FILE_HPP
