#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

double const pi = 3.14;

double Area_of_circle(double reduis){
    return pi*pow(reduis,2);
}

void area_circle(){
    double reduis{};
    cout << "\nEnter the reduis :";
    cin >> reduis;
    cout << "the area of the circle is :" << Area_of_circle(reduis);
}

double Vol_cylind(double reduis,double hiegth){
    return pi*pow(reduis,2)*hiegth;
}

void volume_cylindre(){
    double reduis{};
    double hiegth{};
    cout <<"\nEnter the reduis :";
    cin >> reduis;
    cout << "enter the hiegth :";
    cin >> hiegth;
    cout << "The volume of the cylinder :" << Vol_cylind (reduis,hiegth);

}






int main(){



area_circle();

volume_cylindre();






    return 0;
}

