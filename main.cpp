#include <QApplication>
#include <QMediaPlayer>

#include"Game.h"

#include "Control.h"


Game *game;
Control *control;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    control = new Control;
    //control->afficheMainMenu();
    control->start();

    QMediaPlayer * music= new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sons/Chocolate.mp3"));
    music->play();


    return a.exec();

}



