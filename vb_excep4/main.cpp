#include <iostream>
#include <fstream>
using namespace std;

double gemiddelde(const string &s) {
    ifstream inv(s);
    if (!inv.is_open())
        throw "openen bestand " + s + " mislukt";
    int aantal = 0, som = 0;
    int getal;
    while (inv >> getal) {
        aantal++;
        som += getal;
    }
    if (!inv.eof())
        throw "Dit bestand bevat fouten";
    else if (aantal == 0)
        throw "Dit bestand is leeg";
    else
        return (som*1.0)/aantal;
}

int main(int argc, char **argv) {
    if (argc == 1)
        cout << "geen extra strings op commandolijn";
    for (int i = 1 ; i < argc ; i++) {
        try {
            cout << "bestand " << argv[i] << endl;
            double gem = gemiddelde(argv[i]);
            cout << "gemiddelde = " << gem << endl;
        }
        catch (const char *s) {
            cout << s << endl;
        }
        catch (const string &s) { //ook ok maar minder goed: string s
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}