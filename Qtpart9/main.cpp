
#include <QApplication>

#include <QTranslator>

#include <QLocale>

#include <QLibraryInfo>

#include "MaFenetre.h"





int main(int argc, char *argv[])

{

    QApplication app(argc, argv);



    QString locale = QLocale::system().name();

    QTranslator translator;

    translator.load(QString("qt_fr_BE") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));

    app.installTranslator(&translator);



    MaFenetre fenetre;

    fenetre.show();



    return app.exec();

}
