#include <iostream>
using namespace std;
class Father
{
private:
    int money = 1000;

protected:
    int gold = 500;

public:
    int land = 300;
};
class Son : public Father
{
public:
    void getAccessSon()
    {
        cout << gold << endl;
        cout << money << endl;
        cout << land << endl;
    }
};
class Grandson:public Son{
    public:
    void getAccessGS()
    {
        cout << gold << endl;
        cout << money << endl;
        cout << land << endl;
    }
};
int main()
{
    Son s1;
    s1.getAccessSon();
    Grandson gs1;
    gs1.getAccessGS();
    return 0;
}