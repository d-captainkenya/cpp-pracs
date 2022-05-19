
/*#include <iostream>             //Hello world
using namespace std;

int main() {
  cout << "Hello World! \n";      
  cout << "Hey again" << endl;
  return 0;
}*/



/*#include <iostream>             //several datatypes
using namespace std;
int main() {

  int age = 27;
  double token = 57.45;
  char letter = 'A';
  string hello = "Hey man";
  bool istrue = true;

  cout << age << endl << token << endl << letter << endl << hello << istrue << endl;
  cout << "Lil bruh is " << age << " years\n";

  int x = 1000;
  int y = 457;
  int sum = x+y;
  cout << sum << endl;

  return 0;
}*/



/*#include <iostream>             //Multiple variables
using namespace std;
int main() {
  //int x=10, y=5, z=2;
  int x,y,z;
  x=y=z=50;
  cout << x+y+z << endl;
  return 0;
}*/



/*#include <iostream>               //constants
using namespace std;
int main() {
  const int length = 25;
  //length = 50;
  cout << length << '\n';
  return 0;
}*/



/*#include <iostream>                 //input
using namespace std;
int main() {
  int x;
  cout << "Enter number: ";
  cin >> x;
  cout << "Your number was " << x << endl;
  return 0;
}*/



/*#include <iostream>
using namespace std;
int main() {
  int x, y, sum;
  cout << "Enter x: "; cin >> x;
  cout << "Enter y: "; cin >> y;
  sum = x+y;
  cout << "Sum of x and y: " << sum << endl;
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  int x, y, sum;
  cout << "Enter x and y(separate by space): "; cin >> x; cin >> y;
  sum = x+y;
  cout << "Sum of x and y: " << sum << endl;
  return 0;
}*/



/*#include <iostream>                     //Strings
#include <string>
using namespace std;
int main() {
  string fn="Kong ";
  string ln= "king";
  //cout << "Welcome " << fn +" "+ln << endl;
  //cout << fn.append(ln) << endl;
  cout << "Length of the string is: " << fn.length() << endl;

  //string newstrg = "Changeme";
  //newstrg[6] = 'M';
  //cout << newstrg << endl;

  string fullname;
  cout << "Enter full name: ";
  getline(cin, fullname);
  cout << "Fullname: " << fullname << endl;
  return 0;
}*/



#include <iostream>                 //maths library
#include <cmath>
using namespace std;
int main (){
  double x = 13.76, y = 64, z = 5;
  //cout << max(x,y) << endl;
  cout << round(x) << endl;
  cout << sqrt(y) << endl;
  cout << log(z) << endl;
  cout << (x > y) << endl;      //boolean
  return 0;
}


