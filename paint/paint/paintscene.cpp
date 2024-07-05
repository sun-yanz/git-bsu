#include "paintscene.h"
#include "romb.h"
#include "square.h"
#include "oval.h"
#include "paint.h"

paintScene::paintScene(QObject *parent, QColor& color_p/*Array<Figure*> & _vector*/): c(color_p)/*, o1(_vector)*/ {}
paintScene::paintScene(QObject *parent) : QGraphicsScene(parent), c(Qt::red) {}

paintScene::~paintScene() {}

int paintScene::typeFigure() const
{
    return m_typeFigure;
}

void paintScene::setTypeFigure(const int type)
{
    m_typeFigure = type;
}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    /* Устанавливаем конечную координату положения мыши
     * в текущую отрисовываемую фигуру
     * */
    tempFigure->setEndPoint(event->scenePos());
    /* Обновляем содержимое сцены,
     * необходимо для устранения артефактов при отрисовке фигур
     * */
    this->update(QRectF(0,0,this->width(), this->height()));
}

void paintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    switch (m_typeFigure) {
    case SquareType: {
        // Создаем объект квадрата и устанавливаем его положение
        Square *item = new Square(event->scenePos(),c);
        item->setPos(event->pos());
        tempFigure = item;  // Устанавливаем временную фигуру как созданный квадрат
        break;
    }
    case RombType: {
        // Создаем объект ромба и устанавливаем его положение
        Romb *item = new Romb(event->scenePos(),c);
        item->setPos(event->pos());
        tempFigure = item;  // Устанавливаем временную фигуру как созданный ромб
        break;
    }
    case OvalType:{
        // Создаем объект овала и устанавливаем его положение
        Figure *item = new Oval(event->scenePos(),c);
        item->setPos(event->pos());
        tempFigure = item;  // Устанавливаем временную фигуру как созданный овал
        break;
    }
    default:{
        // Если тип фигуры не определен, создаем квадрат по умолчанию и устанавливаем его положение
        Square *item = new Square(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;  // Устанавливаем временную фигуру как созданный квадрат
        break;
    }
    }
    this->addItem(tempFigure);  // Добавляем временную фигуру на сцену
}

/*void paintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    // При нажатии кнопки мыши отрисовываем эллипс
    addEllipse(event->scenePos().x() - 5, event->scenePos().y() - 5, 5, 5, QPen(Qt::NoPen), QBrush(Qt::black));
    // Сохраняем координаты точки нажатия
    previousPoint = event->scenePos();
}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    // Отрисовываем линии с использованием предыдущей координаты
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::black,5,Qt::SolidLine,Qt::RoundCap));
    // Обновляем данные о предыдущей координате
    previousPoint = event->scenePos();
}*/
