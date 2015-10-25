#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsPixmapItem>

class myrect : public QGraphicsPixmapItem{
public :
   myrect();
   void keyPressEvent(QKeyEvent* event);//envent object contain the information of key which was pressed.}
};

myrect::myrect(){setPixmap(QPixmap(":/images/bird.png"));}

void myrect::keyPressEvent(QKeyEvent* event){
    if(event->key() == Qt::Key_Left)
        setPos(x()-10, y());

    if(event->key() == Qt::Key_Right)
        setPos(x()+10, y());

    if(event->key() == Qt::Key_Up)
        setPos(x(), y()-10);

    if(event->key() == Qt::Key_Down)
        setPos(x(), y()+10);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsView* view;

    //create scene
    QGraphicsScene* scene;
    scene = new QGraphicsScene();

    //create item
    myrect* item = new myrect();

    //set the item focusable
    item->setFlag(QGraphicsItem::ItemIsFocusable);
    item->setFocus();

    //add the item in the scene
    scene->addItem(item);

    //create view to visualize the scene
    view = new QGraphicsView(scene);



    //show the view
    view->show();


    return a.exec();
}
