#include <iostream>
#include <vector>
using namespace std;

void two_smallest(vector<string>& arr){
  string min1,min2;
  if (arr.empty()){
    std::cout << "El vector está vacío." << '\n';
  }
  else if(arr.size() == 1){
    std::cout << "El valor más pequeño es :" << arr[0] << '\n';
  }
  else if(arr.size() == 2){
    if (arr[0] < arr[1]){
      min1 = arr[0];
      min2 = arr[1];
    }
    else{
      min1 = arr[1];
      min2 = arr[0];
    }
    std::cout << "Los valores más pequeños son " << min1 << "," << min2 << '\n';
  }
  else{
    min1 = arr[0];
    if (arr[1] < min1){
      min1 = arr [1];
      min2 = arr [0];
    }
    else{
      min2 = arr[1];
    }
    for (unsigned int i = 2; i < arr.size(); i++){
      if (arr[i] < min1){
        min2 = min1;
        min1 = arr[i];

      }
      else if (arr[i] < min2){
        min2 = arr[i];
      }
    }
    std::cout << "Los valores más pequeños son " << min1 << "," << min2 << '\n';
  }
}

int main() {
  std::vector<string> v;
  v.push_back("Hola");
  v.push_back("wtf");
  v.push_back("vamos probando");
  v.push_back("y uno");
  v.push_back("que se supone");
  v.push_back("que debe decir");
  two_smallest(v);

  return 0;
}
