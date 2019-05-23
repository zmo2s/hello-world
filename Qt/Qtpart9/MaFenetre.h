#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QLCDNumber>
#include <QMessageBox>
#include <QInputDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>
class MaFenetre : public QWidget

{

    Q_OBJECT



    public:

    MaFenetre();



    public slots:

    void ouvrirDialogue();



    private:

 QPushButton *m_boutonDialogue;
 //QPushButton *m_boutonDialogue2;
 QFont police;


};

#endif
