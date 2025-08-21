#include <iostream>
#include <vector>

template <typename T, typename Predicate>
bool all_of(const std::vector<T>& v, Predicate pred){
    for(size_t i = 0; i < v.size(); ++i) {
        if(!pred(v[i])){
            return false;
        }
    }
    return true;
}

template <typename T, typename Predicate>
bool any_of(const std::vector<T>& v, Predicate pred){
    for(size_t i = 0; i < v.size(); ++i) {
        if(pred(v[i])){
            return true;
        }
    }
    return false;
}

int main()
{
    std::vector<int> vec = {1,2,3,4,5,6,7};

    int threshold = 0;
    std::cout << "Enter a number: ";
    std::cin>>threshold;

    if(all_of(vec, [=](int x) { return x < threshold; })){
        std::cout << "All elements in the vector are smaller than " << threshold << std::endl;
    }
    else {
        std::cout << "Not all elements in the vector are smaller than " << threshold << std::endl;
    }

    if(any_of(vec, [=](int x) {return x < threshold; })) {
        std::cout << "At least one element in vector is smaller than " << threshold << std::endl;
    }
    else {
        std::cout << "No elements in vector are smaller than " << threshold << std::endl;
    }

    return 0;

}