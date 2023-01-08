#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	char letter;
	int i;
	int userChoice, chancesCount = 0;
	string strFound = "";
	
	string animals[] = {"elephant", "hyena", "lion", "zebra", "crocodile"};
	string teams[] = {"barcelona", "real madrid", "dortmund", "manchester", "bayern"};
	string districts[] = {"kamonyi", "nyabihu", "nyarugenge", "muhanga", "huye"};
	string films[] = {"nancydrew", "anabelle", "dayshift", "halloween", "edge"};
	string books[] = {"akata", "reminders", "bruises", "somebody	", "haunted"};
	
	srand ( time(NULL));
	
	string randomAnimal = animals[rand() % 5];
	string randomTeam = teams[rand() % 5];
	string randomFilm = films[rand() % 5];
	string randomDistrict = districts[rand() % 5];
	string randomBook = books[rand() % 5];
	

	//display categories available
	cout << "Categories: \n1. Animals names \n2.Teams \n3.Districts \n4.Films \n5.Books" << endl;
	
	//prompt the user to choose a category
	cout << "\nCategory: ";
	cin >> userChoice;
	
	start:cout << "\nGuess: ";
	cin >> letter;
	
	//check for the selected category
	
	if(userChoice == 1){

	//randomm word
	bool isFound = randomAnimal.find(letter);
	
	if(isFound != string::npos){
		
		//loop for the matching letters
		for(i=0; i< randomAnimal.length(); i++){
			
			//check for matching letter
			if(randomAnimal[i] == letter){
				
				//display matching letters
				cout << randomAnimal[i];
				
				//else display _
			}else{
				cout << "_";
			}
		}
		goto increment;
	}
	
}else if(userChoice == 2){

	//randomm word
	bool isFound = randomTeam.find(letter);
	
	if(isFound != string::npos){
		
		//loop for the matching letters
		for(i=0; i< randomTeam.length(); i++){
			
			//check for matching letter
			if(randomTeam[i] == letter){
				
				//display matching letters
				cout << randomTeam[i];
				
				//else display _
			}else{
				cout << "_";
			}
		}
		goto increment;
	}
}else if(userChoice == 3){

	//randomm word
	bool isFound = randomDistrict.find(letter);
	
	if(isFound != string::npos){
		
		//loop for the matching letters
		for(i=0; i< randomDistrict.length(); i++){
			
			//check for matching letter
			if(randomDistrict[i] == letter){
				
				//display matching letters
				cout << randomDistrict[i];
				
				//else display _
			}else{
				cout << "_";
			}
		}
		goto increment;
	}
}else if(userChoice == 4){

	//randomm word
	bool isFound = randomFilm.find(letter);
	
	if(isFound != string::npos){
		
		//loop for the matching letters
		for(i=0; i< randomFilm.length(); i++){
			
			//check for matching letter
			if(randomFilm[i] == letter){
				
				//display matching letters
				cout << randomFilm[i];
				
				//else display _
			}else{
				cout << "_";
			}
		}
		goto increment;
	}
} else if (userChoice == 5){

	//randomm word
	bool isFound = randomBook.find(letter);
	
	if(isFound != string::npos){
		
		//loop for the matching letters
		for(i=0; i< randomBook.length(); i++){
			
			//check for matching letter
			if(randomBook[i] == letter){
				
				//display matching letters
				cout << randomBook[i];
				
				//else display _
			}else{
				cout << "_";
			}
		}
		goto increment;
	}
}else {
	cout << "Enter a valid choice " << endl;
	goto start;
}
	increment:chancesCount++;
	if(chancesCount <= 2){
		goto start;
	}else {
		cout << "\nOut of chances!\nYou failed!";
	}
	return 0;
}


//What is string :: NPOS mean?
// As a return value, it is usually used to indicate no matches.
