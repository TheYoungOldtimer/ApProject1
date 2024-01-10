#include <QCoreApplication>

#include "file.h"
#include "client.h"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <array>
#include <string>
#include <QString>

using namespace std;


int main()
{
    //QCoreApplication a(argc, argv);
    book obj1("math","Armin sultani",12);
        QJsonObject book1;
        book1.insert("name", obj1.get_name().c_str());
        book1.insert("price", obj1.get_price());
        book1.insert("writer", obj1.get_writer().c_str());
        QJsonDocument Doc;
        file::append_toa_jfile(book1,Doc,"C:/Users/armin.DESKTOP-R1F9757/OneDrive/Documents/AP/Source/Socket_JSON/book.json");



        book obj2("scince","aida soltani", 15);
        QJsonObject book2;
        book2.insert("name", obj2.get_name().c_str());
        book2.insert("price", obj2.get_price());
        book2.insert("writer", obj2.get_writer().c_str());
        file::append_toa_jfile(book2,Doc,"C:/Users/armin.DESKTOP-R1F9757/OneDrive/Documents/AP/Source/Socket_JSON/book.json");



    //return a.exec();
}
