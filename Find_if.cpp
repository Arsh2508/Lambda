#include <iostream>
#include <vector>

template <typename T>
T* find_if(std::vector<T>& vec, bool(*func)(const T&)){
    for(size_t i = 0; i < vec.size(); ++i) {
        if(func(vec[i])) {
            return &vec[i];
        }
    }
    return nullptr;
}

int main() 
{
    std::vector<int> nums = {1, 3, 4, 5, 7, 9};

    int * res = find_if<int>(nums, [](const int& x) { return x % 2 == 0; });

    if(res) {
        std::cout << "first even number: " << *res << std::endl;
    }
    else {
        std::cout << "no even number: " << std::endl;
    }
    return 0;
}