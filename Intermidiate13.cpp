//  Created by Pablo Velazquez on 1/26/20.
//  Copyright © 2020 Pablo Velazquez. All rights reserved.

#include <iostream>
using namespace std;

int main ()
{
    //declare variables
    double recArea = 0.0; //area of the rectangle
    double recLength = 0.0; //lenght of the rectangle
    double recWidth = 0.0; // width of the rectangle
    double costFeet = 0.0; //cost per feet of the rectangle
    double totalCost = 0.0; // total cost of the tiles

    //enter input items
    cout << "Enter the lenght of the rectangle: "; // Ask for leght of rectangle
    cin >> recLength; // Save value of the lenght of the rectangle
    cout << "\nEnter the width of the rectangle: "; // Ask for the width of the rectangle
    cin >> recWidth; // Save value of the width of the rectangle
    cout << "\nEnter the cost per feet of the tiles: ";
    cin >> costFeet;
    
    
    //Calculate the area of the rectangle and calculate total cost of the tiles
    recArea = recWidth * recLength;
    totalCost = recArea * costFeet;
    if (totalCost > 3000) {
        cout << "\nWell that would be an expensive fix. Your total cost came out to be $" << totalCost << ", with an area of "<< recArea << " feet." << endl;
        return 0;
    }

    //display total cost for the tiles
    cout << "Your total area is " << recArea << " feet, and the total cost to add tiles would be $" << totalCost << endl;
    
    return 0;
} //end of main funtion
