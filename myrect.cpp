#include "myrect.h"

void myrect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left)
        setPos(X()-10, y());

    if(event->key() == Qt::Key_Right)
        setPos(X()+10, y());

    if(event->key() == Qt::Key_Up)
        setPos(X(), y()-10);

    if(event->key() == Qt::Key_Down)
        setPos(X(), y()+10);
}
