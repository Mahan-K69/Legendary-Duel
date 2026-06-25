#ifndef HERO_H
#define HERO_H
#include <string>

class Hero {
  
    int MaxHp;
    int Hp=MaxHp;
    std::string Name ;
    int Move;
    int Range;

    //Deck
    //Hand
    //Node

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
