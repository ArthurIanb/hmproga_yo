#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int mult = 1;
    double sum = 0;
    for(int i = 0; i <= n; ++i){
        sum += 1.0 / mult;
        mult *= 2;
    }
    std::cout << sum << '\n';
}