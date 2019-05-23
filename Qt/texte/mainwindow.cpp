#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_lineEdit_editingFinished()
{
      QString input = ui->lineEdit->text();

      QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL");
      db.setHostName("127.0.0.1");

      db.setUserName("root");

      db.setPassword("");

      db.setDatabaseName("qteste");

      if(db.open())

      {

          cout << "Vous êtes maintenant connecté à " << endl;



      }

      else

      {

          cout << "La connexion a échouée, désolé" << endl;

      }
      string userid, username,usertown;
      QSqlQuery mysqlquery;
      mysqlquery.exec("SELECT * FROM users" );
      if(mysqlquery.size()>0)
      {
      while(mysqlquery.next())
      {
          userid=mysqlquery.value("id").toString().toUtf8().constData();
          username=mysqlquery.value("name").toString().toUtf8().constData();
          usertown=mysqlquery.value("town").toString().toUtf8().constData();

          cout << userid << "-" << username <<"-"<< usertown <<endl;
      }
      }
      else { cout << "dans ton cul " << endl;}

      //mysqlquery.exec("INSERT INTO users (id, name, town) "
        //          "VALUES (1002, 'Thad Beaumont', 65000)");
      mysqlquery.prepare("INSERT INTO users (id, name, town) "
                      "VALUES (:id, :name , :town)");
        mysqlquery.bindValue(":id", 1032);
        mysqlquery.bindValue(":name",  input);
        mysqlquery.bindValue(":town", 65000);
        mysqlquery.exec();

}

MainWindow::~MainWindow()
{
    delete ui;
}





