#include "textdisplay.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextDisplay w;
    w.show();

    return a.exec();
}
