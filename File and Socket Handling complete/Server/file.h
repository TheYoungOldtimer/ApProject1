#ifndef FILE_H
#define FILE_H
#include <QJsonDocument>
#include <string>
using namespace std;
class book
{
private:
    int price;
    string name;
    string writer;

public:
    book(string name, string writer, int price)
    {
        this->name = name;
        this->writer = writer;
        this->price = price;
    }
    string get_name() { return name; }
    string get_writer() { return writer; }
    int get_price() { return price; }
};

class file
{
public:
    file();
    static void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);
    static void delete_from_jfile(QJsonObject obj, QJsonDocument doc, QString path);
};

#endif // FILE_H
