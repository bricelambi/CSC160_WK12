#include <iostream>
 
using namespace std;

// Base class
class Animal {
   public:
      void setSize(int w) {
         size = w;
      }
      void setColor(int h) {
         color = h;
      }
      int getSize() {
        return size;
      }
      int getColor() {
        return color;
      }
      
   private:
      int size;
      int color;
};

// Derived class
class Dog: public Animal {
   public:
      void setTailSize(int s) { 
         tailSize = s; 
      }
      int sizeRatio() {
        int ratio = getSize() / tailSize;
        return ratio;
      }
   protected:
      int tailSize;
};

class Gorilla: public Animal {
   public:
      void setHeight(int s) { 
         height = s; 
      }
      
      int getHeight() {
        return height;
      }

   protected:
      int height;
};

int main(void) {
   Dog yorkie;
 
   yorkie.setSize(4);
   yorkie.setColor(1);
   yorkie.setTailSize(2);


  cout << yorkie.sizeRatio() << endl;

  Gorilla g;

  g.setHeight(40);

  g.setColor(1);
  cout << g.getColor() << endl;

  cout << g.getHeight() << endl;
  
   return 0;
}