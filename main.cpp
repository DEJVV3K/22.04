#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int a =1;
string line;
int main()
{
        ifstream wej;
        ofstream wyj;
        	wej.open("wej.txt");
        	wyj.open("wyj.json");
        if (wej.good()) {
        	wyj<<"[  \n  ";
            while (!wej.eof()) 
				{
            		getline(wej, line);
						wyj << "\n { \n \"imie\" : \" " << line<<"\"";
					
					getline(wej, line);
						wyj << "  \n\"nazwisko\" : \" " << line<<"\"";
					
					getline(wej, line);
						wyj << "  \n\"id\" : \" " << line << "\"\n},";
				}
            wyj<<"\n]";
        }
       
        wej.close();
        wyj.close();
    	system("PAUSE");
        return 0;

}
