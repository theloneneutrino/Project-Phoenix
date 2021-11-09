#include <iostream>
#include <fstream>
#include <string>
#include "player.h"
using namespace std;

ifstream imageFile;

void printTitle();

int main() {
  Player player1;
  printTitle();
  
  cout << "Welcome stranger..." << endl;
  
  
  return 0;
} 

void printTitle(){
  string tp;
  unsigned int i;

  imageFile.open("imageFile");

  while(imageFile){
    getline(imageFile, tp);
    cout << tp << endl;
  }

  
}

void printText(string text){
  
}