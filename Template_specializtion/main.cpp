#include<iostream>
#include<string>
#include<string.h>
template<typename T1,typename T2>
int compare(const T1 &v1, const T2& v2){
    if(v1<v2)
        return -1;
    if(v2<v2)
        return 1;
    return 0;
}
template <>
int compare(const std::string &v1, const std::string &v2){
    std::cout << "特化版本" << std::endl;
    return strcmp(v1.c_str(), v2.c_str());
}

int main(int argc, char const *argv[])
{
    std::cout << compare(std::string("he"), std::string("he"));
    return 0;
}
