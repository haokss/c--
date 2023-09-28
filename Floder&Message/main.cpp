#include"Message.hpp"
#include<string>
#include<iostream>

int main(int argc, char const *argv[])
{
    Folder a;
    a.printFolder();
    Message msg("hello");
    Message msg1(std::string("haha"));
    a.addMsg(&msg);
    a.addMsg(&msg1);

    msg.save(a);
    a.printFolder();
    system("pause");
    return 0;
}
