/********************************************************************************
** Form generated from reading UI file 'mainsharecount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSHARECOUNT_H
#define UI_MAINSHARECOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainShareCount
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Accueil;
    QPushButton *InscriptionAcc;
    QPushButton *ConnexionAcc;
    QLabel *label;
    QWidget *Inscription;
    QTextEdit *emailInscription;
    QTextEdit *mdpInscription;
    QPushButton *Inscrit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *returnInsc;
    QTextEdit *cMdpInscription;
    QLabel *label_8;
    QPushButton *cleanIns;
    QWidget *Connexion_2;
    QTextEdit *emailC;
    QTextEdit *mdpC;
    QPushButton *Connexion;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *returnCo;
    QPushButton *cleanCo;
    QWidget *Connectee;
    QLabel *label_9;
    QPushButton *createCagnotte;
    QPushButton *deconnexion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainShareCount)
    {
        if (MainShareCount->objectName().isEmpty())
            MainShareCount->setObjectName(QString::fromUtf8("MainShareCount"));
        MainShareCount->resize(1192, 747);
        centralwidget = new QWidget(MainShareCount);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, 20, 1191, 721));
        Accueil = new QWidget();
        Accueil->setObjectName(QString::fromUtf8("Accueil"));
        InscriptionAcc = new QPushButton(Accueil);
        InscriptionAcc->setObjectName(QString::fromUtf8("InscriptionAcc"));
        InscriptionAcc->setGeometry(QRect(880, 50, 80, 21));
        ConnexionAcc = new QPushButton(Accueil);
        ConnexionAcc->setObjectName(QString::fromUtf8("ConnexionAcc"));
        ConnexionAcc->setGeometry(QRect(880, 80, 80, 21));
        label = new QLabel(Accueil);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 50, 531, 191));
        stackedWidget->addWidget(Accueil);
        Inscription = new QWidget();
        Inscription->setObjectName(QString::fromUtf8("Inscription"));
        emailInscription = new QTextEdit(Inscription);
        emailInscription->setObjectName(QString::fromUtf8("emailInscription"));
        emailInscription->setGeometry(QRect(230, 150, 501, 31));
        mdpInscription = new QTextEdit(Inscription);
        mdpInscription->setObjectName(QString::fromUtf8("mdpInscription"));
        mdpInscription->setGeometry(QRect(230, 240, 501, 31));
        Inscrit = new QPushButton(Inscription);
        Inscrit->setObjectName(QString::fromUtf8("Inscrit"));
        Inscrit->setGeometry(QRect(660, 430, 80, 21));
        label_2 = new QLabel(Inscription);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 20, 221, 71));
        label_3 = new QLabel(Inscription);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 110, 61, 31));
        label_4 = new QLabel(Inscription);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 200, 141, 21));
        returnInsc = new QPushButton(Inscription);
        returnInsc->setObjectName(QString::fromUtf8("returnInsc"));
        returnInsc->setGeometry(QRect(230, 430, 89, 21));
        cMdpInscription = new QTextEdit(Inscription);
        cMdpInscription->setObjectName(QString::fromUtf8("cMdpInscription"));
        cMdpInscription->setGeometry(QRect(230, 330, 501, 31));
        label_8 = new QLabel(Inscription);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(360, 290, 261, 31));
        cleanIns = new QPushButton(Inscription);
        cleanIns->setObjectName(QString::fromUtf8("cleanIns"));
        cleanIns->setGeometry(QRect(440, 430, 89, 21));
        stackedWidget->addWidget(Inscription);
        Connexion_2 = new QWidget();
        Connexion_2->setObjectName(QString::fromUtf8("Connexion_2"));
        emailC = new QTextEdit(Connexion_2);
        emailC->setObjectName(QString::fromUtf8("emailC"));
        emailC->setGeometry(QRect(270, 150, 451, 31));
        mdpC = new QTextEdit(Connexion_2);
        mdpC->setObjectName(QString::fromUtf8("mdpC"));
        mdpC->setGeometry(QRect(270, 290, 451, 31));
        Connexion = new QPushButton(Connexion_2);
        Connexion->setObjectName(QString::fromUtf8("Connexion"));
        Connexion->setGeometry(QRect(640, 360, 80, 21));
        label_5 = new QLabel(Connexion_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 20, 221, 51));
        label_6 = new QLabel(Connexion_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(456, 110, 61, 31));
        label_7 = new QLabel(Connexion_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 250, 131, 31));
        returnCo = new QPushButton(Connexion_2);
        returnCo->setObjectName(QString::fromUtf8("returnCo"));
        returnCo->setGeometry(QRect(270, 360, 89, 21));
        cleanCo = new QPushButton(Connexion_2);
        cleanCo->setObjectName(QString::fromUtf8("cleanCo"));
        cleanCo->setGeometry(QRect(450, 360, 89, 21));
        stackedWidget->addWidget(Connexion_2);
        Connectee = new QWidget();
        Connectee->setObjectName(QString::fromUtf8("Connectee"));
        label_9 = new QLabel(Connectee);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 0, 201, 51));
        createCagnotte = new QPushButton(Connectee);
        createCagnotte->setObjectName(QString::fromUtf8("createCagnotte"));
        createCagnotte->setGeometry(QRect(50, 60, 121, 25));
        deconnexion = new QPushButton(Connectee);
        deconnexion->setObjectName(QString::fromUtf8("deconnexion"));
        deconnexion->setGeometry(QRect(828, 10, 91, 25));
        stackedWidget->addWidget(Connectee);
        MainShareCount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainShareCount);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 22));
        MainShareCount->setMenuBar(menubar);
        statusbar = new QStatusBar(MainShareCount);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainShareCount->setStatusBar(statusbar);

        retranslateUi(MainShareCount);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainShareCount);
    } // setupUi

    void retranslateUi(QMainWindow *MainShareCount)
    {
        MainShareCount->setWindowTitle(QCoreApplication::translate("MainShareCount", "MainShareCount", nullptr));
        InscriptionAcc->setText(QCoreApplication::translate("MainShareCount", "Inscription", nullptr));
        ConnexionAcc->setText(QCoreApplication::translate("MainShareCount", "Connexion", nullptr));
        label->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:72pt; font-weight:600; font-style:italic; text-decoration: underline; color:#204a87;\">ShareCount</span></p></body></html>", nullptr));
        emailInscription->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        mdpInscription->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        Inscrit->setText(QCoreApplication::translate("MainShareCount", "S'inscrire", nullptr));
        label_2->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; text-decoration: underline; color:#cc0000;\">Inscription :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#cc0000;\">Email :</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#cc0000;\">Mot De Passe :</span></p></body></html>", nullptr));
        returnInsc->setText(QCoreApplication::translate("MainShareCount", "Retour", nullptr));
        label_8->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#cc0000;\">Confirmation Mot De Passe : </span></p></body></html>", nullptr));
        cleanIns->setText(QCoreApplication::translate("MainShareCount", "Effacer", nullptr));
        Connexion->setText(QCoreApplication::translate("MainShareCount", "Connexion", nullptr));
        label_5->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; text-decoration: underline; color:#cc0000;\">Connexion : </span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#cc0000;\">Email : </span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#cc0000;\">Mot De Passe :</span></p></body></html>", nullptr));
        returnCo->setText(QCoreApplication::translate("MainShareCount", "Retour", nullptr));
        cleanCo->setText(QCoreApplication::translate("MainShareCount", "Effacer", nullptr));
        label_9->setText(QCoreApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:600; text-decoration: underline; color:#cc0000;\">Bienvenue !</span></p></body></html>", nullptr));
        createCagnotte->setText(QCoreApplication::translate("MainShareCount", "Creer Cagnotte", nullptr));
        deconnexion->setText(QCoreApplication::translate("MainShareCount", "deconnexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainShareCount: public Ui_MainShareCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSHARECOUNT_H
