
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



/*#include <iostream>                 //maths library
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
}*/





/*#include <iostream>                    //conditions
using namespace std;
int main() {
  int x = 2;
  int y = 52;
  if (x > y) {
    cout << "x is mkuu" << "\n";
    }
  else if (y > x) {
    cout << "y is mkuu" << "\n";
  }
  else {
    cout << x << " equals " << y << endl;
  }
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main() {
  int temp = 15;                //ternary(shorthand if)
  string result;
  result = (temp < 25) ? "Light clothes." : "Jacket needed.";
  cout << result << "\n";
  return 0;
}*/



/*#include <iostream>                   //switch
using namespace std;
int main() {
  int day = 8;
  if (1 <= day && day <=7) {
    switch (day) {
      case 1:
        cout << "Monday" << "\n";
        break;
      case 2:
        cout << "Tuesday" << "\n";
        break;
      case 3:
        cout << "Wednesday" << "\n";
        break;
      case 4:
        cout << "Thursday" << "\n";
        break;
      case 5:
        cout << "Friday" << "\n";
        break;
      default:
        cout << "It's a weekend" << "\n";
    }
  }
  else {
    cout << "Days are 7, Nerd!" << "\n";
  }
  return 0;
}*/



/*#include <iostream>                    //while loop
using namespace std;

int main() {
    int i = 0;
    while (i <= 5) {
      cout << i << "\n";
      i++;
    }
    return 0;
}*/
/*#include <iostream>   //do while
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << endl;
    i++;
  }
  while (i<=5);
  return 0;
}*/



/*#include <iostream>                 //for loop
using namespace std;
int main() {
  for (int x=0; x<5; x++) {
    cout << x << endl;
  }
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  for (int x=0; x<=5; x++) {
    cout << x  << endl;
  }
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  for (int x=0; x<=10; x+=2) {
    cout << x  << endl;
  }
  return 0;
}*/
/*#include <iostream>       //break :breaks out of loop at 4
using namespace std;
int main() {
  for (int i=0; i<10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << endl;
  }
  return 0;
}*/
/*#include <iostream>        //continue: breaks one iteration from loop
using namespace std;
int main() {
  for (int i=0; i<10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << endl;
  }
  return 0;
}*/



#include <iostream>                   //arrays
using namespace std;

int main() {
  string bikes[3] = {"Kawasaki", "Yamaha", "BMW"};
  int mynums[5] = {5, 7, 10, 15, 40};
  mynums[4] = 57;
  cout << mynums[4] << " " << bikes[0] << "\n";

  cout << "My array: ";
  for (int i=0; i<5; i++) {
    cout << mynums[i] << " ";
  }
  cout << endl;

  cout << "My array(again): ";
  for (int element: mynums) {
    cout << element << " ";
  }
  cout << endl;
  
  return 0;
}









