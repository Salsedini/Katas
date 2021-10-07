#include <cstdlib>
#include <iostream>

long sumatorio(long num){

    long suma=0;
    for(long i=1;i<=num;i++){

        suma+=i;
        std::cout<<i<<"\n";

    }
    return suma;

}

int main(){

    std::cout<<"Para que número quieres realizar el sumatorio: ";
    long num;
    std::cin>>num;
    long suma=sumatorio(num);
    std::cout<<"El resultado de la suma es "<<suma<<".\n";

}