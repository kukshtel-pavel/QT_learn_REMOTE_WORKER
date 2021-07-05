#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCursor>
#include "additional_window.h"
#include "info.h"

namespace RemWork {
class Widget;
void openSettingsWin();
void openInfoWin();

}

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void cursorPositionMover(int x, int y);     // change cursor position
    ~Widget();

private:
    RemWork::AdditWin *setWin;
    RemWork::InfoWin *infWin;
};

void openSettingsWin();
void openInfoWin();




#endif // WIDGET_H
