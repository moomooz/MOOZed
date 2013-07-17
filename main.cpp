#include "mooz.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MOOZ w;
    w.show();
    
    return a.exec();
}
