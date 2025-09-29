#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int romb_height = 2 * n - 1;
    int star_count = 1;
    int probel_count = n - 1;
    for(int i = 0; i < romb_height; ++i){
        for(int j = 0; j < probel_count; ++j){
            std::cout << ' ';
        }
        for(int j = 0; j < star_count; ++j){
            if(star_count == 1 || j % (star_count - 1) == 0) // апасна
                std::cout << '*';
            else
                std::cout << ' ';
        }
        int muliply = 1;
        if(i >= romb_height / 2){
            muliply = -1;
        }
        star_count = star_count +  2 * muliply;
        probel_count = probel_count - 1 * muliply;
        std::cout << '\n';
    }
}