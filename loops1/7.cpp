#include <iostream>


double shotthatbih(double val, int stepen){
    for(int i = 0; i < stepen-1; ++i){
        val *= val;
    }
    return val;
}

int main(){
    const int HEIGHT = 21;
    const int WIDTH = 41;

    for(int i = 0; i < HEIGHT; ++i){
        for(int j = 0; j < WIDTH; ++j){
            double x = double(3) / WIDTH * j - 1.5;
            double y = -double(3) / HEIGHT * i + 1.5;

            double eq = (x * x + y * y - 1)*(x * x + y * y - 1)*(x * x + y * y - 1) - x * x * y * y * y;
            if(eq <= 0){
                std::cout << '*';
            }else
                std::cout << '.';

        }
        std::cout << '\n';

    }
}

/*
for(double y1 = -1.5; y1 < 1.5; y1+=(double)1/HEIGHT){
        for(double x1 = -1.5; x1 < 1.5; x1+=(double)1/WIDTH){
            double x = x1;
            double y = y1;
            if(shotthatbih(x * x + y * y - 1, 3) - x * x * y * y * y <= 0){
                std::cout << '*';
            }else
                std::cout << '.';
            
        }
        std::cout << '\n';
    }
*/