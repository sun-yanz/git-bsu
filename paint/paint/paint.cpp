#include "paint.h"
#include "ui_paint.h"
#include <QColorDialog>
#include "mas.h"
#include "paintscene.h"

Paint::Paint(QWidget *parent) :
    QMainWindow(parent),
    color(Qt::green),  // Исходно задаем зеленый цвет
    ui(new Ui::Paint)
{
    ui->setupUi(this);
    scene = new paintScene(parent, color);  // Создаем сцену с родительским виджетом и начальным цветом
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);                // Устанавливаем сглаживание
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);   // Отключаем скроллбар по вертикали
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // Отключаем скроллбар по горизонтали

    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &Paint::slotTimer);
    timer->start(100);  // Запускаем таймер с интервалом 100 мс
}

Paint::~Paint()
{
    delete ui;
}

void Paint::slotTimer()
{
    timer->stop();
    scene->setSceneRect(0,0, ui->graphicsView->width() - 20, ui->graphicsView->height() - 20);  // Устанавливаем прямоугольник сцены в пределах виджета
}

void Paint::resizeEvent(QResizeEvent *event)
{
    timer->start(100);  // При изменении размера виджета запускаем таймер
    QWidget::resizeEvent(event);
}

void Paint::on_action_5_triggered()
{
    scene->setTypeFigure(paintScene::SquareType);  // Устанавливаем тип фигуры в сцене на квадрат
}

void Paint::on_action_6_triggered()
{
    scene->setTypeFigure(paintScene::OvalType);  // Устанавливаем тип фигуры в сцене на овал
}

void Paint::on_action_7_triggered()
{
    scene->setTypeFigure(paintScene::RombType);  // Устанавливаем тип фигуры в сцене на ромб
}

void Paint::on_action_9_triggered()
{
    color = QColorDialog::getColor(Qt::black, this);  // Открываем диалог выбора цвета и сохраняем выбранный цвет
    scene->c = color;  // Передаем выбранный цвет в сцену
}
