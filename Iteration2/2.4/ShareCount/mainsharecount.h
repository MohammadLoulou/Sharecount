#ifndef MAINSHARECOUNT_H
#define MAINSHARECOUNT_H
#include "db.h"
#include "compte.h"
#include "cagnotte.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainShareCount; }
QT_END_NAMESPACE

class MainShareCount : public QMainWindow
{
    Q_OBJECT

public:
    MainShareCount(db&, QWidget *parent = nullptr);
    ~MainShareCount();

private slots:
    /**
     * @brief cleanInscription nettoie le formulaire d'inscription
     */
    void cleanInscription();
    /**
     * @brief cleanConnexion nettoie
     */
    void cleanConnexion();
    void on_InscriptionAcc_clicked();
    void on_ConnexionAcc_clicked();
    void on_Inscrit_clicked();
    void on_Connexion_clicked();
    void on_Cagnotte_clicked();

    void on_returnInsc_clicked();

    void on_returnCo_clicked();

    void on_cleanIns_clicked();

    void on_cleanCo_clicked();

    void on_deconnexion_clicked();

    void on_boutonCagnotte_clicked();

    void on_createCagnotte_clicked();

    void on_CagnotteReturn_clicked();

    void on_goFactures_clicked();

    void on_FactureReturn_clicked();

    void on_FactureBox_accepted();

    void on_FactureBox_rejected();

    void on_SuppCagnotte_clicked();

    void on_creerCagnotte_clicked();

    void on_accederCagnotte_clicked();

private:
    db &bdd;
    Ui::MainShareCount *ui;
    Compte compte;
    Cagnotte cagnotte;
};
#endif // MAINSHARECOUNT_H
