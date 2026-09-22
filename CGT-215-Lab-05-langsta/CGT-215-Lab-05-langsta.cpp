// CGT-215-Lab-05-langsta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>


using namespace std;
int main()
{
   
    vector<char> cypher = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' }; //creates vector storing the cypher letters
    cout << "Input Text to Cypher:";
    string text; // creates a string variable to hold text
    getline(cin, text); // looks at what the user types and stores it as text
    string cyphertext = ""; //creates cyphertext variable
    for (char ch : text){ // checks for each char named "ch" in the text one by one and loops through to change into cypher text
        if (ch >= 65 && ch <= 90) {  //is a capital letter
            cyphertext += cypher[ch - 65]; // cypher[] to look up letter += allows for a shorthand instead of "cypherText = cyphertext + cypher"
        }
        else if (ch >= 97 && ch <= 122) { // is lower case letter
            char uppercasenumber = ch - 32; // creates uppercasenumber variable
            char uppercasecode = cypher[uppercasenumber - 65]; // creates uppercasecode char variable
            cyphertext += uppercasecode + 32; 

        }
        else { // is not letter
            cyphertext += ch; // returns char variable
        }
    }
    
    cout << "Encoded Message: " << cyphertext << endl;

}
//   IF char IS BETWEEN 65 AND 90 //is a capital le�er
//RETURN THE CHAR AT SLOT char - 65 IN CODE TABLE
// ELSE IF char IS BETWEEN 97 AND 122 // is lower case le�er
//SET upperCaseLe�er TO char - 32 // converts the number to upper case number
//SET upperCaseCode TO CHAR AT SLOT upperCaseLe�er - 65 IN CODE TABLE // get upper case code
//RETURN upperCaseCode + 32 // convert code back to lower case
//ELSE // is not le�er
//RETURN cha
 
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
