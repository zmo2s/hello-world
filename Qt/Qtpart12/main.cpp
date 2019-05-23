#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include "FenPrincipale.h"
#include <QtWebKit>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // Traduction des cha�nes pr�d�finies par Qt dans notre langue
    QString locale = QLocale::system().name();
    QTranslator translator;
    translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    app.installTranslator(&translator);

    // Ouverture de la fen�tre principale du navigateur
    FenPrincipale principale;
    principale.show();

    return app.exec();
}
