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
template <class T1, class T2>
class Data
{
public:
    Data() { cout << "Data<T1, T2>" << endl; }

private:
    T1 _d1;
    T2 _d2;
};

//全特化<int,char>
template <>
class Data<int, char>
{
public:
    Data() { std::cout << "Data<int, char>" << std::endl; }

private:
    int _d1;
    char _d2;
};

void TestVector()
{
    Data<int, int> d1;
    Data<int, char> d2;
}

int main(int argc, char const *argv[])
{
    std::cout << compare(std::string("he"), std::string("he"));
    return 0;
}
