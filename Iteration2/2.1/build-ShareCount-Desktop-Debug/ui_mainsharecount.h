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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainShareCount
{
public:
    QAction *actionInscription;
    QAction *actionConnexion;
    QAction *actionDeconnexion;
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
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *mailInscription;
    QLabel *label_6;
    QLineEdit *passwordInscription;
    QLabel *label_7;
    QLineEdit *cPasswordInscription;
    QDialogButtonBox *confirmationInscription;
    QLabel *label_8;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QMenu *menuInscription;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainShareCount)
    {
        if (MainShareCount->objectName().isEmpty())
            MainShareCount->setObjectName(QStringLiteral("MainShareCount"));
        MainShareCount->resize(1194, 785);
        actionInscription = new QAction(MainShareCount);
        actionInscription->setObjectName(QStringLiteral("actionInscription"));
        actionConnexion = new QAction(MainShareCount);
        actionConnexion->setObjectName(QStringLiteral("actionConnexion"));
        actionDeconnexion = new QAction(MainShareCount);
        actionDeconnexion->setObjectName(QStringLiteral("actionDeconnexion"));
        centralwidget = new QWidget(MainShareCount);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 221, 158));
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
        confirmationConnexion->setCenterButtons(true);

        verticalLayout->addWidget(confirmationConnexion);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 160, 221, 212));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

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
        confirmationInscription->setCenterButtons(true);

        verticalLayout_2->addWidget(confirmationInscription);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 0, 171, 41));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(420, 80, 256, 192));
        MainShareCount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainShareCount);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1194, 22));
        menuInscription = new QMenu(menubar);
        menuInscription->setObjectName(QStringLiteral("menuInscription"));
        MainShareCount->setMenuBar(menubar);
        statusbar = new QStatusBar(MainShareCount);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainShareCount->setStatusBar(statusbar);

        menubar->addAction(menuInscription->menuAction());
        menuInscription->addAction(actionInscription);
        menuInscription->addSeparator();
        menuInscription->addSeparator();
        menuInscription->addAction(actionConnexion);
        menuInscription->addSeparator();
        menuInscription->addAction(actionDeconnexion);

        retranslateUi(MainShareCount);

        QMetaObject::connectSlotsByName(MainShareCount);
    } // setupUi

    void retranslateUi(QMainWindow *MainShareCount)
    {
        MainShareCount->setWindowTitle(QApplication::translate("MainShareCount", "MainShareCount", Q_NULLPTR));
        actionInscription->setText(QApplication::translate("MainShareCount", "Inscription", Q_NULLPTR));
        actionConnexion->setText(QApplication::translate("MainShareCount", "Connexion", Q_NULLPTR));
        actionDeconnexion->setText(QApplication::translate("MainShareCount", "Deconnexion", Q_NULLPTR));
        label->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic; text-decoration: underline; color:#cc0000;\">Connexion</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" text-decoration: underline;\">email : </span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" text-decoration: underline;\">Mot de Passe :</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic; text-decoration: underline; color:#cc0000;\">Inscription</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" text-decoration: underline;\">email :</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" text-decoration: underline;\">Mot de Passe : </span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" text-decoration: underline;\">Confirmation du mot de passe : </span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainShareCount", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline; color:#204a87;\">SHARECOUNT </span></p></body></html>", Q_NULLPTR));
        menuInscription->setTitle(QApplication::translate("MainShareCount", "Comptes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainShareCount: public Ui_MainShareCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSHARECOUNT_H
