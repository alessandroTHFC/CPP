#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class   Zombie {
    
    private: 
        std::string _name;
        int idNum;
    public:
        Zombie(void);
        ~Zombie(void);

        void    announce(void);
        void    setNameNum(std::string name, int id);
};

Zombie* zombieHorde(int n, std::string name);

#endif