#include <iostream>
#include <vector>

int  findUniqueNumber(std::vector<int> nums){
    int unique = 0;

    for (int num : nums) {
        unique ^= num;
    }

    return unique;

}

int main(){

    std::vector<int> numbers = {6, 7, 5, 7, 6, 4, 5};
    int uniqueNumber = findUniqueNumber(numbers);

    std::cout << "Unique number: " << uniqueNumber << std::endl;

    return 0;
}