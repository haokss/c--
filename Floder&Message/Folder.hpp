#ifndef FOLDER_HPP
#define FOLDER_HPP
#include<string>
#include<set>
#include<iostream>
class Message;
class Folder
{
private:
    /* data */
    std::set<Message*> msgs = std::set<Message*>();

public:
    Folder(/* args */) = default;
    ~Folder() = default;
    void addMsg(Message* msg) {
        msgs.insert(msg);
    }
    void remMsg(Message* msg) {
        msgs.erase(msg);
    }
    void printFolder();
};


#endif