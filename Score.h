#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>


class Score :  public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    QString getScore();
    int score;
    void razScore();

};

#endif // SCORE_H
