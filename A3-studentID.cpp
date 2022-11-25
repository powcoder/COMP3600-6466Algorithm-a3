https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <iostream>
#include <fstream>
// Add additional libraries you need here

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Please supply the name of the input file\n";
    } 
    else { 
		// Read input
		ifstream inFile(argv[1]);
		int B, n;
		inFile >> B >> n;
		for (int i = 1; i <= n; i++) {
			inFile  >> ki;
			// Store the #applicants data
			for (int j = 1; j <= ki ; j++) {
				inFile >> s_ij;
				// Store the salary of each applicant 
			}
		}
		inFile.close();  		

		bool solExists;
		int totSalaries;
		vector<int> selApplicants;

		// Place your algorithm here
		// If you need to create a function, place the function above the main function
		// If there's a solution (i.e., solExists == True), the results of your algorithm 
		//		should be placed in variables totSalaries and selApplicants
		
		// Print output
		if (solExists) {
			cout << totSalaries << " ";
			for (int i = 0; i < n; i++) {
				cout << selApplicants[i] << " ";
			}
		}
		else {
			cout << "no solution";
		}
		cout << "\n";
    }

    return 0;
}
