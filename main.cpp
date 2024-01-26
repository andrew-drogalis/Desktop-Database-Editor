#include "pierpontmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QFont font = qApp->font();
    //font.setPixelSize(10);
    //qApp->setFont(font);

    PierpontMain w;
    w.show();
    return a.exec();
}
