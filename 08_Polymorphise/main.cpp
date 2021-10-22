#include <iostream>
#include "trjectoire.h"
#include "segment.h"
#include "element.h"

using namespace std;

int main()
{
    Trajectoire uneTrajectoire(1);
    uneTrajectoire.Afficher();
    Segment segment1(9,0,1,6);
    segment1.Afficher();
    Segment segment2(5,0.27295,2,0);
    segment2.Afficher();

    return 0;
}
