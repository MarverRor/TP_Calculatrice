#include "Calculatrice.h"
#include "ui_Calculatrice.h"
#include <QDebug>
#include <QRegularExpression>
Calculatrice::Calculatrice(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculatrice)
{
    ui->lineEdit = findChild<QLineEdit*>("lineEdit");

    ui->setupUi(this);

    QPushButton *Numbutton[10]; // Tableau de pointeurs vers les boutons numériques

    for (int i = 0; i < 10; i++) {
        QString boutName = "PushButton" + QString::number(i); // Génère le nom du bouton
        Numbutton[i] = findChild<QPushButton*>(boutName); // Recherche et copie de l'objet bouton dans le tableau

        if (Numbutton[i]) {
            connect(Numbutton[i], SIGNAL(clicked()), this, SLOT(ChiffreClicked()));
        }
    }


    // Le code pour la connexion des boutons opération et la création du tableau des boutons opération.
    QString nomOperateur[7] = {"Plus", "Moins", "Multi", "Div", "Sqrt", "Inv", "Power2"};

    for (int i = 0; i < 7; i++) {
        QString boutName = "pushButton" + nomOperateur[i];
        OperateurButton[i] = findChild<QPushButton*>(boutName);

        if (OperateurButton[i]) {
            connect(OperateurButton[i], SIGNAL(clicked()), this, SLOT(OperateurClicked()));
        }
    }

}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::ChiffreClicked()
{
    QPushButton *senderButton = qobject_cast<QPushButton*>(sender());
       if (senderButton) {
           QString chiffre = senderButton->text();
           QString expression = ui->lineEdit->text();
           EtatCalculEnum etatActuel = m_calcul.EtatCalculGetconst();

           if (etatActuel == AcquisitionOperand1 || etatActuel == AcquisitionOperand2) {
               // Vous saisissez un opérande, ajoutez le chiffre à la fin
               ui->lineEdit->setText(expression + chiffre);
           } else {
               // Vous commencez un nouvel opérande, remplacez l'expression actuelle par le chiffre
               ui->lineEdit->setText(chiffre);
           }

           qDebug() << "Expression mise à jour: " << ui->lineEdit->text();
       }
       qDebug() << "Slot ChiffreClicked appelé.";
}

void Calculatrice::OperateurClicked()
{
    QPushButton *senderButton = qobject_cast<QPushButton*>(sender());
    if (senderButton) {
        QString operation = senderButton->text();

        // Obtenez l'état actuel
        EtatCalculEnum etatActuel = m_calcul.EtatCalculGetconst();

        if (etatActuel == AcquisitionOperand1) {
            // Saisie du premier opérande
            m_calcul.Operand1Set(ui->lineEdit->text().toDouble());
        } else if (etatActuel == OperationSaisie) {
            //
        } else if (etatActuel == AcquisitionOperand2) {
            //Saisie du deuxième opérande, mis à jour du résultat avec l'opération précédente
            m_calcul.Operand2Set(ui->lineEdit->text().toDouble());
            //Effectue le calcul ici en utilisant m_calcul
            //Stockage du résultat dans operand1 pour les calculs répétés
            double resultat = m_calcul.Calculate();
            m_calcul.Operand1Set(resultat);
            ui->lineEdit->setText(QString::number(resultat));
        }

        // Mis à jour de l'opération en cours
        m_calcul.OperationSet(operation);

        // Mis à jour de l'état
        m_calcul.EtatCalculSet(AcquisitionOperand2);

        // Réinitialisation du QLineEdit pour entrer le deuxième opérande
        ui->lineEdit->clear();

    }
    qDebug() << "première opérande : " << m_calcul.Operand1Getconst() << "seconde opérande : " << m_calcul.Operand2Getconst();
    qDebug() << "Slot OpérationClicked appelé.";

}


void Calculatrice::on_ButtonEgale_clicked()
{
    // Obtien l'état actuel
    EtatCalculEnum etatActuel = m_calcul.EtatCalculGetconst();

    if (etatActuel == AcquisitionOperand2) {
        // Saisie le deuxième opérande
        m_calcul.Operand2Set(ui->lineEdit->text().toDouble());

        // Effectue le calcul ici en utilisant m_calcul
        double resultat = m_calcul.Calculate();

        // Affiche le résultat dans le QLineEdit
        ui->lineEdit->setText(QString::number(resultat));

        // Met à jour l'état
        m_calcul.EtatCalculSet(ResultatAffiche);
 }

    qDebug() << "Slot EgaleClicked appelé.";
}



void Calculatrice::on_ButtonSigne_clicked()
{
    connect(ui->ButtonSigne, SIGNAL(clicked()), this, SLOT(on_ButtonSigne_clicked()));
    // Obtien le texte actuel dans QLineEdit
    QString expression = ui->lineEdit->text();

    // Convertis l'expression en double
    double nombre = expression.toDouble();

    // Inverse le signe du nombre en multipliant par -1
    double nombreInverse = -nombre;

    // Met à jour le QLineEdit avec le nouveau nombre
    ui->lineEdit->setText(QString::number(nombreInverse));
}


void Calculatrice::on_ButtonBack_clicked()
{
    connect(ui->ButtonBack, SIGNAL(clicked()), this, SLOT(on_ButtonBack_clicked()));
    QString expression = ui->lineEdit->text();

    // Vérifie si l'expression n'est pas vide avant de supprimer le dernier caractère
    if (!expression.isEmpty()) {
        expression.chop(1); // Supprime le dernier caractère
        ui->lineEdit->setText(expression); // Met à jour le contenu du QLineEdit
    }
qDebug() << "Slot ButtonBack appelé.";
}


void Calculatrice::on_ButtonClearAffich_clicked()
{
    connect(ui->ButtonClearAffich, SIGNAL(clicked()), this, SLOT(on_ButtonClearAffich_clicked()));
    // Utilise la méthode backspace pour effacer la dernière entrée
    ui->lineEdit->backspace();

    qDebug() << "Slot ButtonClearAffich appelé.";
}


void Calculatrice::on_ButtonClear_clicked()
{
    connect(ui->ButtonClear, SIGNAL(clicked()), this, SLOT(on_ButtonClear_clicked()));
     ui->lineEdit->clear(); // Efface complètement le contenu du QLineEdit
    qDebug() << "Slot ButtonClear appelé.";
}


void Calculatrice::on_ButtonMemClear_clicked()
{
    connect(ui->ButtonMemClear, SIGNAL(clicked()), this, SLOT(on_ButtonMemClear_clicked()));
     // Réinitialise les valeurs en mémoire de la calculatrice
     m_calcul.Operand1Set(0.0);
     m_calcul.Operand2Set(0.0);
     m_calcul.OperationSet("");

     qDebug() << "Slot ButtonMemClear appelé.";
}


void Calculatrice::on_ButtonMemRead_clicked()
{
    connect(ui->ButtonMemRead, SIGNAL(clicked()), this, SLOT(on_ButtonMemRead_clicked()));
}


void Calculatrice::on_ButtonMemSet_clicked()
{
    connect(ui->ButtonMemSet, SIGNAL(clicked()), this, SLOT(on_ButtonMemSet_clicked()));
}


void Calculatrice::on_ButtonMemPlus_clicked()
{
    connect(ui->ButtonMemPlus, SIGNAL(clicked()), this, SLOT(on_ButtonMemPlus_clicked()));
}


void Calculatrice::on_ButtonVirgule_clicked()
{
    // Obtien le texte actuel dans QLineEdit
    QString expression = ui->lineEdit->text();

    if (m_calcul.EtatCalculGetconst() == AcquisitionOperand1) {
        //  Saisie le premier opérande
        if (!expression.contains(QChar('.'))) {
            ui->lineEdit->setText(expression + ".");
        }
    } else if (m_calcul.EtatCalculGetconst() == OperationSaisie) {
        // Saisie le deuxième opérande
        ui->lineEdit->setText("0.");
    }
}

