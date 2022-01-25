#include <iostream>
#include <math.h>

void throw_0();

class fibonacci {
    public:
    void calc_fib(int n) {
        int y = 0;
        int x = 1;
        if(n == 1) {
            throw_0();
        } else {
            while(y < n) {
                int find_fib = y + x;
                x = y;
                y = find_fib;
                std::cout << find_fib << '\n';
            }
        }
    }
};

int main() {

    fibonacci ojb;
    ojb.calc_fib(1);

    return 0;
}

void throw_0() {
    std::cout << 0;
}
