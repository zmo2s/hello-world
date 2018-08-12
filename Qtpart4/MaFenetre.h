#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QLCDNumber>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre();

    private:
     QProgressBar *m_lcd;
     QSlider *m_slider;
     QPushButton *m_lci;
};

#endif
