#include <iostream>
using namespace std;

class Movie{
	private: 
	string rating;
	public:
		string name;
		string director;
		
	Movie(string aName, string aDirector, string aRating){
		name = aName;
		director = aDirector;
		setRating(aRating);//take the rating value
	}
	
	//setter
	void setRating(string aRating){
		if(aRating == "G" || aRating == "PG" || aRating == "pg-13" || aRating == "R" || aRating == "NR"){
		//assign the value to rating 
		rating = aRating;
	}else{
		rating = "NR";
	}
	
}

	//getter
	string getRating(){
		return rating;
	}

};

int main(){
	Movie movie1("abcd", "xyz", "PG-13");
	movie1.setRating("PG");
	cout << movie1.getRating() << endl;
	return 0;
}

