#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include "calcul.h"
#include <QObject>
#include <QPushButton>
#include <QMainWindow>
#include <QString>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculatrice; }
QT_END_NAMESPACE

class Calculatrice : public QMainWindow
{
    Q_OBJECT

public:
    Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private slots:

    void ChiffreClicked();
    void OperateurClicked();
    void on_ButtonEgale_clicked();
    void on_ButtonVirgule_clicked();
    void on_ButtonSigne_clicked();
    void on_ButtonBack_clicked();
    void on_ButtonClearAffich_clicked();
    void on_ButtonClear_clicked();
    void on_ButtonMemSet_clicked();
    void on_ButtonMemRead_clicked();
    void on_ButtonMemPlus_clicked();
    void on_ButtonMemClear_clicked();



private:

    Calcul m_calcul; // Composition d'un objet Calcul
    QString operationEnCours;
    QPushButton *Numbutton[10];
    QPushButton *OperateurButton[7];
    QLineEdit *lineEdit;
    Ui::Calculatrice *ui;
};
#endif // CALCULATRICE_H
