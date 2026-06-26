#ifndef HERO_H
#define HERO_H
#include <string>
#include <vector>
#include "Node.h"
#include "Card.h"
class Hero {
  
    int MaxHp;
    int Hp=MaxHp;
    std::string Name ;
    int Move;
    int Range;

    int node;

   
    std::vector<Card>Hand;

    public:
    void SetName(std::string);
    void SetHP(int );
    void SetRange(int);
    int GetHP()const;
    std::string GetName()const;
    int GetMove()const;
    void TakeDamge(int damage);
    void Heal(int heal);
    bool IsAlive()const;
    

};


#endif /* HERO_H */
