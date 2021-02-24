#include <stdexcept>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

std::pair<int,int > findTwoSum(const std::vector<int>& list, int sum)
{
    std::pair <int,int> result;
    std::map<int,int> m;
    std:: vector<int> v;
    for(int i=0; i<list.size();i++)
    {
        if(m.find(sum-list[i])!= m.end())
        {
            result = std :: make_pair(m[sum-list[i]],i);

            return result;
        }
        m[list[i]]=i;
    }
    return result;
    
}
#ifndef RunTests
int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
#endif
