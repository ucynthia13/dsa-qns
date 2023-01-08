 #include<iostream>
 #include <stdio.h>      
 #include <time.h>   
 using namespace std;
 int main() {
     time_t timetoday;
     time(&timetoday);
     
     cout << "Today's date and time : " << asctime(localtime(&timetoday));
     return 0;
 }
