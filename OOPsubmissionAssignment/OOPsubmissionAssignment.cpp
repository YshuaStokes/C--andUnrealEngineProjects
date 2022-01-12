// OOPsubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Dog {
    private:
        string m_breed;
        string m_color;
        double m_height;
        double m_weight;
        
    public:
        Dog(string breed, string color, double height, double weight) {
            m_breed = breed;
            m_color = color;
            m_height = height;
            m_weight = weight;
        }
        void Shake() {
            cout << "Shake!" << endl;
        }
        void Sit() {
            cout << "Sit!" << endl;
        }
        void LayDown() {
            cout << "Lay Down!" << endl;
        }

};

int main()
{
    Dog Zoe("Australian Cattle Dog", "Orange", 1.5, 48.5);

    Zoe.Shake();

    Zoe.Sit();

    Zoe.LayDown();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
