
#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    zombie = newZombie("Paco");
    delete zombie;
    randomChump("Manuela");
    return (0);
}