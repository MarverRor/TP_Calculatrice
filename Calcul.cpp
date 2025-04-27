#include "Calcul.h"
#include <cmath>

Calcul::Calcul(QObject *parent) : QObject(parent), etat(AcquisitionOperand1)
{
    operand1 = 0.0;
    operand2 = 0.0;
    operation = "";
    resultat = 0.0;
}

Calcul::~Calcul() {}


void Calcul::EtatCalculSet(EtatCalculEnum etat) {
    this->etat = etat;
}

EtatCalculEnum Calcul::EtatCalculGetconst() const {
    return etat;
}

double Calcul::Operand1Getconst() const {
    return operand1;
}

void Calcul::Operand1Set(double value) {
    operand1 = value;
}

double Calcul::Operand2Getconst() const {
    return operand2;
}

void Calcul::Operand2Set(double value) {
    operand2 = value;
}

QString Calcul::OperationGetconst() const {
    return operation;
}

void Calcul::OperationSet(const QString &value) {
    operation = value;
}


double Calcul::Calculate() {
    if (operation == "+") {
        resultat = operand1 + operand2;
    } else if (operation == "-") {
        resultat = operand1 - operand2;
    } else if (operation == "x") {
        resultat = operand1 * operand2;
    } else if (operation == "/") {
        if (operand2 != 0) {
            resultat = operand1 / operand2;
        } else {
            // Gérez la division par zéro
            resultat = 0.0; // Par exemple
        }
    } else if (operation == "1/x") {
        if (operand1 != 0) {
            resultat = 1.0 / operand1;
        } else {
            // Gérez l'inverse de zéro
            resultat = 0.0; // Par exemple
        }
    } else if (operation == "x²") {
        resultat = operand1 * operand1;
    } else if (operation == "sqrt") {
        if (operand1 >= 0) {
            resultat = sqrt(operand1);
        } else {
            // Gérez la racine carrée d'un nombre négatif
            resultat = 0.0; // Par exemple
        }
    } else {
        resultat = 0.0; // Valeur par défaut si l'opérateur n'est pas pris en charge
    }

    return resultat;
}


