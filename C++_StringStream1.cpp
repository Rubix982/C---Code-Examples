#include <iostream>
#include <string>
#include <vector>

string simplifyPath(string path)
{
    std::string res, tmp;
    std::vector<std::string> stk;
    std::stringstream ss(path);
    while (std::getline(ss, tmp, '/'))
    {
        if (tmp == "" or tmp == ".")
            continue;
        if (tmp == ".." and !stk.empty())
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