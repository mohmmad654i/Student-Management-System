#include <iostream>
#include <string>

using namespace std;


struct Info {
    string name;
    float highSchoolGPA; 
    string country;
    int age;
};

struct Student {
    string email;
    string phone;
    Info address;
};

void changePhone(Student &s) {
    cout << "\nPlease enter your new phone number: +962 ";
    while (cin >> s.phone) {
        if (s.phone.length() == 10) {
            cout << "Your new phone number is: " << s.phone << endl;
            break;
        } else {
            cout << "Invalid number! Please enter a 10-digit number: +962 ";
        }
    }
}

int main() {
    Student s1;

  
    cout << "Please enter your email: ";
    cin >> s1.email;
    cout << "Your email: " << s1.email << "@mox.jo" << endl;

    
    cout << "\nEnter your phone number (10 digits): +962 ";
    while (true) {
        cin >> s1.phone;
        if (s1.phone.length() == 10) {
            cout << "Your phone number is: " << s1.phone << endl;
            break;
        } else {
            cout << "Invalid number! Please enter 10 digits: +962 ";
        }
    }

    cout << "-------------------------------------------------\n";

   
    cout << "Please enter your full name: ";
    cin.ignore();
    getline(cin, s1.address.name);

    cout << "Enter your High School GPA: ";
    cin >> s1.address.highSchoolGPA;

    cout << "Enter your age: ";
    while (true) {
        cin >> s1.address.age;
        if (s1.address.age > 17 && s1.address.age < 90) {
            break;
        } else {
            cout << "Invalid age! Please enter an age between 18 and 89: ";
        }
    }


    cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << "Email: " << s1.email << "@mox.jo" << endl;
    cout << "Phone: +962 " << s1.phone << endl;
    cout << "Name: " << s1.address.name << endl;
    cout << "GPA: " << s1.address.highSchoolGPA << endl;
    cout << "Age: " << s1.address.age << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;

 
    char choice;
    cout << "\nDo you want to change your phone number? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        changePhone(s1);
    }

    cout << "\nWelcome to Mox University!" << endl;
system("pause");
    return 0;
}
