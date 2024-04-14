// Copyright 2024, Andrew Drogalis
// GNU License

#include "pierpontmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PierpontMain w;
    w.show();
    return a.exec();
}
