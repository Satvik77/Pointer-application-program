#include<iostream>
using namespace std;

class car
{
private:
   int weight;
public:
   void SetWeight(int w)
   {
       weight = w ;
   } 
   int GetWeight()
   {
       return weight;
   }           
};
class BMW
{
private:
   int topSpeed ;
   car *ptr ;
public:
   BMW(int wght = 0, int tspeed = 0)
   {
       ptr = new car;
       ptr -> SetWeight(wght);
       topSpeed = tspeed;
   }
   int getWeight()
   {
       return ptr->GetWeight();
   }
   int getTSpeed()
   {
       return topSpeed;
   }
   ~BMW()
   {
       delete ptr;
   }      
};
int main()
{
    BMW b(3000,350);

    cout << "Weight of car is : " << b.getWeight() << endl;
    cout << "topspeed of car is : " << b.getTSpeed() << endl;

    return 0;
}