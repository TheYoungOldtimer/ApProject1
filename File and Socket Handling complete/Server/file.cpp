#include "file.h"

#include <string>
#include <iostream>

#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <array>

using namespace std;

file::file()
{
}

void file::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path)
{
    int flag = 0;
    QJsonDocument jsonOrg;
    QFile file(path);                    // json file
    if (!file.open(QIODevice::ReadOnly)) // read json content
    {
        // open file error ...
        cout << "File not open";
    }
    else
        jsonOrg = QJsonDocument::fromJson(file.readAll());
    file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry : arrLog)
    {
        const auto obj2 = entry.toObject();
        if (obj2["name"] == obj["name"])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        arrLog.push_back(obj);
        doc.setArray(arrLog);

        // doc.setObject(obj);
        QByteArray bytes = doc.toJson(QJsonDocument::Indented);

        if (file.open(QIODevice::WriteOnly))
        {
            QTextStream iStream(&file);
            iStream.setCodec("utf-8");
            iStream << bytes;
            file.close();
        }
        else
        {
            cout << "file open failed: " << path.toStdString() << endl;
        }
    }
}
void file::delete_from_jfile(QJsonObject obj, QJsonDocument doc, QString path)
{
    QJsonDocument jsonOrg;
    QFile file(path);                    // json file
    if (!file.open(QIODevice::ReadOnly)) // read json content
    {
        // open file error ...
        cout << "File not open";
    }
    else
        jsonOrg = QJsonDocument::fromJson(file.readAll());
    file.close();

    QJsonArray arr = jsonOrg.array();

    QJsonArray newarr;
    // Searching in the list
    for (const auto entry : arr)
    {
        const auto obj2 = entry.toObject();
        if (obj2 != obj)
        {
            newarr.append(obj2);
        }
    }
    arr.empty();
    doc.setArray(arr);
    doc.setArray(newarr);

    // doc.setObject(obj);
    QByteArray bytes = doc.toJson(QJsonDocument::Indented);

    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream iStream(&file);
        iStream.setCodec("utf-8");
        iStream << bytes;
        file.close();
    }
    else
    {
        cout << "file open failed: " << path.toStdString() << endl;
    }
}
