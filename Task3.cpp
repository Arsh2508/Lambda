#include <iostream>

int main()
{
    auto fib = [](auto this_fib, int n){
        if(n < 2) {
            return n;
        }
        return this_fib(this_fib, n - 1) + this_fib(this_fib, n - 2);
    };

    for(int i = 0 ; i < 10; ++i) {
        std::cout << "fib" << i << " = " << fib(fib, i) << std::endl;
    }

    return 0;
}