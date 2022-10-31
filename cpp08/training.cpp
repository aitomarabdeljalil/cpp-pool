#include<iostream>
#include<vector>

int main(void)
{
    std::vector<int> val{ 1, 2, 3, 4, 5 };
    for (int i = 0; i < val.size(); i++)
        std::cout << val[i] << std::endl;
    for (int va : val)
        std::cout << va << std::endl;
    std::cin.get();
    return 0;
}
