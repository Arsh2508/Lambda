#include <iostream>
#include <vector>

template <typename T, typename Predicate>
T* find_if(std::vector<T>& vec, Predicate pred){
    for(size_t i = 0; i < vec.size(); ++i) {
        if(pred(vec[i])) {
            return &vec[i];
        }
    }
    return nullptr;
}


int main() 
{
    std::vector<int> nums = {1, 3, 4, 5, 7, 9};

    int * res = find_if(nums, [](int x) { return x % 2 == 0; });

    if(res) {
        std::cout << "first even number: " << *res << std::endl;
    }
    else {
        std::cout << "no even number: " << std::endl;
    }
    return 0;
}