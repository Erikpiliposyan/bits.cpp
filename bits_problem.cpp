#include <iostream>

bool isTenthBitSet_1(int n){
    n = n >> 9 ;
    return (n & 1 )!= 0 ;
}

bool isTenthBitSet_2(int number) {
    int mask = 1 << 9; 
    return (number & mask) != 0;
}

int main(){
    int num;
    std::cin >> num;
    bool result_1 = isTenthBitSet_1(num);
    bool result_2 = isTenthBitSet_2(num);
    std::cout << "Result: " << result_1 << std::endl;
    std::cout << "Result: " << result_2 << std::endl;

    return 0;
}