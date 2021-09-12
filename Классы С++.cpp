
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point//класс одной точки
{
    public:
    string name;
    int x;
    int y;
};

class triangle//класс треугольника
{
    public:
    string nameTriangle;
    Point firstTrianglePoint;
    Point secondTrianglePoint;
    Point thirdTrianglePoint;
    int Aside;
    int Bside;
    int Cside;
};

int distance(Point firstPoint,Point additPoint)//функция нахождения длинны отрезка
{
    int xAdditVeriable;
    int yAdditVeriable;
    xAdditVeriable = firstPoint.x - additPoint.x;
    yAdditVeriable = firstPoint.y - additPoint.y;
    xAdditVeriable = pow(xAdditVeriable,2);
    yAdditVeriable = pow(yAdditVeriable,2);
    return sqrt(xAdditVeriable+yAdditVeriable);
}

int main()
{
    Point firstPoint;
    Point additPoint;//дополнительная точка
    Point auxPoint;//вспомогательная точка
    triangle ABC;
    cout<<"Введите кординаты точки: "<<endl;
    cin>>firstPoint.x>>firstPoint.y;
    additPoint.x = firstPoint.x;
    additPoint.y = firstPoint.y;
    cout<<"Введите новые кординаты точки: "<<endl;
    cin>>firstPoint.x>>firstPoint.y;
    cout<<"Расстояние между точками: "<<distance(firstPoint,additPoint);
    cout<<"Введите кординаты точки: "<<endl;
    cin>>ABC.firstTrianglePoint.x>>ABC.firstTrianglePoint.y;
    cout<<"Введите кординаты точки: "<<endl;
    cin>>ABC.secondTrianglePoint.x>>ABC.secondTrianglePoint.y;
    cout<<"Введите кординаты точки: "<<endl;
    cin>>ABC.thirdTrianglePoint.x>>ABC.thirdTrianglePoint.y;
    ABC.Aside = distance(auxPoint,additPoint);
    ABC.Bside = distance(auxPoint,additPoint);
    
    
    

    return 0;
}
