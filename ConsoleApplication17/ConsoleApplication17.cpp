#include <iostream>
#include <cmath>

using namespace std;


//1

/*
int main() {
    double sizeGB;
    double speedMbps;

    cout << "ur size gb: ";
    cin >> sizeGB;

    cout << "speedMbps: ";
    cin >> speedMbps;

    double fileSizeInBits = sizeGB * 8 * 1024 * 1024 * 1024; 
    double downloadTimeInSeconds = fileSizeInBits / (speedMbps * 1024 * 1024); 

    int hours = downloadTimeInSeconds / 3600;
    int minutes = (int(downloadTimeInSeconds) % 3600) / 60;
    int seconds = int(downloadTimeInSeconds) % 60;

    cout << "will download in: \n" << hours << " hours \n" << minutes << " minutes \n" << seconds << " secondes \n" << endl;

    return 0;
}
*/


//2

/*
int main() {
    double flashDriveSizeGB;
    const double movieSizeMB = 760.0;
    const double bytesInGB = 1024.0 * 1024.0 * 1024.0;

    cout << "enter size ur stick (gb): ";
    cin >> flashDriveSizeGB;

    double flashDriveSizeMB = flashDriveSizeGB * bytesInGB / 1024 / 1024;
    int moviesCount = static_cast<int>(flashDriveSizeMB / movieSizeMB); 

    cout << "stick " << flashDriveSizeGB << " gb \n" << moviesCount << " 760 mb of movies" << endl;

    return 0;
}
*/


//3

/*
int main() {
    double number;

    cout << "num: ";
    cin >> number;

    double roundedNumber = round(number * 100) / 100;

    cout << "rounded num: " << roundedNumber << endl;

    return 0;
}
*/

//5

/*
int main() {
    int secondsPassed;

    cout << "seconds: ";
    cin >> secondsPassed;

    int secondsInDay = 24 * 60 * 60;
    int secondsRemaining = secondsInDay - secondsPassed;

    int hours = secondsRemaining / 3600;
    int minutes = (secondsRemaining % 3600) / 60;
    int seconds = secondsRemaining % 60;

    cout << "midnight: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}
*/


//6

/*
int main() {
    double principal; 
    int months; 
    double annualInterestRate; 

    cout << "summ grn: ";
    cin >> principal;

    cout << "month: ";
    cin >> months;

    cout << "% in year: ";
    cin >> annualInterestRate;

    
    double monthlyInterestRate = annualInterestRate / 100 / 12;

    
    double finalAmount = principal * pow(1 + monthlyInterestRate, months);

    cout << "end of year u will have: " << finalAmount << " grn" << endl;

    return 0;
}
*/


