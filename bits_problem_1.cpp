#include <iostream>

int countBits(int num) {
    int count = 0;

    while (num > 0) {
        num >>= 1;
        count++;
    }
    return count;
}



int function(int n ,int count){

    int zero_count = 0;
    int one_count = 0;

    for(int i = 0 ; i < count ; i++){
        if((n & 1) == 1){
            one_count++;
        }
        else{
            zero_count++;
    }
        n >>= 1;
    }
    if(zero_count > one_count){
        return 0 ;
    }
    else if(zero_count < one_count){
        return 1 ;
    }
}

int main(){

    int number;
    std::cin >> number;

    if(function(number,countBits(number)) == 0){
        std::cout <<  "Number of zero(0) is more than one(1) "<< std::endl;
    }
    else if(function(number,countBits(number)) == 1){
        std::cout <<  "Number of one(1) is more than zero(0) "<< std::endl;
    }
    else{
        std::cout <<  "Number of one(1) and zero(0)  are equal " << std::endl;
    }


    return 0;
}