#include <QApplication>

#include <QLineEdit>

#include <QPushButton>

#include <QVBoxLayout>

#include <QFormLayout>


int main(int argc, char *argv[])

{

    QApplication app(argc, argv);


    QWidget fenetre;


    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom =new QLineEdit;
    QLineEdit *age = new QLineEdit;


    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("votre &nom ",nom);
    formLayout->addRow("votre &préénom", prenom);
    formLayout->addRow("votre a&ge", age);


    QVBoxLayout *layoutPrincipal  = new QVBoxLayout;
   layoutPrincipal->addLayout(formLayout);
       QPushButton *boutonQuitter = new QPushButton("Quitter");
       QWidget::connect(boutonQuitter, SIGNAL(clicked()), &app , SLOT(quit()));
       layoutPrincipal->addWidget(boutonQuitter);
       fenetre.setLayout(layoutPrincipal);
       fenetre.show();





    return app.exec();

}
