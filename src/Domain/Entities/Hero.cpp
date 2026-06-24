#include "Domain/Hero.h" 
 
int Hero::GetHP()const{
   return this->Hp;
}
std::string Hero::GetName()const{
   return this->Name;
}
int Hero::GetMove()const{
   return this->Move;
}


void Hero::SetName(std::string name){
   this->Name=name;
}
void Hero::SetHP(int hp){
   this->Hp=hp;
}
void Hero::SetRange(int range){
   this->Range=range;
}


void Hero::TakeDamge(int damage){
   this->Hp-=damage;
   if(Hp<0)
      this->Hp=0;
}
void Hero::Heal(int heal){
   this->Hp+=heal;
   if(this->Hp>this->MaxHp)
      this->Hp=this->MaxHp;
}


bool Hero::IsAlive()const{
   return this-> Hp > 0;
}
