#include <iostream>

int main()
{
    constexpr auto factorial = [](auto self, int n)  {
        if(n < 2) {
            return 1;
        }

        return n * self(self, n - 1); 
    };

    constexpr int size = factorial(factorial, 3);
    
    int arr[size];

    std::cout << "Enter " << size << " integers" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin>>arr[i];
    }
    std::cout << "\nYou entered: ";
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}