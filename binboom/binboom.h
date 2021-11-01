//
// Created by Bryan on 04/04/2019.
//

#ifndef __BINBOOM_H
#define __BINBOOM_H

#include <cstdlib>
#include <iostream>
#include <cassert>
#include <stack>
#include <functional>
#include <memory>
#include <queue>
#include <sstream>

#include <vector>


using namespace std;

template <class T>
class Binboom;

template <class T>
class Binknoop;

template<class T>
using Binknoopptr=std::unique_ptr<Binknoop<T>>;



template <class T>
class Binboom:public Binknoopptr<T>{
public:
    using Binknoopptr<T>::Binknoopptr;
    friend istream& operator>>(istream& is, Binboom<T>& bb){
        return bb.lees(is);
    }
    friend ostream& operator<<(ostream& os, const Binboom<T>& bb){
        return bb.schrijflevelorder(os);
    }
//schrijf schrijft uit in een vorm die min of meer menselijk leesbaar is
    ostream& schrijf(ostream&);
    int aantalSleutels() const;
    istream& lees(istream&);
//schrijflevelorder schrijft uit in een vorm die door lees(...) kan gelezen worden.
    ostream& schrijflevelorder(ostream& os) const;
    void DEbezoek(function<void(T&&)>preorder,
                  function<void(T&&)>inorder,
                  function<void(T&&)>postorder);
    void teken(const char * bestandsnaam);
    string tekenrec(ostream& uit,int&knoopteller);
private:
};

// given
template <class T>
class Binknoop{
    friend class Binboom<T>;
private:
    T sleutel;
    Binboom<T> links,rechts;
};

// given
template<class T>
int Binboom<T>::aantalSleutels() const{
    if (!*this)
        return 0;
    else
        return (*this)->links.aantalSleutels()+(*this)->rechts.aantalSleutels() + 1;
}

// added
template <class T>
istream& Binboom<T>::lees(istream& is){
    int aantalSleutels;
    is >> aantalSleutels; // aantal sleutels (eerste lijn) inlezen
    vector<Binboom<T>*> knopen(aantalSleutels); // knopen bijhouden; elke index bevat zijn mini boompje
    vector<pair<int, int>> kinderen(aantalSleutels); // kinderen van een knoop bijhouden
    vector<bool> root_tracker(aantalSleutels); // trackt welke knoop een ouder heeft om zo root te vinden

    // Overloop de lijnen in het bestand
    for(int i = 0; i < aantalSleutels; i++){
        T waarde;
        int links, rechts;
        is >> waarde >> links >> rechts;
        kinderen[i] = {links, rechts};
        cout << waarde << links << rechts;
        // mini binboompje klaarzetten voor elke knoop
        knopen[i] = make_unique<Binboom<T>>();                                                                // ***************
        // Nu moet ik een knoop aanmaken als root van miniboompje op index in de vector knopen
        Binknoop<T> knoop = make_unique<Binknoop<T>>(); // binknoop aanmaken                                  // ***************
        knoop.sleutel = waarde; // waarde van deze binknoop instellen
        Binboom<T> tempBoompje(knoop); // root van miniboompje is nu de knoop                                 // ***************
        knopen[i]->swap(tempBoompje);

        // Instellen van root_tracker om root te vinden
        if(links != -1){
            root_tracker[links] = true;
        }
        if(rechts != -1){
            root_tracker[rechts] = false;
        }
    }

    // Nadat we alle knopen hebben ingelezen gaan we op zoek naar wie wel de root is,
    // er is maar 1 element in de root_tracker tabel die false heeft als waarde. De knoop op die index is de root
    int root = 0;
    for (int i = 0; i < aantalSleutels; i++) {
        if (!root_tracker[i]) {
            root = i;
        }
    }

    // ?
    // boom bouwen
    for(int i = 0; i < aantalSleutels; i++) {
        if(kinderen[i].first != -1) {
            knopen[i]->get()->links.swap(*knopen[kinderen[i].first]); // L-kind verplaatsen naar de knoop zodat het een echt linkerkind wordt
            knopen[kinderen[i].first] = &(knopen[i]->get()->links); // pointer aanpassen
        }
        if(kinderen[i].second != -1) {
            knopen[i]->get()->rechts.swap(*knopen[kinderen[i].second]);
            knopen[kinderen[i].second] = &(knopen[i]->get()->rechts);
        }
    }
    this->swap(*knopen[root]);
    return is;
}


// given
template<class T>
ostream& Binboom<T>::schrijf(ostream& os){
    if ((*this)!=0){
        os<<"sleutel: "<<(*this)->sleutel<<" linkerkind: ";
        if ((*this)->links)
            os<<(*this)->links->sleutel;
        else
            os<<"(geen)";
        os<<" rechterkind: ";
        if ((*this)->rechts)
            os<<(*this)->rechts->sleutel;
        else
            os<<"(geen)";
        os<<endl;
        (*this)->links.schrijf(os);
        (*this)->rechts.schrijf(os);
    }
    return os;
}

// given
template <class T>
void Binboom<T>::teken(const char * bestandsnaam){
    ofstream uit(bestandsnaam);
    assert(uit);
    int knoopteller=0;//knopen moeten een eigen nummer krijgen.
    uit<<"digraph {\n";
    this->tekenrec(uit,knoopteller);
    uit<<"}";
};

// given
template <class T>
string Binboom<T>::tekenrec(ostream& uit,int&knoopteller){
    ostringstream wortelstring;
    wortelstring<<'"'<<++knoopteller<<'"';
    if (!*this){
        uit<<wortelstring.str()<<" [shape=point][color=white];\n";
    }
    else{
        uit<<wortelstring.str()<<" [label=\""<<(*this)->sleutel<<"\"]";
        uit<<";\n";
        string linkskind=(*this)->links.tekenrec(uit,knoopteller);
        ++knoopteller;
        uit<<"\""<<knoopteller<<"b\""<<"[label=\"\"][color=white];\n";
        uit<<wortelstring.str()<<" -> \""<<knoopteller<<"b\" [color=white];\n";
        if (!(((*this)->links) && ((*this)->rechts)) &&
            (((*this)->links) || ((*this)->rechts))){
            uit<<"\""<<knoopteller<<"c\""<<"[label=\"\"][color=white];\n";
            uit<<wortelstring.str()<<" -> \""<<knoopteller<<"c\" [color=white];\n";
        };
        string rechtskind=(*this)->rechts.tekenrec(uit,knoopteller);
        uit<<wortelstring.str()<<" -> "<<linkskind;
        if (!(*this)->links)
            uit<<"[color=white]";
        uit <<";\n";
        uit<<wortelstring.str()<<" -> "<<rechtskind;
        if (!(*this)->rechts)
            uit<<"[color=white]";
        uit <<";\n";
    };
    return wortelstring.str();
};

// added?
/*
template<class T>
ostream& Binboom<T>::schrijflevelorder(ostream& os) const {
    if ((*this)) {
        os << aantalSleutels() << endl;
        queue<Binknoop<T>* > ATW; // FIFO: een lijst met Binknoop<T>* elementen
        ATW.push(this->get()); // je moet van de huidige boom de inhoud van de knoop op
        int kindnr = 1;
        Binknoop<T>* nuknoop = ATW.front();
        while (nuknoop != 0) {
            os << nuknoop->sl << ' ';
            if (!nuknoop->links)
                os << "-1 ";
            else {
                os << kindnr++ << ' ';
                ATW.push(nuknoop->links.get());
            }
            if (!nuknoop->rechts)
                os << "-1\n";
            else {
                os << kindnr++ << '\n';
                ATW.push(nuknoop->rechts.get());
            }
            ATW.pop();
            if (ATW.front() != 0)
                nuknoop = ATW.front();
            else
                nuknoop = 0;
        }
    }
}
*/


// given
template<class T>
void Binboom<T>::DEbezoek(function<void(T&&)>preorder,
                          function<void(T&&)>inorder,
                          function<void(T&&)>postorder){
    stack<pair<Binknoop<T> *,int > >ATW;//ATW: Af Te Werken
    if ((*this)!=0){
        ATW.emplace((*this).get(),1);
        while (!ATW.empty()){
            Binknoop<T> * nuknoop=ATW.top().first;
            int pass=ATW.top().second;
            ATW.top().second++;
            switch (pass){
                case 1:
                    preorder(move(nuknoop->sleutel));
                    if (nuknoop->links)
                        ATW.emplace(nuknoop->links.get(),1);
                    break;
                case 2:
                    inorder(move(nuknoop->sleutel));
                    if (nuknoop->rechts)
                        ATW.emplace(nuknoop->rechts.get(),1);
                    break;
                case 3:
                    postorder(move(nuknoop->sleutel));
                    ATW.pop();
            }
        };
    };
};
#endif

