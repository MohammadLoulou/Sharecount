#ifndef MAINSHARECOUNT_H
#define MAINSHARECOUNT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainShareCount; }
QT_END_NAMESPACE

class MainShareCount : public QMainWindow
{
    Q_OBJECT

public:
    MainShareCount(QWidget *parent = nullptr);
    ~MainShareCount();

private slots:
    void on_confirmationInscription_accepted();

    void on_confirmationInscription_rejected();

    void on_confirmationConnexion_accepted();

    void on_confirmationConnexion_rejected();

private:
    Ui::MainShareCount *ui;
};
#endif // MAINSHARECOUNT_H
