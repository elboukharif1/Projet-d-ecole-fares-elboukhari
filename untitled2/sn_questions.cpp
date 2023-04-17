#include "sn_questions.h"
bool SN_Question::setIntitule(string intitule)
{
    if (intitule.empty()) return 0;
    m_intitule = intitule;
    return 1;
}

bool SN_Question::setReponse(string *tabReponse, int taille)
{
    if (taille==4)
    {for (int i=0;i<4;i++)
            m_reponse[i]=tabReponse[i];
        return true;
    }
    return false;
}
string SN_Question::formater()
{

}

bool SN_Question::validerReponse(short indice)
{
    bool valide=false;
    if (indice==m_indiceBonneReponse)
        valide=true;
    return valide;
}

string SN_Question::getSolution()
{
    return m_reponse[0];
}
