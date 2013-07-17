#ifndef MOOZ_H
#define MOOZ_H

#include <QMainWindow>

namespace Ui {
class MOOZ;
}

class MOOZ : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MOOZ(QWidget *parent = 0);
    ~MOOZ();
    
private:
    Ui::MOOZ *ui;
};

#endif // MOOZ_H
