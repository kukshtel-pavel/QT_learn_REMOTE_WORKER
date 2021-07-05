#ifndef INFO_H
#define INFO_H

#include <QWidget>


namespace RemWork {
class InfoWin;
}

class InfoWin : public QWidget
{
    Q_OBJECT

public:
    explicit InfoWin(QWidget *parent = nullptr);
    ~InfoWin();


};


#endif // INFO_H
