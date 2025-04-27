#ifndef CALCUL_H
#define CALCUL_H
#include <QObject>
#include <QString>


enum EtatCalculEnum {
    CalculPasCommence,
    AcquisitionOperand1,
    OperationSaisie,
    AcquisitionOperand2,
    ResultatAffiche
};

class Calcul : public QObject
{
    Q_OBJECT
public:


    explicit Calcul(QObject *parent = nullptr);
    ~Calcul();

    void EtatCalculSet(EtatCalculEnum etat);
    EtatCalculEnum EtatCalculGetconst() const;
    double Operand1Getconst()const;
    void Operand1Set(double value);
    double Operand2Getconst() const;
    void Operand2Set(double value);
    QString OperationGetconst() const;
    void OperationSet(const QString &value);
    double Calculate();



private:

    double operand1;
    double operand2;
    QString operation;
    double resultat;
    EtatCalculEnum etat;

signals:

};

#endif // CALCUL_H
