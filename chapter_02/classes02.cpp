#include <iostream>

class Entity{
public:
    float X, Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created Entity" << std::endl;
    }

    ~Entity(){
        std::cout << "Deleted Entity" << std::endl;
    }

    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
};

int main(){
    Entity e;
    e.Print();
}