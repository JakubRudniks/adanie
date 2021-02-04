#include <iostream>
#include <fstream>

using namespace std;

const int size = 1000;
void zad(){

  int tab1[size];
  int tab2[size];
  
  ifstream in1("liczba1.txt");
  ifstream in2("liczba2.txt");
  
  		for (int i=0; i <size; i++) in1 >> oct >> tab1[i];
  		for (int i=0; i <size; i++) in2 >> tab2[i];
  
  in1.close();
  in2.close();
  
  int PodpunktA = 0;
  int PodpunktB = 0;
  		for (int i = 0; i <size; i++)
		  	
	{
    		if (tab1[i] == tab2[i]) PodpunktA++;
    		if (tab1[i] > tab2[i]) PodpunktB++;
  	}
  	
  cout << "a) " <<  PodpunktA << endl << "b) " << PodpunktB << endl;
  
}

int main() {
	
 zad();
 
}



