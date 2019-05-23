#include <QApplication>

#include <QPushButton>



int main(int argc, char *argv[])

{

    QApplication app(argc, argv);

    QPushButton bouton("Salut les Zéros, la forme ?");
    QFont maPolice("Courier");
    bouton.setFont(maPolice);
    QIcon(QCoreApplication::applicationDirPath() + "/home/a/Test/pix.png");

    bouton.setIcon(QIcon("/home/a/Test/pix.png"));
    bouton.setFont(QFont("Comic Sans MS", 20, QFont::Bold, true));
    bouton.setCursor(Qt::PointingHandCursor);
     bouton.setToolTip("Pimp mon bouton !");

    bouton.show();



    return app.exec();

}
