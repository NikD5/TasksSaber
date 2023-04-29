#include <iostream>
//Дмитрийчук Никита Владимирович 30.04.2023 примерно 5-10 минут
using namespace std;
void binary(long a)
{
    for (int i = sizeof(a) * 8 - 1; i >= 0; --i)
    {
        cout << (int)((a >> i) & 1);
    }
    cout << endl;
}

int main()
{
    binary(2);
    binary(4);
    binary(-2);
    binary(-3);
    return 0;
}