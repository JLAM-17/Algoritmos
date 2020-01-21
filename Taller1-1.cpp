#include <iostream>
#include <vector>

using namespace std;
int main(){
vector<int> vint;
vint.push_back(-10);
vint.push_back(-20);
vint.push_back(-30);
vint.push_back(-40);
vint.erase(vint.begin()+2);
vint.insert(vint.begin()+1,20);
vint.pop_back();
vint.push_back(40);

cout << "El tamaño del vector es: " << vint.size()<< '\n';
if (vint.empty()){
  std::cout << "El vector está vacío" << '\n';
}
else {
  std::cout << "El vector no está vacío" << '\n';
}
std::cout << "El elemento en la posición 2 es: " << vint[1] << '\n';
std::cout << "El primer elemento es: " << vint.front() << '\n';
std::cout << "El último elemento es: " << vint.back() << '\n';

return 0;
}
