#include <iostream>

using namespace std;

int main(){
  char temukan = '3';
  char huruf[4] = {'L', 'P', '3', 'I'};
  for (int a = 0; a <= 3; a++){
    if(temukan == huruf[a]){
      cout << "3 adalah index ke " << a << endl;
    }
  }
  return 0;
}