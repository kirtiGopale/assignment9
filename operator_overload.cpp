#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:

    Rectangle(float l = 0, float w = 0)
    {
        length = l;
        width = w;
    }

    float area() const
    {
        return length * width;
    }

    bool operator==(Rectangle r)
    {
        return (length == r.length && width == r.width);
    }

    bool operator!=(Rectangle r)
    {
        return !(*this == r);
    }

    bool operator>(Rectangle r)
    {
        return area() > r.area();
    }

    bool operator<(Rectangle r)
    {
        return area() < r.area();
    }

    bool operator>=(Rectangle r)
    {
        return area() >= r.area();
    }

    bool operator<=(Rectangle r)
    {
        return area() <= r.area();
    }
};

int main()
{
    float l1, w1, l2, w2;

    cout << "Enter length and width of Rectangle 1: ";
    cin >> l1 >> w1;

    cout << "Enter length and width of Rectangle 2: ";
    cin >> l2 >> w2;

    Rectangle r1(l1, w1);
    Rectangle r2(l2, w2);

    cout << "\n==  : " << (r1 == r2) << endl;
    cout << "!=  : " << (r1 != r2) << endl;
    cout << ">   : " << (r1 > r2) << endl;
    cout << "<  : " << (r1 < r2) << endl;
    cout << ">= : " << (r1 >= r2) << endl;
    cout << "<= : " << (r1 <= r2) << endl;

    return 0;
}