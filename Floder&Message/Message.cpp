#include"Message.hpp"
//拷贝构造，新拷贝的msg也需要加入到msg存在的folder中
void Message::add_to_folder(const Message &msg)
{
    for (auto f : msg.folders)
    {
        f->addMsg(this);
    }
}
Message::Message(const Message &msg) : contents(msg.contents), folders(msg.folders)
{
    add_to_folder(msg);
}

//析构时需要删除folder中存在的msg
void Message::remove_from_folder(const Message &msg)
{
    for (auto f : msg.folders)
    {
        f->remMsg(this);
    }
}
Message::~Message()
{
    remove_from_folder(*this);
}
void Message::save(Folder &flo)
{
    folders.insert(&flo);
    flo.addMsg(this);
}
void Message::remove(Folder &flo)
{
    folders.erase(&flo);
    flo.remMsg(this);
}