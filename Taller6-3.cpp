#include <iostream>
#include <cctype>
using namespace std;

bool palindromo(string p){
  if (p.size() < 2)
  return true;
  else{
    if (tolower(p.front()) == tolower(p.back())){
      p.erase(p.begin());
      p.pop_back();
      return palindromo(p);
    }
    else
      return false;
  }
}

int main() {
  string a = "Asa";
  std::cout << palindromo(a) << '\n';
  return 0;
}
