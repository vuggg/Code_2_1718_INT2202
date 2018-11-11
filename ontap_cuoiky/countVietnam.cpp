#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


void chuanHoa(std::string &data)
{
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);
    for(int i=0;i<data.size();i++)
    {
        if(data.at(i)==' ') data.erase(i,1);
    }
}

int count(std::string s, std::string key)
{
    int count_ = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)=='v')
        {
            std::string x = s.substr(i,7);
            if(x.compare(key)==0) count_++;
        }
    }
    return count_;
}
int main()
{
    std::string s = "dang cong san vietnam quang vinh la dang cua Viet nam dan Viet Nam";
    chuanHoa(s);
    std::cout << s << std::endl;
    std::string key = "vietnam";
    int count_ = count(s,key);
    std::cout << count_;
}
