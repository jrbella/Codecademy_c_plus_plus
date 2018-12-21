//Tools
//Visual Studio Code
//Codeacademy (Pro edition)   //Python, PowerShell, C++, C#


#include <iostream>

int main(){
  
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  //quiz answers
  int answer1;
  int answer2;
  int answer3; 
  int answer4;
  int max;
  
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "  \n";
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
	std::cout << "  \n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  std::cin >> answer1;
  
  //answer 1
  switch(answer1){
    case 1: 
      hufflepuff += 1;
      //Test case 1
      //std::cout << "Hufflepuff score is: " << hufflepuff << "\n";
      break;
      
    case 2: 
      slytherin += 1;
      break;
      
    case 3:
      ravenclaw += 1;
      break;
      
    case 4: ;
      gryffindor += 1;
      break;
      
    default: std::cout << "Your answer is invalid";
      break; 
  }
  
  //answer 2
  std::cout << "  \n";
  std::cout << "Q2) Dawn or Dusk?\n";
	std::cout << "  \n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  std::cin >> answer2;
  
    switch(answer2){
    case 1: 
      ravenclaw += 1;
      gryffindor += 1;
      //Test case 1
      //std::cout << "Ravenclaw score is: " << ravenclaw << "\n";
      //std::cout << "gryffindor score is: " << gryffindor << "\n";
      break;
      
    case 2: 
      slytherin += 1;
      hufflepuff += 1;
      break;

    default: std::cout << "Your answer is invalid";
      break; 
  }
  
  //answer3
  std::cout << "  \n";
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
	std::cout << "  \n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";
  std::cin >> answer3;
  
    switch(answer3){
    case 1: 
      slytherin += 1;    
      //Test case 1
      //std::cout << "slytherin score is: " << slytherin << "\n";
      break;
    case 2: 
      hufflepuff += 1;
      break;
    case 3: 
      ravenclaw += 1;
      break;
    case 4: 
      gryffindor += 1;
      break;       
    default: std::cout << "Your answer is invalid \n";
      break; 
  }
  
  //answer4
  std::cout << "  \n";
  std::cout << "Q4) Which road tempts you most?\n";
	std::cout << "  \n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;
  
    switch(answer4){
    case 1: 
      hufflepuff += 1;  
      //Test case 1
      //std::cout << "hufflepuff score is: " << hufflepuff << "\n";
      break;
    case 2: 
      slytherin += 1;
      break;
    case 3: 
      gryffindor += 1;  
      break;
    case 4: 
      ravenclaw += 1;
      break;       
    default: std::cout << "Your answer is invalid";
      break; 
  }
  
    std::string house;
  
   if (gryffindor > max) {
		//Test 1 expect max = 0
    //std::cout << "Max is currently = " << max << "\n";
    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max) {
    //Test 2 we expect max = gryffindor
		//std::cout << "Max is currently = " << max << "\n";
    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";
  }
  
  std::cout << "Congratulations! Your house is " << house << "\n";
  
}