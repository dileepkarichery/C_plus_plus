#include <iostream>
using namespace std;

class Enemy{
   protected:
      int attackPower;
   public:
      void setAttackPower(int a){
           attackPower = a;

      }
};

class Ninja:public Enemy
{
    public:
        void attack(){
        cout<<"Ninja chops with power -"<<attackPower<<endl;
        }
};

class Monster:public Enemy{
    public:
    void attack(){
        cout<<"Monster chops with attack power -"<<attackPower<<endl;
    }
   
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(10);

    n.attack();
    m.attack();

    return 0;


}