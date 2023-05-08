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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainShareCount
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Accueil;
    QTextBrowser *textBrowser;
    QPushButton *InscriptionAcc;
    QPushButton *ConnexionAcc;
    QWidget *Inscription;
    QTextEdit *emailInscription;
    QTextEdit *mdpInscription;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QPushButton *Inscrit;
    QWidget *Connexion_2;
    QTextBrowser *seConnecter;
    QTextEdit *emailC;
    QTextEdit *mdpC;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QPushButton *Connexion;
    QWidget *Connectee;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuInscription;
    QMenu *menuConnexion;
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
        stackedWidget->setGeometry(QRect(0, 0, 1191, 721));
        Accueil = new QWidget();
        Accueil->setObjectName(QString::fromUtf8("Accueil"));
        textBrowser = new QTextBrowser(Accueil);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(310, 40, 491, 181));
        InscriptionAcc = new QPushButton(Accueil);
        InscriptionAcc->setObjectName(QString::fromUtf8("InscriptionAcc"));
        InscriptionAcc->setGeometry(QRect(880, 50, 80, 21));
        ConnexionAcc = new QPushButton(Accueil);
        ConnexionAcc->setObjectName(QString::fromUtf8("ConnexionAcc"));
        ConnexionAcc->setGeometry(QRect(880, 80, 80, 21));
        stackedWidget->addWidget(Accueil);
        Inscription = new QWidget();
        Inscription->setObjectName(QString::fromUtf8("Inscription"));
        emailInscription = new QTextEdit(Inscription);
        emailInscription->setObjectName(QString::fromUtf8("emailInscription"));
        emailInscription->setGeometry(QRect(470, 190, 121, 31));
        mdpInscription = new QTextEdit(Inscription);
        mdpInscription->setObjectName(QString::fromUtf8("mdpInscription"));
        mdpInscription->setGeometry(QRect(470, 240, 121, 31));
        textBrowser_2 = new QTextBrowser(Inscription);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(410, 40, 241, 61));
        textBrowser_3 = new QTextBrowser(Inscription);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(350, 190, 101, 31));
        textBrowser_4 = new QTextBrowser(Inscription);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(350, 240, 101, 31));
        Inscrit = new QPushButton(Inscription);
        Inscrit->setObjectName(QString::fromUtf8("Inscrit"));
        Inscrit->setGeometry(QRect(490, 430, 80, 21));
        stackedWidget->addWidget(Inscription);
        Connexion_2 = new QWidget();
        Connexion_2->setObjectName(QString::fromUtf8("Connexion_2"));
        seConnecter = new QTextBrowser(Connexion_2);
        seConnecter->setObjectName(QString::fromUtf8("seConnecter"));
        seConnecter->setGeometry(QRect(480, 80, 191, 71));
        emailC = new QTextEdit(Connexion_2);
        emailC->setObjectName(QString::fromUtf8("emailC"));
        emailC->setGeometry(QRect(520, 240, 111, 31));
        mdpC = new QTextEdit(Connexion_2);
        mdpC->setObjectName(QString::fromUtf8("mdpC"));
        mdpC->setGeometry(QRect(520, 290, 111, 31));
        textBrowser_6 = new QTextBrowser(Connexion_2);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(440, 250, 61, 21));
        textBrowser_7 = new QTextBrowser(Connexion_2);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(420, 290, 101, 21));
        Connexion = new QPushButton(Connexion_2);
        Connexion->setObjectName(QString::fromUtf8("Connexion"));
        Connexion->setGeometry(QRect(540, 360, 80, 21));
        stackedWidget->addWidget(Connexion_2);
        Connectee = new QWidget();
        Connectee->setObjectName(QString::fromUtf8("Connectee"));
        textEdit = new QTextEdit(Connectee);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(500, 140, 104, 70));
        stackedWidget->addWidget(Connectee);
        MainShareCount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainShareCount);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 20));
        menuInscription = new QMenu(menubar);
        menuInscription->setObjectName(QString::fromUtf8("menuInscription"));
        menuConnexion = new QMenu(menubar);
        menuConnexion->setObjectName(QString::fromUtf8("menuConnexion"));
        MainShareCount->setMenuBar(menubar);
        statusbar = new QStatusBar(MainShareCount);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainShareCount->setStatusBar(statusbar);

        menubar->addAction(menuInscription->menuAction());
        menubar->addAction(menuConnexion->menuAction());

        retranslateUi(MainShareCount);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainShareCount);
    } // setupUi

    void retranslateUi(QMainWindow *MainShareCount)
    {
        MainShareCount->setWindowTitle(QCoreApplication::translate("MainShareCount", "MainShareCount", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sharecount</p></body></html>", nullptr));
        InscriptionAcc->setText(QCoreApplication::translate("MainShareCount", "Inscription", nullptr));
        ConnexionAcc->setText(QCoreApplication::translate("MainShareCount", "Connexion", nullptr));
        emailInscription->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        mdpInscription->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Inscription</p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Email :</p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mot de passe :</p></body></html>", nullptr));
        Inscrit->setText(QCoreApplication::translate("MainShareCount", "S'inscrire", nullptr));
        seConnecter->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Se connecter</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Email</span></p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Mot de passe</span></p></body></html>", nullptr));
        Connexion->setText(QCoreApplication::translate("MainShareCount", "Connexion", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainShareCount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vous etes co</p></body></html>", nullptr));
        menuInscription->setTitle(QCoreApplication::translate("MainShareCount", "Inscription", nullptr));
        menuConnexion->setTitle(QCoreApplication::translate("MainShareCount", "Connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainShareCount: public Ui_MainShareCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSHARECOUNT_H
