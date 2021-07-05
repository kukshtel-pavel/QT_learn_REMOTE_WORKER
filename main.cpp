#include <QApplication>
#include "widget.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    window.setWindowTitle("RemoteWorker");


    //window.cursorPositionMover(window.screen_width, window.screen_height);
    /*window.cursorPositionMover(10, 10);
    window.cursorPositionMover(20, 20);

    window.cursorPositionMover(40, 40);
    window.cursorPositionMover(50, 50);
    window.cursorPositionMover(60, 60);
    window.cursorPositionMover(70, 70);
    window.cursorPositionMover(80, 80);
    window.cursorPositionMover(90, 90);
    */
    window.show();



    return app.exec();
}
