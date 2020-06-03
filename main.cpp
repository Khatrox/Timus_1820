#include <iostream>
#include <cmath>

int main()
{
    std::string line;
    getline(std::cin, line);

    char *end{};
    auto N = strtol(line.c_str(), &end, 10);
    auto k = strtol(end, &end, 10);

    if (N > k)
    {
        std::cout << ceil((static_cast<double>(N) / k) * 2);
    }
    else
    {
        std::cout << "2" << '\n';
    }
    
    return 0;
}