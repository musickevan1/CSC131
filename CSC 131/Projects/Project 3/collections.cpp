#include <iostream>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 9/8/2023
Purpose: This program will ask the user to enter information about three book collections with volumes and a price per volume,
as well as a budget available for a buyer named Bob. Program will evaluate then print out specific messages based on truth value of expressions.
*/

int main ()
{
    // Declare Variables: v = Volume p = Price
    int v1, v2, v3;   // Volumes for three collections
    int p1, p2, p3;   // Price per volume for three collections
    int budget;       // Bob's budget

    // Prompt user for volumes and price per volume for collection 1-3 & budget
    cout << "Enter volumes and price per volume for collection 1: ";
    cin >> v1 >> p1;
    cout << "Enter volumes and price per volume for collection 2: ";
    cin >> v2 >> p2;
    cout << "Enter volumes and price per volume for collection 3: ";
    cin >> v3 >> p3;
    cout << "Enter Bob's budget: ";
    cin >> budget;

    // Calculate total cost for each collection
    int collectionT1, collectionT2, collectionT3;
    collectionT1 = v1 * p1;
    collectionT2 = v2 * p2;
    collectionT3 = v3 * p3;
    
    // Check if Bob has money to buy collections
    if (budget > 0) {
        cout << "(1) Bob has some money to buy collections." << endl;
    } else {
        cout << "(1) Bob does not have money to buy anything" << endl;
    }

    // Check if Bob has enough money to buy all three collections
    if (budget > collectionT1 + collectionT2 + collectionT3) {
        cout << "(2) Bob has enough money to buy all three collections." << endl;
    } else {
        cout << "(2) Bob does not have enough money to buy all three collections." << endl;
    }

    // Check if at least two collections are more expensive than Bob's budget
    if ((budget < collectionT1 && budget < collectionT2) || (budget < collectionT1 && budget < collectionT3) || (budget < collectionT2 && budget < collectionT3)) {
        cout << "(3) At least two collections are more expensive than Bob’s budget." << endl;
    } else {
        cout << "(3) At least two collections are cheaper than or equal to Bob’s budget." << endl;
    }

    // Check if at least two collections cost the same amount of money
    if (collectionT1 == collectionT2 || collectionT1 == collectionT3 || collectionT2 == collectionT3) {
        cout << "(4) At least two collections cost the same amount of money." << endl;
    } else {
        cout << "(4) No two collections have the same price." << endl;
    }

    // Check if only one collection is cheaper than or equal to Bob’s budget
    if ((budget >= collectionT1 && budget <= collectionT2 && budget <= collectionT3) || (budget >= collectionT2 && budget <= collectionT1 && budget <= collectionT3) || (budget >= collectionT3 && budget <= collectionT1 && budget <= collectionT2)){
        cout << "(5) Only one collection is cheaper than or equal to Bob’s budget." << endl;
    } else {
        cout << "(5) More than one collection is cheaper than or equal to Bob’s budget or they are all more expensive." << endl;
    }
}
