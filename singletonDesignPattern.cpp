//Singleton Design Pattern - only one instance 
//Private constuctor

#include<iostream>
using namespace std;

class Rectangle
{
   static Rectangle* instance;
   int width;
   int breadth;
   int height;
   Rectangle():width(12),breadth(10),height(15){cout<<"Rectangle constructor is called:"<<endl;}

   public:
   static Rectangle* getInstance()
   {
     if(instance == NULL)
     {
        instance = new Rectangle;
     }
     return instance;
   }
   void setWidth(int width){ this->width = width;}
   int getWidth(){return width;}
   void setBreadth(int breadth){this->breadth = breadth;}
   int getBreadth(){return breadth;}
   void setHeight(int height) { this->height = height;}
   int getHeight(){return height;}

   void displayParameters()
   {
    cout<<"Width :"<<width<<endl;
    cout<<"Breadth:"<<breadth<<endl;
    cout<<"Height :"<<height<<endl;
   }

};
Rectangle* Rectangle::instance = NULL;

void showParameters()
{
    Rectangle *rect1 = Rectangle::getInstance();
    rect1->displayParameters();
    cout<<rect1<<endl;
}

   
int main()
{
   Rectangle *rect = Rectangle::getInstance();
   rect->displayParameters();
   cout<<"----------------"<<endl;
   rect->setWidth(20);
   rect->getWidth();
   rect->setBreadth(10);
   rect->getBreadth();
   rect->setHeight(25);
   rect->getHeight();
   rect->displayParameters();
   cout<<rect<<endl;

   cout<<"-------------------"<<endl;
   showParameters();

}
