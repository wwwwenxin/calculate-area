//
//  main.cpp
//  s
//
//  Created by wx on 15/11/25.
//  Copyright © 2015年 wx. All rights reserved.
//

#include <iostream>
using namespace std;
#define PI 3.1415926
class Circle
{
public:
    Circle()
    {};
    Circle(double r)
    {
        Radius=r;
    }
    double GetArea()
    {
        return PI*Radius*Radius;
    }
private:
    double Radius;
};

int main()
{
    Circle c(2);
    cout<<"这个圆的面积是："<<c.GetArea()<<endl;
    return 0;
}