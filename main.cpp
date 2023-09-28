#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <regex>
class change{
public:
    int a;
    explicit change(int x):a(x){}
};
int main(int argc, char const *argv[])
{
    // std::vector<std::string> is_sort{"caaD", "bbc", "asdsd"};
    // sort(is_sort.begin(), is_sort.end());
    // for (auto it : is_sort)
    // {
    //     std::cout << it << std::endl;
    // }
    // // 使用lambda函数作为谓词
    // sort(is_sort.begin(), is_sort.end(), [](const std::string &s1, const std::string &s2)
    //      { return s1.size() < s2.size(); });
    // for (auto it : is_sort)
    // {
    //     std::cout << it << std::endl;
    // }
    change a(1);
    change b(a);
    std::cout << a.a;
    std::cout << a.a;
    std::vector<int> a;
#if defined(__GNUC__)
        std::cout << "__GNUC__"<<std::endl;
    #endif
    return 0;
}
