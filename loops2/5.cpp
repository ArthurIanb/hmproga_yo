#include <iostream>
#include <cmath>


double custom_sin(double x, double eps){
    double sum = 0;
    double current_x = x;
    long long current_fact = 1;
    int n = 1;
    // fabs(current_x / current_fact) > eps &&
    while(fabs(current_x / current_fact) > eps && n < 20){
        sum += current_x / current_fact;
        current_x *= -1;
        current_x *= x * x;
        current_fact *= (n + 1) * (n + 2);
        n += 2;
    }
    return sum;
}

int main(){
    double x1, x2, dx, eps;
    std::cin >> x1 >> x2 >> dx >> eps;
    // check if we will not go to inf
    for(;x1 <= x2; x1 += dx){
        std::cout << custom_sin(x1 - int(x1 / 2 / M_PI) * 2 * M_PI, eps) << '\t' << sin(x1) << '\n';
    }
}