//
// Created by patrick on 26/10/2020.
//

#ifndef TRAVAIL2_FILESYSTEM_HPP
#define TRAVAIL2_FILESYSTEM_HPP
#include<iostream>
#include<string>
#include<list>


using namespace std;
class Directory;

class FileSystem
{
    friend class Directory;

private:
    /* data */
    string name;
    Directory *root;
    list<int> UidList;
    int uid;
    //TODO :
    int get_fresh_uid();

public:
    FileSystem(string name);
    ~FileSystem();
    string get_name();
    Directory* get_root();


};
#endif //TRAVAIL2_FILESYSTEM_HPP
