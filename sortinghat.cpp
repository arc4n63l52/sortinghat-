// sortinghat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Harry Potter themed interactive game

#include <iostream>

	int main() {
		//setting of houses 
		int gryffindor = 0;
		int hufflepuff = 0;
		int ravenclaw = 0;
		int slytherin = 0;
		//stores user answers 
		int answer1, answer2, answer3, answer4;
		//starting of quiz
		std::cout << "=====================\n";
		std::cout << "The Sorting Hat Quiz!\n";
		std::cout << "=====================\n\n";
		// q&a section house selection is based on max score
		std::cout << " Q1) When I'm dead, I want people to remember me as:\n\n";
		std::cout << " 1) The Good\n";
		std::cout << " 2) The Great\n";
		std::cout << " 3) The Wise\n";
		std::cout << " 4) The Bold\n";

		std::cout << " Enter your answer (1-4):";
		std::cin >> answer1;

		// sorts answers into catagories to select house 
		if (answer1 == 1)
			hufflepuff++;
		else if (answer1 == 2)
			slytherin++;
		else if (answer1 == 3)
			ravenclaw++;
		else if (answer1 == 4)
			gryffindor++;
		else {
			std::cout << "Invalid input\n\n";

		}
		// Question #2
		std::cout << " Q2) Dawn or Dusk?\n";

		std::cout << " 1) Dawn\n";
		std::cout << " 2) Dusk\n";
		std::cout << "Enter your answer 1 or 2:";
		std::cin >> answer2;

		if (answer2 == 1) {
			gryffindor++;
			ravenclaw++;
		}
		else if (answer2 == 2) {
			hufflepuff++;
			slytherin++;
		}
		else {
			std::cout << "Invalid input\n";
		}
		//Question #3
		std::cout << " Q3) Which kind of instrument most pleases your ear?\n\n";
		std::cout << " 1) The violin\n";
		std::cout << " 2) The trumpet\n";
		std::cout << " 3) The piano\n";
		std::cout << " 4) The drum\n";
		std::cout << "Enter your answer (1-4):";
		std::cin >> answer3;
		if (answer3 == 1)
			slytherin++;
		else if (answer3 == 2)
			hufflepuff++;
		else if (answer3 == 3)
			ravenclaw++;
		else if (answer3 == 4)
			gryffindor++;
		else {
			std::cout << "Invalid input\n\n";
		}
		// Question #4 
		std::cout << " Q4) Which road tempts you most?\n\n";
		std::cout << " 1) The wide, sunny grassy lane\n";
		std::cout << " 2) The narrow, dark, lantern-lit alley\n";
		std::cout << " 3) The twisting, leaf-strewn path through woods\n";
		std::cout << " 4) The cobbled street lined (ancient buildings)\n";
		std::cout << "Enter your answer (1-4):";
		std::cin >> answer4;
		if (answer4 == 1)
			hufflepuff++;
		else if (answer4 == 2)
			slytherin++;
		else if (answer4 == 3)
			gryffindor++;
		else if (answer4 == 4)
			ravenclaw++;
		else {
			std::cout << " Invalid input\n\n";
		}
		//totaling the score and out of house selection 
		std::cout << "The sorting hat has decided! You are house ....\n\n";

		int max = 0;
		std::string house;
		if (gryffindor > max) {
			max = gryffindor;
			house = "Gryffindor";
		}
		if (hufflepuff > max) {
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
		std::cout << house << "!\n";
		return 0;
	}





