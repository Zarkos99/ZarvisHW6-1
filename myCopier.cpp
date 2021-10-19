/** A program that opens a text file, reads it, then writes the contents to another text file, then closes it.
 * *   The text file to read's name is passed on the command line as the first argument. The text
 * file to write to is passed on the command line as argument two.
Example usage:
	./myCopier filetoread.txt filetowrite.txt
*/


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"


int main(int argc, char* argv[]){
	  if(argc!=3){
	  cout << endl;
	  cout << endl;
	  cout << "Usage is copying first file to second. First name is text file to be read, second name is file to be written to." << endl;
	  cout << " e.g. myCopiercpp movies.txt movies-copy.txt" << endl;
	  return 2;
	  }
	  string cmdread(argv[1]);
	  string cmdwrite(argv[2]);
          cout << endl;
	  cout << "Starting the myCopier program" << endl;
	  cout << "The current FILE Path is: " << FILE_PATH << endl;
          cout << "File to read name passed is: " << cmdread << endl;          
          cout << "File to write name passed is: " << cmdwrite << endl;
	  cout << endl;

          fstream fs, ws;
          string line;

	  string filename = "/"+ cmdread;
          cout << "The string filename to read is: " << filename << endl;

          string pathName = FILE_PATH + filename;
          cout << "The string pathName to read is: " << pathName << endl;
          cout << endl;
	 
	  string path(FILE_PATH);
  	  ws.open((path+"/"+cmdwrite).c_str(), std::fstream::out);
	  
	  // The c_str() method returns a C++ string as a C string.
	  fs.open((pathName).c_str(), fstream::in);

          //fs.open((FILE_PATH + filename).c_str(), std::fstream::in);
          while(getline(fs,line)) ws << line << endl;
          
	  fs.close();
	  ws.close();
	  
	  cout << "Finished the myCopier program" << endl;
	  cout << endl;
	  cout << endl;
	  return 0;
}

