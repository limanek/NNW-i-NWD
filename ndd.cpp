#include <iostream>

int NWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int NWW(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }else if((a%b == 0) && ((a%b == 0) >= 0)) {
        return a;
    } else if(b%a == 0 && ((b%a == 0))) {
        return b;
    } else {
        return a*b;
    }
}

int main() {
    std::cout << "NWD(255, 15) = " << NWD(255, 15) << "\n";
    std::cout << "NWW(255, 15) = " << NWW(255, 15) << "\n";
    return 0;
}