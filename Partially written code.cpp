 #include <iostream> // syntax error
 #include <iomanip>                   // missing value at the beginning
				//  add a # sign



using namespace std;  // syntax error
                     // it should be std instead
					// correction to change stt to std


const int NUM_EXPERIMENTS = 4; // logic error
                              // they are 4 experiments
							 // correction to change 3 to 4

const int NUM_READINGS = 3;

int main() {     // syntax error
                // it should be main int instead
			   // correction i change float main to main int()
	int i,j;  // syntax error
	         // correction it should be int instead because i and j are numbers

	double readingValue, total, average;
	
	for (i = 1; i <= NUM_EXPERIMENTS; i++) {
		total = 0;
		cout << "\nEXPERIMENT " << i << endl;
		cout << "============ \n";
		
		for (j =1; j<= NUM_READINGS; j++) {
			cout << "Enter reading " << j << " value: ";
			cin >> readingValue; // syntax error
			                    // no variable for reading has been declared
							   //correction change reading to readingValue
			
			total = total + readingValue;  // syntax error
			                              //correction i added a comma
										 // correctoin change substraction sign to addition sign
			
			
		}
		
		average = total / NUM_READINGS ; // syntax error
		                                // correction i removed total
		
		// Incorporate evaluation logic directly
		if (average > 100) {// logical error
			cout << "Experiment " << i << " average: "
				 << fixed << setprecision(2)
				 << average << " is Below acceptable range\n";
		} else if (average >= 100 and average <= 300) {// syntax error 
		                                              // it should be and instead
													 // correction i changed or to and
			cout << "Experiment " << i << " average: "
				 << fixed <<  setprecision(2) << average // # include <ioman>
				 << " is Within acceptable range\n";
		} else {
			cout << "Experiment " << i << " average: "
				 << fixed << setprecision(2) << average
				 << " are Above acceptable range\n";// syntax error 
				                                   // correctioin is to are
		}
	}
	
	return 0;
}
