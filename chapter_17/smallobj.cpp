// демонстрирует простой небольшой объект
#include <iostream>
using namespace std;

class smallobj
{
    private:
        int somedata;
    public:
    void setdata(int d) // изменение значение поля
        { somedata = d; }
    void showdata()
        { cout << "Значение поля равно " << somedata << endl;}

};

int main()
{
    smallobj s1, s2; // объекты класса
    s1.setdata(1066);
    s2.setdata(1776);
    s1.showdata();
    s2.showdata();
    return 0;
}