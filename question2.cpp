#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    std::pair <int,int> result;
    bool Check = false;
    int i ;
    int  j = list.size();
    for(i = 0; i < j ; i ++)
    {
        for(j = list.size() ; j > i; j--)
        {
            if( list[i] + list[j] == sum)
            {
                result = std :: make_pair(i,j);
                Check = true;
            }
        }
    }
    if(Check == false)
    {
        result = std :: make_pair(-1,-1);
    }

    //throw std::logic_error("Waiting to be implemented");
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