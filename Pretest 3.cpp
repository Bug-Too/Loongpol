#include<iostream>
#include<cmath>
using namespace std;
int adiff(int A,int B){
int Degree1;
int Degree2;
int Degree = 0;

Degree1 = A%360;
Degree2 = B%360;

if (Degree1 < 0)
{
   Degree1 = 360+Degree1;
}

if (Degree2 < 0)
{
   Degree2 = 360+Degree2;
}


if (abs(Degree1 - Degree2)>180)
{
    Degree =abs(Degree1 - Degree2) - 180;
}
else
{
    Degree = abs(Degree1 - Degree2);
}

    return Degree;
 }

 int main(){
    cout << adiff(60,244);
    return 0;
 }








