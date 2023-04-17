#include <QCoreApplication>
#include "sn_questions.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SN_Question question;
    question.setIntitule("qui a gagner la cdm 1998?");




    return a.exec();
}
