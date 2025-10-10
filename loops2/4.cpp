#include <iostream>

int main(){
    double zadan_tochn = 0.0;
    std::cin >> zadan_tochn;
    double pi_divided_by_4 = 0;
    int N = 0;
    double mult = 1.0;
    for(int i = 1; 1.0 / (2 * i - 1) >= zadan_tochn; ++i){
        pi_divided_by_4 += mult / (2 * i - 1);
        mult *= -1.0;
        ++N;
    }
    double pi = pi_divided_by_4 * 4;
    std::cout << pi << '\n' << "N: " << N << '\n';

}