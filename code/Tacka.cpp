#include "Tacka.h"

double Tacka::udaljenost(Tacka& t2) const
{
    return sqrt(pow((this->x - t2.x), 2) + pow((this->y - t2.y), 2));
}

bool operator==(Tacka& t1, Tacka& t2)
{
    return t1.x == t2.x && t1.y == t2.y;
}

ostream& operator<<(ostream& it, const Tacka& t)
{
    return it << "(" << t.x << "," << t.y << ")";
}
