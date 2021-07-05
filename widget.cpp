#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QApplication>
#include <QLineEdit>
#include <QScreen>
#include "widget.h"
#include "info.h"


//https://ravesli.com/urok-6-osnovy-raboty-s-gui-v-qt5/#toc-5
//https://evileg.com/en/post/112/


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // GRID settings
    QGridLayout *grid = new QGridLayout(this);
    grid->setVerticalSpacing(15);
    grid->setHorizontalSpacing(10);

    // Get screen size
    QScreen *screen=QGuiApplication::primaryScreen ();
    QRect desktopScreen = screen->availableGeometry();
    const int screen_width = desktopScreen.width();
    const int screen_height = desktopScreen.height();

    int screen_width_min = 0;
    int screen_height_min = 0;

    // Start / Stop button
    QPushButton *startStop = new QPushButton("Start",this);
    grid->addWidget(startStop, 0, 1, 1, 1);
    startStop->setStyleSheet("QPushButton {background-color: #A3C1DA; color: grey;}");
    connect(startStop, &QPushButton::clicked, qApp, &QApplication::quit);

    // CLOSE button
    QPushButton *close = new QPushButton("close",this);
    grid->addWidget(close, 4, 2, 1, 1);
    connect(close, &QPushButton::clicked, qApp, &QApplication::quit);

    // INFO button
    QPushButton *info = new QPushButton("info",this);
    grid->addWidget(info, 4, 1, 1, 1);
    connect(info, &QPushButton::clicked, openInfoWin);

    // ABOUT button
    QPushButton *about = new QPushButton("settings",this);
    grid->addWidget(about, 4, 0, 1, 1);
    connect(about, &QPushButton::clicked, openSettingsWin);

    setLayout(grid);
}

Widget::~Widget()
{
    //delete this;
}

// open windows with SETTINGS MENU
void openSettingsWin()
{
    AdditWin *setWin = new AdditWin();
    setWin->resize(300,100);
    setWin->setAttribute(Qt::WA_DeleteOnClose);     // Makes Qt delete this widget when the widget has accepted the close event
    setWin->show();
};

// open windows with INFO MENU
void openInfoWin()
{
    InfoWin *infWin = new InfoWin();
    infWin->resize(300,100);
    infWin->setAttribute(Qt::WA_DeleteOnClose);     // Makes Qt delete this widget when the widget has accepted the close event
    infWin->show();
};


void Widget::cursorPositionMover(int x, int y)
{
    QCursor::setPos(QGuiApplication::primaryScreen(), x, y);
}
