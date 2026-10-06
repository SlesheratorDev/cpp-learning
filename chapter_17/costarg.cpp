// демонстрирует константные аргументы функций
#include <iostream>
using namespace std;
void aFunc (int& a, const int& b);
int main()
{
    int alpha = 7;
    #// int beta = 11;
    aFunc(alpha);
    return 0;
}

void aFunc(int& a, const int& b)
{
    a = 107;
    // b = 111; ошибка менять нельзя конст. арг.

}