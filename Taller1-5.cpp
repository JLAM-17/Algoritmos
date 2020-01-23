#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> ls;
  ls.push_front(1);
  ls.push_front(2);
  ls.push_front(3);
  ls.push_front(4);
  std::cout << "Tamaño de la lista: " << ls.size()<< '\n';
  if(ls.empty() == true){
    std::cout << "La lista está vacía" << '\n';
  }
  else{
    std::cout << "La lista no está vacía" << '\n';
  }
  std::cout << "Primer elemento de la lista: " << ls.front() << '\n';
  std::cout << "Último elemento de la lista: " << ls.back() << '\n';
  ls.pop_front();
  ls.pop_back();
  ls.push_front(1);
  ls.push_back(4);
  std::cout << "Primer elemento de la lista: " << ls.front() << '\n';
  std::cout << "Último elemento de la lista: " << ls.back() << '\n';
  return 0;


}
