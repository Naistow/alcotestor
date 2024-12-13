#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alcohol_ml;
    double weight_kg;
    double alcohol_percentage;
    double blood_alcohol_content;
    double hours_to_sober;
    double metabolism_rate;
    int age;

    cout << "Enter the amount of alcohol consumed in milliliters: ";
    cin >> alcohol_ml;

    cout << "Enter the alcohol percentage (for example, 40 for 40%): ";
    cin >> alcohol_percentage;

    cout << "Enter your weight in kilograms: ";
    cin >> weight_kg;

    cout << "Enter your age: ";
    cin >> age;

    if (weight_kg <= 0) {
        cout << "The weight must be a positive number." << endl;
        return 1; 
    }
        if (alcohol_ml <= 0) {
        cout << "How did you drink less than 0?" << endl;
        return 1; 
    }
    if (alcohol_percentage < 0 || alcohol_percentage > 100) {
        cout << "The percentage of alcohol content should be in the range from 0 to 100." << endl;
        return 1; 
    }
    if (age < 0) {
        cout << "Age must be a positive number." << endl;
        return 1; 
    }

    
    blood_alcohol_content = (alcohol_ml * (alcohol_percentage / 100.0)) / (weight_kg * 10);

    
    cout << "Your blood alcohol level: " << blood_alcohol_content << " per mill" << endl;

    
    if (age < 25) {
        metabolism_rate = 0.1; 
    } else if (age < 60) {
        metabolism_rate = 0.1; 
    } else {
        metabolism_rate = 0.08; 
    }

    
    if (blood_alcohol_content > 0) {
        hours_to_sober = blood_alcohol_content / metabolism_rate; 
        double error_margin = hours_to_sober * 0.2; 
        cout << "The time it takes to sober up: " << ceil(hours_to_sober) << " hours (error +-" << ceil(error_margin) << " hour/s)." << endl;
    } else {
        cout << "You're sober." << endl;
    }
    system("pause");
    return 0; 
}
