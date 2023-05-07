#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main(){
    /* Stack
    int var = 8;
    //void* ptr = nullptr;
    int* ptr = &var; // get address
    *ptr = 10; // get current value from this address and set new value
    LOG(var);
    */

    // Heap
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr = &buffer; // b8 f1 02 00(value of pointer) is equal 0x0002f1b8(buffer address of memmory)

    delete[] buffer;
}