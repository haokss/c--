#include"Folder.hpp"
#include"Message.hpp"
#include<iostream>
void Folder::printFolder(){
    if (msgs.size() != 0)
    {
        for (auto it : msgs)
        {
            it->printCont();
        }
    }else{
        std::cout << "folder is null!";
    }
}