#include <iostream>

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya){
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public: 
    const char* Name;

    void PrintName(){
        std::cout << Name << std::endl; 
    }
};

int main(){
    Player player;
    player.Move(1.4f, 2.3f);

    std::cout << "Entity size: " << sizeof(Entity) << std::endl;
    std::cout << "Player size: " << sizeof(Player) << std::endl;
}