//
// Created by patrick on 26/10/2020.
//

#include "Directory.hpp"


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
    File *f= new File(fs, fs->get_fresh_uid() ,fichier, this);
    children.push_back(f);
    return f;
}

Directory::~Directory() {
    for (Node* i : children) {
//        delete i;
    }
//    delete this;
}

Directory *Directory::add_directory(std::string fichier) {
    for (Node* i : children) {
        if (i->get_name() == fichier) return nullptr;
    }
    Directory *f= new Directory(this->fs, fs->get_fresh_uid(),fichier, this);
    children.push_back(f);
    return f;
}

bool Directory::remove_node(std::string nomNoeud) {
    for (int i = 0; i < children.size(); ++i) {
        if (children[i]->get_name() == nomNoeud) { children.erase(children.begin()+i); return true;}
    }
    return false;
}

Node *Directory::find_node(std::string noeud) {
    for (Node* i : children) {
        if (i->get_name() == noeud) return i;
    }
    return nullptr;
}

void Directory::print_to(ostream &os, int valeur) {
    string ch = "";
    for (int i = 0; i < valeur; i++) {
        ch+= " ";
    }

    os << ch+ + "+ directory: \""+name+"\", uid: "+to_string(uid)+", size: "+ to_string(size()) <<std::endl;

    for(Node* i : children){
        if (i->to_file()!= nullptr) {
            i->to_file()->print_to(os,valeur+1);
        }else {
            i->to_directory()->print_to(os,valeur+1);
        }
    }
}

ostream &operator<<(ostream &os, Directory &directory) {
    directory.print_to(os,0);
    return os;
}

