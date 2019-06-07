#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string simplifyPath(std::string path)
{
    std::string res, tmp;
    std::vector<std::string> stk;
    std::stringstream ss(path);
    while (std::getline(ss, tmp, '/'))
    {
        if (tmp == "" || tmp == ".")
            continue;
        if (tmp == ".." && !stk.empty())
            stk.pop_back();
        else if (tmp != "..")
            stk.push_back(tmp);
    }
    for (auto str : stk)
        res += "/" + str;
    return res.empty() ? "/" : res;
}

int main(void)
{

    return 0;
}