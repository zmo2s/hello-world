#include "MaFenetre.h"



MaFenetre::MaFenetre() : QWidget()

{



    setFixedSize(300,100);
   m_lci= new QPushButton("Reset", this);
    m_lci->setFont(QFont("Comic sans MS",10));

   m_lci->move(200,10);






    m_lcd= new QProgressBar(this);
    //m_lcd->text();
   m_lcd->move(50,20);

    m_slider= new QSlider(Qt::Horizontal, this);
    m_slider-> setGeometry(10 ,60,150,20);

       QObject::connect(m_lci,SIGNAL(clicked()),m_lcd,SLOT(reset()));

       QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_lcd,SLOT(setValue(int)));

}



