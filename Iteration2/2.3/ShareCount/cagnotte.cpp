#include "cagnotte.h"
#include "db.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

Cagnotte::Cagnotte()
{

}

void Cagnotte::augmenterCagnotte(Compte compte, double montant)
{
    printf("c");
    if(compte.getArgent() > montant)
    {
        printf("a");
        compte.setArgent(compte.getArgent()-montant);
        QSqlQuery query(db::dataBase);
        query.exec(QString::fromStdString(("INSERT VALUES('"+std::to_string(montant)+"','"+compte.getMail()+"') INTO cagnotte;")));
    }
}

