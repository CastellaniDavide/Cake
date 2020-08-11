#include <iostream>

int main() {
    long long N, a;
    std::cin >> N;

    a=N/2;

    std::cout << (a+1)*(N-a+1) << std::endl;
    return 0;
}
