#ifndef SN_QUESTIONS_H
#define SN_QUESTIONS_H
#include <iostream>
using namespace std;

class SN_Question {
private:
    string m_intitule;
    string m_reponse[4];
    short m_indiceBonneReponse;

public:
    bool setIntitule (string intitule);
    bool setReponse (string* tabReponse,int taille);
    string formater();
    bool validerReponse (short m_indiceBonneReponse);
    string getSolution();
};
#endif
