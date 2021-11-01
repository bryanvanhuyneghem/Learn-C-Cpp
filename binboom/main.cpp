#include <iostream>
#include <fstream>
#include "binboom.h"

using namespace std;

int main(){
    ifstream invoer("jacht.txt");
    if(!invoer){
        cerr << "File not found." << endl;
        return -1;
    }



    Binboom<string> bb;
    invoer >> bb; // invoer inlezen in onze binaire boom
    bb.schrijf(cout);

    /*
    vector<string> inorder;
    vector<string> preorder;
    vector<string> postorder;

    auto inorderfct = [&inorder](string &&waarde) { inorder.push_back(waarde); };
    auto preorderfct = [&preorder](string &&waarde) { preorder.push_back(waarde); };
    auto postorderfct = [&postorder](string &&waarde) { postorder.push_back(waarde); };

    //bb.schrijflevelorder(cout);
    bb.schrijf(cout);
    //bb.DEbezoek(preorderfct, inorderfct, postorderfct);
    */
    /*
    cout << "Vraag: ";
    for (string woord:preorder) {
        cout << woord << " ";
    }
    cout << endl;
    cout << "Antwoord: ";
    for (string woord:inorder) {
        cout << woord << " ";
    }
    cout << endl;
    */

    invoer.close();

    return 0;
}

/*
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

9
berg 3 -1
de -1 0
de -1 5
een 7 -1
volgt 2 8
man -1 -1
op 1 -1
vos -1 -1
hier -1 6

9 = aantal knopen
De vraag staat in preorder (lees de boom in preorder, een Depth First Traversal, root, left, right) : volgt de man hier op de berg een vos?
Het antwoord staat in inorder (lees de boom in inorder, een Depth First Traversal, left, root, right) : de man volgt hier op de berg een vos
Elke lijn is een knoopnummer. De getallen verwijzen naar de kinderen. Een -1 duidt op het
feit dat er geen kind is.
Dus:

									volgt

				de										hier

		-1				man					-1							op

					-1		-1								de						-1

													-1				berg

														      een			  -1

														vos			-1

													 -1		-1

Elke node bevat dit:
Left
Visit
Right

Schrappen wanneer je iets doet

Depth First -> Stack
Breadth First -> Queue


*/