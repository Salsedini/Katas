#include <cstdlib>
#include <iostream>

bool divisible3(int num){

    if(num%3==0){
        return true;
    }
    return false;

}

bool divisible5(int num){

    if(num%5==0){
        return true;
    }
    return false;

}

void printear(int i){

    if(divisible3(i)){
        if(divisible5(i)){

            std::cout<<"Fizzbuzz\n";
            return;

        }

        std::cout<<"Fizz\n";
        return;

    }

    if(divisible5(i)){

        std::cout<<"Buzz\n";
        return;

    }

    std::cout<<i<<"\n";
    return;

}

int main(){

    for(int i=1;i<100;i++){
        
        printear(i);
        
    }

}