#include <iostream>

int main(){
    int n;
    std::cin >> n;
    double sum;

    for(int i = 1; i <= n; ++i){
        sum += 1.0 / i;
    }
    std::cout << sum << '\n';
    return 0;
}