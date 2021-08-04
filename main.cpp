#include <iostream>
 using namespace std;

int main () {

int hieght{};
int width{};
int length{};

double  base_cost{2.70};

double const tier1_surcharge{0.10};
double const tier2_surcharge{0.25};

int const package_volume_one{100};
int const package_volume_two{500};
int  package_volume{};



cout << "Enter your package dimensions:";

cin >> hieght >> width >> length;

if(hieght >= 10 ||  width >= 10 || length >= 10){
  cout <<"Sorry out of dimension" << "we can't ship it";
} else {
  package_volume = hieght * width * length;
  double package_cost{};
  package_cost = base_cost;


  if (package_volume == package_volume_one){
    package_cost += package_cost*tier1_surcharge;
    cout << "\nadding tier1 surcharge";

  } else if (package_volume > package_volume_two){
    package_cost += package_cost*tier2_surcharge;
    cout << "\nadding tier2 surcharge";
  }


cout << "\nyour package volume:" << package_volume;
cout << "\n your package cost $" << package_cost;



}
 





  return 0;
}