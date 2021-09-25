// main.cpp

#include <QtGlobal>
#include <QCoreApplication>
#include <QtCore>
#include <QVariant>
#include <QDir>
#include <QDebug>

#include <iostream>
// using namespace std;

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    { //example 1
        QXlsx::Document doc( ":/after.xlsx" );
        doc.load();
        doc.write(1,1, "HELLO EXCEL WORLD");
        // doc.save();
        doc.saveAs( "before2.xlsx" );
    }

    { //example 2
        QXlsx::Document doc( ":/before.xlsx" );
        doc.load();
        doc.write(1,1, "HELLO EXCEL WORLD");
        doc.saveAs( "after2.xlsx" );
    }

    return 0;
}
