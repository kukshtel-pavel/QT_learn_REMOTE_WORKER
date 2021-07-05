#ifndef ADDITIONAL_WINDOW_H
#define ADDITIONAL_WINDOW_H

#include <QWidget>


namespace RemWork {
class AdditWin;
}

class AdditWin : public QWidget
{
    Q_OBJECT

public:
    explicit AdditWin(QWidget *parent = nullptr);
    ~AdditWin();


};


#endif // ADDITIONAL_WINDOW_H
