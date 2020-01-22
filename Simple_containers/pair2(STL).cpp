//Initializing a pair:
//*********************
/*Syntax :
  --------
  pair (data_type1, data_type2) Pair_name (value1, value2) ;
============================================================
  ==================================
  Different ways to initialize pair:
  ----------------------------------
    pair  g1;         //default
    pair  g2(1, 'a');  //initialized,  different data type
    pair  g3(1, 10);   //initialized,  same data type
    pair  g4(g3);    //copy of g3
  =====================================================================
  Another way to initialize a pair is by using the make_pair() function
  g2 = make_pair(1, 'a'); 
  =====================================================================
*/

// CPP program to illustrate Initializing of pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair <string,double> PAIR2 ("GeeksForGeeks", 1.23);

    cout << PAIR2.first << " " ; //GeeksForGeeks
    cout << PAIR2.second << endl ; //1.23
    
return 0;
}

/*===============================================================================================/
Note: If not initialized, the first value of the pair gets automatically initialized.
************************************************************************************************* */

// CPP program to illustrate auto-initializing of pair STL
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair <int, double> PAIR1 ;
    pair <string, char> PAIR2 ;

    cout << PAIR1.first ;  // it is initialised to 0
    cout << PAIR1.second ; // it is initialised to 0

    cout << " ";

    cout << PAIR2.first ;  // it prints nothing i.e NULL
    cout << PAIR2.second ; // it prints nothing i.e NULL

    return 0;
}
/* **************************************************************************************************************
make_pair() : This template function allows to create a value pair without writing the types explicitly.
Syntax : 
       Pair_name = make_pair (value1,value2);
================================================================================================================= */


#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair <int, char> PAIR1 ;
    pair <string, double> PAIR2 ("GeeksForGeeks", 1.23) ;
    pair <string, double> PAIR3 ;

    PAIR1.first = 100;
    PAIR1.second = 'G' ;

    PAIR3 = make_pair ("GeeksForGeeks is Best",4.56);

    cout << PAIR1.first << " " ; //100
    cout << PAIR1.second << endl ; //G

    cout << PAIR2.first << " " ;  //GeeksForGeeks
    cout << PAIR2.second << endl ; //1.23

    cout << PAIR3.first << " " ; //GeeksForGeeks is Best
    cout << PAIR3.second << endl ; //4.56

    return 0;
}
/*=====================================================================================================================================================*/

// CPP code to illustrate operators in pair
#include <iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);


    cout << (pair1 == pair2) << endl; //0
    cout << (pair1 != pair2) << endl; //1
    cout << (pair1 >= pair2) << endl; //0
    cout << (pair1 <= pair2) << endl; //1
    cout << (pair1 > pair2) << endl;  //0
    cout << (pair1 < pair2) << endl;  //1

    return 0;
}

/* **************************************************************************************************************************************************** /
swap : This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type.
Syntax:
      pair1.swap(pair2) ;
For two given pairs say pair1 and pair2 of same type, swap function will swap the pair1.first with pair2.first and pair1.second with pair2.second.
======================================================================================================================================================*/

#include <iostream>
#include<utility>

using namespace std;

int main()
{
    pair<char, int>pair1 = make_pair('A', 1);
    pair<char, int>pair2 = make_pair('B', 2);

    cout << "Before swapping:\n " ;
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second ; //A 1
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second ; //B 2
    pair1.swap(pair2);

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second ; //B 2
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second ; //A 1

    return 0;
}
/*============================================================================================================================================== */


// CPP program to illustrate pair in STL
#include <iostream>
#include <utility> 
#include <string> 
using namespace std;

int main()
{
    pair <string, int> g1;
    pair <string, int> g2("Quiz", 3);
    pair <string, int> g3(g2);
    pair <int, int> g4(5, 10);

    g1 = make_pair(string("Geeks"), 1);
    g2.first = ".com";
    g2.second = 2;

    cout << "This is pair g" << g1.second << " with "    //1
        << "value " << g1.first << "." << endl << endl; //Geeks

    cout << "This is pair g" << g3.second  //3
        << " with value " << g3.first      //Quiz
        << "This pair was initialized as a copy of "
        << "pair g2" << endl << endl;

    cout << "This is pair g" << g2.second //2
        << " with value " << g2.first     //.com
        << "\nThe values of this pair were"
        << " changed after initialization."
        << endl << endl;

    cout << "This is pair g4 with values "
        << g4.first << " and " << g4.second   //5 10
        << " made for showing addition. \nThe "
        << "sum of the values in this pair is "
        << g4.first+g4.second      //15
        << "." << endl << endl;

    cout << "We can concatenate the values of"
        << " the pairs g1, g2 and g3 : "
        << g1.first + g3.first + g2.first << endl << endl; //GeeksQuiz.com

    cout << "We can also swap pairs "
        << "(but type of pairs should be same) : " << endl;
    cout << "Before swapping, " << "g1 has " << g1.first //Geeks
        << " and g2 has " << g2.first << endl; //.com
    swap(g1, g2);
    cout << "After swapping, "
        << "g1 has " << g1.first << " and g2 has " << g2.first; //.com  Geeks

    return 0;
}
/********************************************************************************************************************************************************/
