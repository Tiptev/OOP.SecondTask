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
    Point firstPoint;
    Point secondPoint;
    Point thirdPoint;
    int Aside;
    int Bside;
    int Cside;
};

int distance(Point additPoint,Point auxPoint)//функция нахождения длинны отрезка
{
    int xAdditVeriable;
    int yAdditVeriable;
    xAdditVeriable = auxPoint.x - additPoint.x;
    yAdditVeriable = auxPoint.y - additPoint.y;
    xAdditVeriable = pow(xAdditVeriable,2);
    yAdditVeriable = pow(yAdditVeriable,2);
    return sqrt(xAdditVeriable+yAdditVeriable);
}

int newPoint(triangle ABC, Point additPoint, Point auxPoint)//функция вычисляет длинну сторон треугольника, его площадь и периметр
{
    int perimeter;
    int p;
    int area;
    auxPoint.x = ABC.firstPoint.x;
    auxPoint.y = ABC.firstPoint.y;
    additPoint.x = ABC.secondPoint.x;
    additPoint.y = ABC.secondPoint.y;
        ABC.Aside = distance(auxPoint,additPoint);
    additPoint.x = ABC.thirdPoint.x;
    additPoint.y = ABC.thirdPoint.y;
        ABC.Bside = distance(auxPoint,additPoint);
    auxPoint.x = ABC.secondPoint.x;
    auxPoint.y = ABC.secondPoint.y;
        ABC.Cside = distance(auxPoint,additPoint);
    perimeter = ABC.Aside + ABC.Bside + ABC.Cside;
    p = perimeter / 2;
    area = sqrt(p*(p - ABC.Aside)*(p - ABC.Bside)*(p - ABC.Cside));
    if (area == 0)
    {
        cout<<"Введенные вами точки не образуют треугольникa, или его площадь ничтожно мала"<<endl;
    }else{
            cout<<"Периметр треугольника АВС = "<<perimeter<<endl;
            cout<<"Площадь треугольника АВС = "<<area<<endl;
         }
    return 0;
}

int main()
{
    Point additPoint;//дополнительная точка
    Point auxPoint;//вспомогательная точка
    triangle ABC;//треугольник АВС
    int number;
    int variant;
    cout<<"Введите кординаты точки: "<<endl;
    cin>>auxPoint.x>>auxPoint.y;
    additPoint.x = auxPoint.x;
    additPoint.y = auxPoint.y;
    cout<<"Кординаты точки ("<<auxPoint.x<<";"<<auxPoint.y<<")"<<endl;
    for (;;)
    {
        cout<<"Хотите ли вы изменить кординаты точки? Если да, то введите в консоль - 1"<<endl;
        cin>>variant;
        if (variant == 1)
        {
            cout<<"Введите новые кординаты точки: "<<endl;
            cin>>auxPoint.x>>auxPoint.y;
            cout<<"Кординаты новой точки ("<<auxPoint.x<<";"<<auxPoint.y<<")"<<endl;
            cout<<"Расстояние между точками: "<< distance(auxPoint,additPoint)<<endl;
            additPoint.x = auxPoint.x;
            additPoint.y = auxPoint.y;
        }else
        {
            break;
        }
    }
    variant = 0;
    cout<<"Введите три кординаты треугольника AВС "<<endl;
    cout<<"Введите кординаты точки A : "<<endl;
    cin>>ABC.firstPoint.x>>ABC.firstPoint.y;
    cout<<"Введите кординаты точки B: "<<endl;
    cin>>ABC.secondPoint.x>>ABC.secondPoint.y;
    cout<<"Введите кординаты точки C: "<<endl;
    cin>>ABC.thirdPoint.x>>ABC.thirdPoint.y;
    cout<<newPoint(ABC,additPoint,auxPoint);
    for (;;)
    {
        cout<<"Если вы хотите поменять одну из точек треугольника - нажмите 1"<<endl;
        cin>>variant;
        if (variant == 1)//хочет поменять
        {
            cout<<"Введите номер точки: "<<endl;
            cin >> number;
            if (number == 1) //вариант 1
            {
                cout<<"Введите новые кординаты точки A : "<<endl;
                cin>>ABC.firstPoint.x>>ABC.firstPoint.y;
                cout<<newPoint(ABC,additPoint,auxPoint);
            }else
                {
                    if(number == 2)//вариант 2
                    {
                        cout<<"Введите кординаты точки B: "<<endl;
                        cin>>ABC.secondPoint.x>>ABC.secondPoint.y;
                        cout<<newPoint(ABC,additPoint,auxPoint);
                    }else//вариант 3
                    {
                        cout<<"Введите кординаты точки C: "<<endl;
                        cin>>ABC.thirdPoint.x>>ABC.thirdPoint.y;
                        cout<<newPoint(ABC,additPoint,auxPoint);
                    }
                }
        }else
            {
                break;
            }
    }
    return 0;
}
