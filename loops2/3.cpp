#include <iostream>
#include <cmath>

int main(){
    int n;
    double x;
    std::cin >> n >> x;
    double last_item = x;
    double sum = 0.0;
    for(int i = 0; i <= n; ++i){
        sum += sin(last_item);
        last_item = sin(last_item);
    }
    std::cout << sum << '\n';
}