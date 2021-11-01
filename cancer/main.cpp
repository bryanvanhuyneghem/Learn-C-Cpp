#include <iostream>
#include<stdio.h>


int main() {
    unsigned int AVGING_SIZE = 50;
    int i = 50;
    for (int j = i; j >= i - AVGING_SIZE; j--)
    {
        std::cout << (j)<< std::endl;
    }
    return 0;
}