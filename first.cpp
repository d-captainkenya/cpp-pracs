
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



/*#include <iostream>                   //arrays
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
}*/



/*#include <iostream>                 //loop array
using namespace std;
int main() {
  string names[3] = {"Bravo", "Papa", "Tango"};
  for (int i=0; i<3; i++) {
    cout << names[i] << endl;
  }
  return 0;
}*/
/*#include <iostream>             //print element index and value/add element
using namespace std;
int main() {
  string builds[10] = {"Anniversary", "I&M", "Pension", "EHouse"};
  builds[4] = "Stima";
  for (int i=0; i<10; i++) {
    cout << "Index " << i << " --> " << builds[i] << endl;
  }
  return 0;
}*/
/*#include <iostream>             //empty array/add elements later
using namespace std;
int main() {
  string laps[5];
  laps[0] = "Dell";
  laps[1] = "HP";
  for (int i=0; i<5; i++) {
    cout << "index: " << i << ": " << laps[i] << endl;
  }
  //cout << laps[0] << endl;      //print specific element
  return 0;
}*/
/*#include <iostream>             //get size of array
using namespace std;
int main() {
  string roads[5] = {"EBypass", "NBypass", "SBypass", "C100", "Namanga"};
  cout << "Array size in bytes: " << sizeof(roads) << endl; //returns size in bytes

  int arraylength = sizeof(roads) / sizeof(string); //string are 32bytes
  cout << "Array size:" << arraylength << endl;
  return 0;
}*/
/*#include <iostream>                //Multidimensional arrays
#include <string>
using namespace std;
int main() {
  //2 dimension array
  int multinums[3][5] = {
    {1, 2, 3, 0, 5},
    {4, 5, 6, 1, 1},
    {7, 8, 9, 1, 0}
  };
  //3 dimension array
  string letters[2][2][2] = {
    {
      {"L", "J"},
      {"D", "M"}
    },
    {
      {"N", "B"},
      {"G", "M"}
    }
  };
  return 0;
}*/
/*#include <iostream>         //access multidimensional array elements
#include <string>
using namespace std;
int main(){
  string letters[2][4] = {
    {"A", "B", "C", "D"},
    {"E", "F", "G", "H"}
  };
  cout << letters[1][3] << "\n";
}*/
/*#include <iostream>         //change multidimensional array elements
#include <string>
using namespace std;
int main() {
  string initials[3][2] = {
    {"JK", "OT"},
    {"MD", "DM"},
    {"OJ", "FJ"}
  };
  initials[1][0] = "TL";
  cout << initials[1][0] << "\n";
  return 0;
}*/
/*#include <iostream>           //Loop Multi-Dimensional array
#include <string>
using namespace std;
int main(){
  string lets[4][3] = {
    {"l", "k", "j"},
    {"h", "g", "f"},
    {"d", "s", "a"},
    {"p", "i", "u"}
  };
  for (int i=0; i<4; i++) {
    for (int j=0; j<1; j++) {
      cout << lets[i][j] << "\n";
    }
  };
  return 0;
}*/
/*#include <iostream>                             //Small game of Battleship
using namespace std;

int main() {
  // We put "1" to indicate there is a ship.
  bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  // Keep track of how many hits the player has and how many turns they have played in these variables
  int hits = 0;
  int numberOfTurns = 0;

  // Allow the player to keep going until they have hit all four ships
  while (hits < 4) {
    int row, column;

    cout << "Selecting coordinates\n";

    // Ask the player for a row
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;

    // Ask the player for a column
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    // Check if a ship exists in those coordinates
    if (ships[row][column]) {
      // If the player hit a ship, remove it by setting the value to zero.
      ships[row][column] = 0;

      // Increase the hit counter
      hits++;

      // Tell the player that they have hit a ship and how many ships are left
      cout << "Hit! " << (4-hits) << " left.\n\n";
    } else {
      // Tell the player that they missed
      cout << "Miss\n\n";
    }

    // Count how many turns the player has taken
    numberOfTurns++;
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns" << "\n";
  
  return 0;
}*/




/*#include <iostream>                           //Structures
#include <string>
using namespace std;
int main() {

  struct {
    string name;
    int noofcounties;
    string capital;
    char countryinitial;
  } countrystructure;

  countrystructure.name = "Kenya";
  countrystructure.noofcounties = 47;
  countrystructure.capital = "Nairobi";
  countrystructure.countryinitial = 'K';

  cout << countrystructure.name << "\n";
  cout << countrystructure.capital << endl;
  return 0;
}*/
/*#include <iostream>             //One Structure in Multiple Variables
#include <string>
#include <iomanip>
using namespace std;
int main() {

  struct {
    string brand;
    string model;
    int year;
  } Bike1, bike2;

  Bike1.brand = "Kawasaki";
  Bike1.model = "Ninja";
  Bike1.year = 2015;

  bike2.brand = "BMW";
  bike2.model = "1000RR";
  bike2.year = 2014;

  cout << "***************Bikes in Stock*****************" << endl;
  cout << Bike1.brand << setw(7) << Bike1.model << setw(7) << Bike1.year << endl;
  cout << bike2.brand << setw(12) << bike2.model << setw(8) << bike2.year << endl;

  return 0;
}*/
/*#include <iostream>                           //Named Structures
#include <string>
#include <iomanip>
using namespace std;
int main() {
  struct car {
    string brand;
    string model;
    int year;
  };

  car fcar;
  fcar.brand = "Toyota";
  fcar.model = "Avensis";
  fcar.year = 2000;

  car seccar;
  seccar.brand = "Audi";
  seccar.model = "XLR8";
  seccar.year = 2004;

  cout << fcar.brand << setw(10) << fcar.model << setw(7) << fcar.year << endl;
  cout << seccar.brand << setw(9) << seccar.model << setw(10) << seccar.year<< endl;

  return 0;
}*/



/*#include <iostream>                           //References
using namespace std;
int main() {

  string food = "pasta and chicken";
  string &meal = food;

  cout << food << endl;
  cout << meal << endl;
  return 0;
}*/
/*#include <iostream>                         //memory address
using namespace std;
int main() {

  int month = 7;
  cout << &month << endl;

  return 0;
}*/



/*#include <iostream>                         //pointers
using namespace std;
int main() {
  //pointer - variable that stores the memory address as its value.
  string food = "oat";
  string* ptr = &food;

  cout << food << endl;
  cout << &food << endl;
  cout << ptr << endl;
  return 0;
}*/
/*#include <iostream>                       //dereferencing
using namespace std;
int main() {

  int year = 2023;
  int* ptr = &year; // * creates a pointer variable.

  cout << ptr << endl;//mem addr

  cout << *ptr << endl;//variable value. * acts as a dereference operator.
  return 0;
}*/
/*#include <iostream>                           //Modify Pointers
using namespace std;
int main() {

  string comp = "dell";
  string* ptr = &comp;

  cout << ptr << endl;
  cout << *ptr << "\n\n";

  *ptr = "Lenovo";
  cout << *ptr << endl;
  cout << comp << endl; //changing pointers change original variable too

  return 0;
}*/



/*#include <iostream>                                 //Functions
using namespace std;

void myfunc() {
  cout << "ColDev Function" << endl;
}

int main() { 
  myfunc();

  return 0;
}*/
/*#include <iostream>
using namespace std;

void prtcar();

int main() {
  prtcar();
  return 0;
}

void prtcar() {
  cout << "separate function declaration and definition" << endl;
}*/
/*#include <iostream>       //parameters
using namespace std;

void prtname(string fname) {
  cout << fname << endl;
}

int main() {
  prtname("Jones");
  return 0;
}*/
/*#include <iostream>   //default parameters
using namespace std;

void prtcity(string city = "Konza") {
  cout << city << endl;
}

int main() {
  prtcity("Entebbe");
  prtcity();
  return 0;
}*/
/*#include <iostream>     //multiple parameters
using namespace std;

void person(string name, int age) {
  cout << name << " is aged " << age << endl;
}

int main() {
  person("Abel", 43);
  return 0;
}*/
/*#include <iostream>         //return value
using namespace std;

int addfunc (int x, int y) {
  return x + y;
}

int main() {
  //int z = addfunc(50, 10);
  cout << addfunc(50, 10) << endl;
  return 0;
}*/
/*#include <iostream>    //pass by reference
using namespace std;   //useful when you need to change the value of the arguments

void swapnums (int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
int main () {
  int fnum = 50;
  int sname = 70;

  cout << "Before SWAP: " << fnum << " " << sname << endl;

  swapnums(fnum, sname);

  cout << "After SWAP: " << fnum << " " << sname << endl;

  return 0;
}*/
/*#include <iostream>           //Pass Array to a Function
using namespace std;

void prtarrelements (int myarray[5]) {
  for (int i=0; i<5; i++) {
    cout << myarray[i] << endl;
  }
}

int main () {
  int myarray[5] = {1, 2, 3, 4, 5};
  prtarrelements(myarray);

  return 0;
}*/

/*#include <iostream>             //function overloading
using namespace std;
//Multiple functions can have same name as long as number and/or type of parameters are different.

int plusint(int x, int y) {   //returns int
  return x + y;
}

double plusint(double x, double y) {  //returns double
  return x + y;
}

int main () {

  double num1 = plusint(5, 7);
  double num2 = plusint(1.5, 2.3);

  cout << "Int: " << num1 << "\n";
  cout << "Double: " << num2 << "\n";

  return 0;
}*/

/*#include <iostream>       //recursion - making a function call itself.
using namespace std;

int sum(int k){
  if (k > 0) {
    return k + sum(k-1);
  }
  else {
    return 0;
  }
}

int main(){
  int result = sum(10);
  cout << result << endl;

  return 0;
}*/


/*#include <iostream>           //classes
using namespace std;

class Myclass {
  public:
    int mynum;
    string mystring;

  private:
    int myprivnum;
};

int main(){
  Myclass myobject;

  myobject.mynum = 98;
  myobject.mystring = "accessing class attributes";

  cout << myobject.mystring << endl;
  cout << myobject.mynum << endl;

  return 0;
}*/

#include <iostream>         //multiple objects
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car mycar1;
  mycar1.brand = "Audi";
  mycar1.model = "A8";
  mycar1.year = 2019;

  Car mycar2;
  mycar2.brand = "Chevrolet";
  mycar2.model = "Suburban";
  mycar2.year = 2022;

  cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year << endl;
  cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year << endl;

  return 0;
}










































