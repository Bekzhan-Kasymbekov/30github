#include <iostream>

class Car{
  private:
  int speed;

  public:
  void setSpeed(int s){
    speed = s;
  }
  
  int getSpeed(){
    return speed;
  }

  void increaseSpeed(int increment){
    speed += increment;
  }
};

int main() {
  Car car;
  Car* ptr = &car;

  ptr->setSpeed(50);
  std::cout << "Speed set to: " << ptr->getSpeed() << std::endl;
  ptr->increaseSpeed(20);
  std::cout << "Speed after increase: " << ptr->getSpeed() << std::endl;

  return 0;
}
