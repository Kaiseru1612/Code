#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name,sex,add,email,skills,
        hobby,work,birth,strong,weak;
    int weight, height, phone;
    cout << "What's your name?\n";
        getline(cin, name);
    cout << "What's your gender?(Male/Female)\n";
        getline(cin, sex);
    cout << "What is your date of birth?(dd/mm/yyyy)\n";
        getline(cin, birth);
    cout << "What is your place of birth?(City)\n";
        getline(cin, add);
    cout << "What is your phone number?\n";
        cin >> phone;
        cin.ignore();
    cout << "What is your email?\n";
        getline(cin, email);
    cout << "Do you have any hobby? (hobby1, hobby2, ...)\n";
        getline(cin, hobby);
    cout << "Do you have any skills?(skill1, skill2,...)\n";
        getline(cin, skills);
    cout << "In your opinion, what are your strong points?(1, 2, 3,...)\n";
        getline(cin, strong);
    cout << "What are your weaknesses? (1, 2, 3,...)\n";
        getline(cin, weak);
    cout << "How tall are you?(cm)\n";
        cin >> height;
    cout << "what is your weight?(kg)\n";
        cin >> weight;

        cout << "=======================                        PERSONAL PROFILE                           ==============" << endl;
        cout << "|" << setw(30) << "[Name]: " << name << endl;
        cout << "|" << setw(30) <<"[Date of birth] : " << birth << endl;
        cout << "|" << setw(30) << "[Sex]: " << sex << endl;
        cout << "|" << setw(30) << "[Native land]: " << add << endl;
        cout << "|" << setw(30) << "[Tel]: " << phone << endl;
        cout << "|" << setw(30) << "[Email]: " << email << endl;
        cout << "|" << setw(30) << "[Hobby]: " << hobby << endl;
        cout << "|" << setw(30) << "[Strong points]: " << strong << endl;
        cout << "|" << setw(30) << "[Weakness]: " << weak << endl;
        cout << "|" << endl;
        cout << "|" << setw(30) << "[Height](cm) : " << height << endl;
        cout << "|" << setw(30) << "[Weight](kg) : " << weight << endl;
        cout << "========================================================================================================" << endl;
    return (0);
}



