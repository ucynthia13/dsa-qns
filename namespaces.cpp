 #include <iostream>

using namespace std;

int myGlobal = 12;
int cout1(){
	int myGlobalSquare = myGlobal * myGlobal;
	cout << "The output of global cout() is: " <<myGlobalSquare <<endl;
};


namespace userDefined{

int insideNamespace = 10;

int cout2(){
	cout << "The variable in userDefined namespace is: " << insideNamespace << endl;
	cout << "The output of cout() in userDefined is: " << insideNamespace << endl;
	return 0;
}

}

int main(){
	int coutt = 14;
	cout <<"The local variable cout in main is: "<< coutt << endl;
	userDefined::cout2();
//	cout <<"The output of cout() in userDefined is: "<< userDefined::insideNamespace << endl;
	cout <<"The value of myGlobal is: "<< myGlobal << endl;
	cout1();
	
	return 0;
};



//<<"The local variable cout in main is"<<
//
//<<"The variable in userDefined namespace is"<<
//
//<<"The output of cout() in userDefined is"<<
//
//<<"The value of myGlobal is"<<
//
//<<" The output of global cout() is"<<
