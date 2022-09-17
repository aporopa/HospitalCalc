//preprocessing directives needed
#include <iostream>
#include <iomanip>
#include <cmath>
#include "validateUserInput.h"
#include "calcTotalCharges.h"

using namespace std;

int main(){

    //declaration of variables
    char patientStatus;
    double daysInHospital;
    double roomRate;
    double feesAndCharges;
    double medicineCharges;
    bool boolCheck = true;

    //Inform user of the program purpose and prompt for I/O
    cout << "This program will calculate a patient's hospital charges.\n";

    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> patientStatus;

    //Verify that the input deals with I/O only. Keep asking until you get what you want
    while(patientStatus != 'I' && patientStatus != 'i' && patientStatus != 'O' && patientStatus != 'o'){
        cout << "Your character is invalid. Please enter either 'I' (inpatient) or 'O' (outpatient)" << endl;
        cin >> patientStatus;
    }
        if(patientStatus == 'i' || patientStatus == 'I')
        {
            cout << "I" << endl;

            //Prompt user for number of days in the hospital...validated
            cout << "Number of days in the hospital: " << endl;
            cin >> daysInHospital;
            
            validateUserInput(daysInHospital);
            boolCheck = validateUserInput(daysInHospital);

                if(boolCheck == false){
                    cout << "Please enter a positive integer.\n";
                    cin >> daysInHospital;
                }
            
            //Prompt user for daily room rate and validate
            cout << "Daily room rate ($): " << fixed << setprecision(2) << endl;
            cin >> roomRate;

            validateUserInput(roomRate);
            boolCheck = validateUserInput(roomRate);

                if(boolCheck == false){
                    cout << "Please enter a positive integer.\n";
                    cin >> roomRate;
                }
            
            cout << roomRate << fixed << setprecision(2) << endl;

            //Prompt user for lab fees and other service charges and validate
            cout << "Lab fees and other service charges ($): ";
            cin >> feesAndCharges;

            validateUserInput(feesAndCharges);
            boolCheck = validateUserInput(feesAndCharges);

                if(boolCheck == false){
                    cout << "Please enter a positive integer.\n";
                    cin >> feesAndCharges;
                }
            
            cout << feesAndCharges << fixed << setprecision(2) << endl;

            //Prompt user for medication charges and validate
            cout << "Medication charges ($): ";
            cin >> medicineCharges;

            validateUserInput(medicineCharges);
            boolCheck = validateUserInput(medicineCharges);

                if(boolCheck == false){
                    cout << "Please enter a positive integer.\n";
                    cin >> medicineCharges;
                }
            
            cout << medicineCharges << fixed << setprecision(2) << endl;

            //Calculate total hospital charges through the function
            cout << "Your total hospital bills is ";
            cout << "$" << calcTotalCharges(daysInHospital, roomRate, feesAndCharges, medicineCharges) << fixed << setprecision(2) << endl;
        }

        //Option for outpatient 
        else if(patientStatus == 'o' || patientStatus == 'O')
        {
            cout << "O" << endl;

            //Prompt user for lab fees and other service and validate
            cout << "Lab fees and other service charges ($): ";
            cin >> feesAndCharges;
                validateUserInput(feesAndCharges);
                boolCheck = validateUserInput(feesAndCharges);

                    if(boolCheck == false){
                        cout << "Please enter a positive integer.\n";
                        cin >> feesAndCharges;
                    }
            
            cout << feesAndCharges << fixed << setprecision(2) << endl;

            //Prompt user for medication charges and validate
            cout << "Medication charges ($): ";
            cin >> medicineCharges;
                validateUserInput(medicineCharges);
                boolCheck = validateUserInput(medicineCharges);

                    if(boolCheck == false){
                        cout << "Please enter a positive integer.\n";
                        cin >> medicineCharges;
                    }
            
            cout << medicineCharges << fixed << setprecision(2) << endl;

            //Calculate total hospital bills with calculate function
            cout << "Your total hospital bills is ";
            cout << "$" << calcTotalCharges(feesAndCharges, medicineCharges) << fixed << setprecision(2) << endl;
        }

    return 0;
}

