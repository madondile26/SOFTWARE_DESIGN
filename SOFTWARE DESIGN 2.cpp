/*SOFTWARE DESIGN 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
  Name: X-Nardo
  Surname: Madondile
  Occupation: Programming Agent
  Rank: General
  Place of Work: Skhotheni Empire University of Criminal Intelligence
  For More Infomation on How to Become A Programming Lord Contact Me on This Phone Number: 0646621730
  If My Phone Goes To Voicemail Then SORRY!!!....Try Again Next Year....
*/

#include <iostream>
using namespace std;

void messageFunction(int age, int currentYear) {

	int birthYear; // Declare a variable for the player's year of birth.

	birthYear = currentYear - age; // Calculate for the year of birth by subtracting the age from the current year.

	// Display one of these messages depending on the resultant birthYear.

	if (birthYear > 2005)
	{
		cout << "You are UNDER AGE.";
		exit(1);
	}
	else if (birthYear <= 2005 && birthYear >= 2002) {
		cout << "TEAM B.";
	}
	else if (birthYear <= 2001 && birthYear >= 1998) {
		cout << "RESERVE.";
	}
	else if (birthYear == 1997 || birthYear == 1996) {
		cout << "TEAM A.";
	}

}

void positionFunction(int playerPosition) {

	// Dispaly one of these messages depending on the player's position number.

	if (playerPosition == 1)
	{
		cout << "PROP TIGHT HEAD.";
	}
	else if (playerPosition == 2){
		cout << "HOOKER.";
	}
	else if (playerPosition == 3) {
		cout << "PROP LOOSE HEAD.";
	}
	else if (playerPosition == 4 || playerPosition == 5) {
		cout << "LOCK.";
	}
	else if (playerPosition == 6) {
		cout << "BLIND SIDE FLANKER.";
	}
	else if (playerPosition == 7) {
		cout << "INSIDE FLANKER.";
	}
	else if (playerPosition == 8) {
		cout << "8th MAN.";
	}
	else if (playerPosition == 9) {
		cout << "SCRUM HALF.";
	}
	else if (playerPosition == 10) {
		cout << "FLY HALF.";
	}
	else if (playerPosition == 11) {
		cout << "LEFT WING.";
	}
	else if (playerPosition == 12) {
		cout << "INSIDE CENTRE.";
	}
	else if (playerPosition == 13) {
		cout << "OUTSIDE CENTRE.";
	}
	else if (playerPosition == 14) {
		cout << "RIGHT WING.";
	}
	else if (playerPosition == 15) {
		cout << "FULL BACK.";
	}
	else
	{
		cout << "RESERVE.";
	}
}

int main()
{
	// Declare all the variables needed for the program.

	char Option = ' '; 
	int age;
	int currentYear = 2021;
	int playerPosition;
	string province;
	string town;
	string yesOrNo;
	string studentNumber;
	string name;
	string surname;
	string cellphoneNumber;
	string ID_Number;

	while (Option != 'E') // Input validation while loop for the menu options of the user
	{
		cout << "\n1. Please select the name of the University rugby team out of the following options:\n" << endl;
		cout << "   (A) WSU ALL BLACKS." << endl;
		cout << "   (B) CPUT." << endl;
		cout << "   (C) UKZN." << endl;
		cout << "   (D) TUT." << endl;
		cout << "   (E) EXIT...\n" << endl;
		cin >> Option;

		if (Option == 'A')
		{
			// Declare and initialise the variables of the province and the town where WSU ALL BLACKS is located.
			province = "Eastern Cape";
			town = "East London";

			cout << "\nWSU ALL BLACKS Province: " << province << endl;
			cout << "WSU ALL BLACKS Town: " << town << endl;
			break;
		}

		if (Option == 'B')
		{
			// Declare and initialise the variables of the province and the town where CPUT is located.
			province = "Western Cape";
			town = "Cape Town";

			cout << "\nCPUT Province: " << province << endl;
			cout << "CPUT Town: " << town << endl;
			break;
		}

		if (Option == 'C')
		{
			// Declare and initialise the variables of the province and the town where UKZN is located.
			province = "KwaZulu-Natal";
			town = "Durban";

			cout << "\nUKZN Province: " << province << endl;
			cout << "UKZN Town: " << town << endl;
			break;
		}

		if (Option == 'D')
		{
			// Declare and initialise the variables of the province and the town where TUT is located.
			province = "Gauteng";
			town = "Pretoria";

			cout << "\nTUT Province: " << province << endl;
			cout << "TUT Town: " << town << endl;
			break;
		}

		if (Option == 'E')
		{
			// Provides the point of exit from the program.
			cout << "-------------------------YOU'VE JUST EXITED THE PROGRAM!!!...-------------------------" << endl;
			exit(1);
		}
	}

	// Enquire and check if the user is a registered student at the University to avoid fraud.
	cout << "\n2. Are you a registered student of the University? \n" << endl;
	cin >> yesOrNo;

	while (yesOrNo != "Yes" || yesOrNo != "No") // Input validation while loop to ensure if the user is really a registered student.
	{
		if (yesOrNo == "Yes")
		{
			// Prompt the player/user to enter their student number if they are registered.
			cout << "\nEnter your student number: ";
			cin >> studentNumber;

			while (studentNumber.length() < 9 || studentNumber.length() > 9) // Input validation while loop to make sure that the user enters a 9 digit long student number.
			{
				cout << "\nERROR!!!...The numerical values you've just entered are not within the specified range... " << endl;
				cout << "Please enter your student number again and make sure that it is 9 numerical values long: ";
				cin >> studentNumber;
			}
			break;
		}
		else if (yesOrNo == "No"){ // Display this message and exit from the program if the player\user is not a registered player.
			cout << "\nSORRY!!!...You are not a registered student therefore you cannot proceed any further..." << endl;
			exit(1);
		}
		else
		{
			// Display this message if the user enters a string apart from "Yes" or "No".
			cout << "\nERROR!!!...You must be a registered student of the University in order to proceed..." << endl;
			cout << "Please answer 'Yes' if you are a registered student of the Univerity or 'No' if not: ";
			cin >> yesOrNo;
		}
	}

	// Prompt the user to enter their name and surname.
	cout << "\n3. Enter your name and surname.\n" << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Surname: ";
	cin >> surname;

	// Propmpt the user to enter their phone number.
	cout << "\n4. Enter your cell phone number.\n" << endl;
	cout << "Cellphone Number: ";
	cin >> cellphoneNumber;

	while (cellphoneNumber.length() < 10 || cellphoneNumber.length() > 10 ) // Validate for the length of the cellphone number to be in a correct format.
	{
		cout << "\nERROR!!!...There should be 10 numerical values entered in order for the cellphone number to be in a correct format...\n";
		cout << "Please enter your cellphone number again and make sure that it is 10 numerical values long: ";
		cin >> cellphoneNumber;
	}

	// Prompt the user to enter their age.
	cout << "\n5. Enter your age.\n" << endl;
	cout << "Age: ";
	cin >> age;

	if (age > 25) // Make sure that the user is not over 25, if so exit the program.
	{
		cout << "You are OVER AGE.";
		exit(1);
	}

	// Propmpt the user to enter their ID number.
	cout << "\n6. Enter your ID number.\n" << endl;
	cout << "ID Number: ";
	cin >> ID_Number;

	while (ID_Number.length() < 13 || ID_Number.length() > 13) // Input validation while loop to make sure that the ID digits are 13 digits long.
	{
		cout << "\nERROR!!!...There should be 13 numerical values entered in order for the ID number to be in a correct format...\n";
		cout << "Please enter your ID number again and make sure that it is 13 numerical values long: ";
		cin >> ID_Number;
	}

	// Get the year the player\user was born.
	cout << "\n7. Get the year you were born and display either TEAM B, RESERVE, or TEAM A depending on the range of your birth year.\n" << endl;
	cout << "   By subtracting your current age, " << age << ", from the current year, " << currentYear << ", we get this message \n";
	cout << "   displayed as a result: ";
	messageFunction(age, currentYear); // Call the function that displays the message of the squad the user is assigned while passing their age and currentYear as arguement.
	cout << endl;
	
	// Prompt the player\user to enter their position number
	cout << "\n8. Determine your position as a rugby player by entering a number starting from 1 to 15 or above.\n" << endl;
	cout << "Position Number: ";
	cin >> playerPosition;

	while (playerPosition < 1) // Input validation while loop to ensure that the user does not enter a negative value.
	{
		cout << "\nERROR!!!...The position number you've just entered does not satisfy validation...\n";
		cout << "Please enter a position number starting from 1 to 15 or above: ";
		cin >> playerPosition;
	}
	
	// Display the players position on screen.
	cout << "Player position: ";
	positionFunction(playerPosition); // Call the function that displays the position.
	cout << endl;

	// Conclude by displaying all the information about the University rugby player on screen in full detail.
	cout << "\n9. Display on screen all of your details as a University rugby player: \n" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
	cout << "Student Number: " << studentNumber << endl;
	cout << "Cellphone Number: " << cellphoneNumber << endl;
	cout << "ID Number: " << ID_Number << endl;
	cout << "Province of University Rugby Team: " << province << endl;
	cout << "Town of University Rugby Team: " << town << endl;
	cout << "Player Position: " << playerPosition << "\\";
	positionFunction(playerPosition);
	cout << endl;
}

