#include <QGridLayout>
#include <QPushButton>
#include <QApplication>
#include <QLabel>
#include "info.h"



InfoWin::InfoWin(QWidget *parent)
    : QWidget(parent)
{
    // GRID settings
    QGridLayout *grid = new QGridLayout(this);
    grid->setVerticalSpacing(15);
    grid->setHorizontalSpacing(10);

    // RANDOM PAUSE INTERVAL
    QLabel *title = new QLabel("This project was created just for FUN ! \n My GitHub ... \n My LinkedIn ...", this);
    grid->addWidget(title, 1, 0, 1, 1);
    title->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    // CLOSE button
    QPushButton *close = new QPushButton("close",this);
    grid->addWidget(close, 4, 2, 1, 1);
    //connect(close, &QPushButton::clicked, this, &AdditWin::~AdditWin());

    setLayout(grid);
}

InfoWin::~InfoWin()
{
}
