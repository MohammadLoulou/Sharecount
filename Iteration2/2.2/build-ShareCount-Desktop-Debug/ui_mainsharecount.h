/********************************************************************************
** Form generated from reading UI file 'mainsharecount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSHARECOUNT_H
#define UI_MAINSHARECOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainShareCount
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *mailConnexion;
    QLabel *label_3;
    QLineEdit *passwordConnexion;
    QDialogButtonBox *confirmationConnexion;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *mailInscription;
    QLabel *label_6;
    QLineEdit *passwordInscription;
    QLabel *label_7;
    QLineEdit *cPasswordInscription;
    QDialogButtonBox *confirmationInscription;
    QMenuBar *menubar;
    QMenu *menuInscription;
    QMenu *menuConnexion;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainShareCount)
    {
        if (MainShareCount->objectName().isEmpty())
            MainShareCount->setObjectName(QStringLiteral("MainShareCount"));
        MainShareCount->resize(1192, 747);
        centralwidget = new QWidget(MainShareCount);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 171, 158));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        mailConnexion = new QLineEdit(verticalLayoutWidget);
        mailConnexion->setObjectName(QStringLiteral("mailConnexion"));

        verticalLayout->addWidget(mailConnexion);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        passwordConnexion = new QLineEdit(verticalLayoutWidget);
        passwordConnexion->setObjectName(QStringLiteral("passwordConnexion"));

        verticalLayout->addWidget(passwordConnexion);

        confirmationConnexion = new QDialogButtonBox(verticalLayoutWidget);
        confirmationConnexion->setObjectName(QStringLiteral("confirmationConnexion"));
        confirmationConnexion->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(confirmationConnexion);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 0, 218, 212));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        mailInscription = new QLineEdit(verticalLayoutWidget_2);
        mailInscription->setObjectName(QStringLiteral("mailInscription"));

        verticalLayout_2->addWidget(mailInscription);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        passwordInscription = new QLineEdit(verticalLayoutWidget_2);
        passwordInscription->setObjectName(QStringLiteral("passwordInscription"));

        verticalLayout_2->addWidget(passwordInscription);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        cPasswordInscription = new QLineEdit(verticalLayoutWidget_2);
        cPasswordInscription->setObjectName(QStringLiteral("cPasswordInscription"));

        verticalLayout_2->addWidget(cPasswordInscription);

        confirmationInscription = new QDialogButtonBox(verticalLayoutWidget_2);
        confirmationInscription->setObjectName(QStringLiteral("confirmationInscription"));
        confirmationInscription->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(confirmationInscription);

        MainShareCount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainShareCount);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 22));
        menuInscription = new QMenu(menubar);
        menuInscription->setObjectName(QStringLiteral("menuInscription"));
        menuConnexion = new QMenu(menubar);
        menuConnexion->setObjectName(QStringLiteral("menuConnexion"));
        MainShareCount->setMenuBar(menubar);
        statusbar = new QStatusBar(MainShareCount);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainShareCount->setStatusBar(statusbar);

        menubar->addAction(menuInscription->menuAction());
        menubar->addAction(menuConnexion->menuAction());

        retranslateUi(MainShareCount);

        QMetaObject::connectSlotsByName(MainShareCount);
    } // setupUi

    void retranslateUi(QMainWindow *MainShareCount)
    {
        MainShareCount->setWindowTitle(QApplication::translate("MainShareCount", "MainShareCount", Q_NULLPTR));
        label->setText(QApplication::translate("MainShareCount", "Connexion", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainShareCount", "email : ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainShareCount", "Mot de Passe :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainShareCount", "email :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainShareCount", "Inscription", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainShareCount", "Mot de Passe : ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainShareCount", "Confirmation du mot de passe : ", Q_NULLPTR));
        menuInscription->setTitle(QApplication::translate("MainShareCount", "Inscription", Q_NULLPTR));
        menuConnexion->setTitle(QApplication::translate("MainShareCount", "Connexion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainShareCount: public Ui_MainShareCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSHARECOUNT_H
