#include <iostream>
using namespace std;

class batsmen {
private:
    int bcode;
    char bname[20];
    float innings, notout, runs;
    float batavg;

    float calcavg() {
        return runs / (innings - notout);
    }

public:
    void readdata() {
        cout << "Enter bcode number: ";
        cin >> bcode;
        cout << "Enter batsman name: ";
        cin >> bname;
        cout << "Enter innings: ";
        cin >> innings;
        cout << "Enter notout: ";
        cin >> notout;
        cout << "Enter runs: ";
        cin >> runs;

        batavg = calcavg();
    }

    void displaydata() {
        cout << "Bcode number: " << bcode << endl;
        cout << "Batsman name: " << bname << endl;
        cout << "Total innings: " << innings << endl;
        cout << "Total not out: " << notout << endl;
        cout << "Total runs: " << runs << endl;
        cout << "Batting average: " << batavg << endl;
    }
};

int main() {
    batsmen s;
    s.readdata();
    s.displaydata();

    
}