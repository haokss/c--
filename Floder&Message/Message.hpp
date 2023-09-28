#ifndef MESSAGE_HPP
#define MESSAGE_HPP
#include<string>
#include<set>
#include<iostream>
#include"Folder.hpp"
class Message
{
    friend class Folder;
private:
    /* data */
    std::string contents;
    std::set<Folder *> folders;
    void add_to_folder(const Message &);
    void remove_from_folder(const Message &);

public:
    explicit Message(const std::string &str = "") : contents(str){};
    //拷贝构造函数
    Message(const Message &);
    //拷贝赋值
    // Message &operator=(const Message &){};
    ~Message();
    void save(Folder &);
    void remove(Folder &);
    void printCont() {
        std::cout << contents;
    }
};

#endif