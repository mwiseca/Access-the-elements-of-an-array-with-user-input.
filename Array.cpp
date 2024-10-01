//Copyright 2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20     


#include <iostream>
#include <string>


int main(){
           std::string x [5] = {"walk","bike","ebike","bus","car"};
           std::string y;

 while(true){
 std::cout << "Enter,a,b,c,d,e to get a mode of transport x to exit.\n";
 getline(std::cin,y);

 if(y == "a"){
     y = x[0];}
 else if(y == "b"){
     y = x[1];}
 else if(y == "c"){
     y = x[2];}
 else if(y == "d"){
     y = x[3];}
 else if(y == "e"){
     y = x[4];}
 else if(y == "x"){
     break;}
 else{
     std::cout << "Enter a,b,c,d,e only.\n";
     continue;}
 std::cout << "You picked " << y << ".\n";
     }
return 0;
}

