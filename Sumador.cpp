#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

double Sumador (string filename);


int main()
{    
  string archx;
  string archy;
  double x;
  double y; 
  archx = "valores_x.txt";
  archy = "valores_y.txt";
  x = Sumador(archx);
  y = Sumador(archy);
  cout << "La sumatoria de todos los valores del archivo " << archx << " nos da: " << x << endl;
  cout << "La sumatoria de todos los valores del archivo " << archy << " nos da: " << y << endl;
    
  return 0;
}


double Sumador (string filename)
{
  double con;  
  ifstream infile;
  string line;
  infile.open(filename);   
  
  con = 0.0; 
  getline(infile, line);
  while(infile){
      con += atof(line.c_str());
      getline(infile, line);
  }

  infile.close();
  return con;
}