/********************************************************************************
** Form generated from reading UI file 'paint.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_H
#define UI_PAINT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_9;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Paint)
    {
        if (Paint->objectName().isEmpty())
            Paint->setObjectName("Paint");
        Paint->resize(800, 600);
        action = new QAction(Paint);
        action->setObjectName("action");
        action_2 = new QAction(Paint);
        action_2->setObjectName("action_2");
        action_3 = new QAction(Paint);
        action_3->setObjectName("action_3");
        action_5 = new QAction(Paint);
        action_5->setObjectName("action_5");
        action_6 = new QAction(Paint);
        action_6->setObjectName("action_6");
        action_7 = new QAction(Paint);
        action_7->setObjectName("action_7");
        action_9 = new QAction(Paint);
        action_9->setObjectName("action_9");
        centralwidget = new QWidget(Paint);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 801, 561));
        Paint->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Paint);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menu_2);
        menu_3->setObjectName("menu_3");
        Paint->setMenuBar(menubar);
        statusbar = new QStatusBar(Paint);
        statusbar->setObjectName("statusbar");
        Paint->setStatusBar(statusbar);
        toolBar = new QToolBar(Paint);
        toolBar->setObjectName("toolBar");
        Paint->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu_2->addAction(action_3);
        menu_2->addAction(menu_3->menuAction());
        menu_2->addAction(action_9);
        menu_3->addAction(action_5);
        menu_3->addAction(action_6);
        menu_3->addAction(action_7);
        toolBar->addAction(action_6);
        toolBar->addAction(action_5);
        toolBar->addAction(action_7);
        toolBar->addAction(action_9);

        retranslateUi(Paint);

        QMetaObject::connectSlotsByName(Paint);
    } // setupUi

    void retranslateUi(QMainWindow *Paint)
    {
        Paint->setWindowTitle(QCoreApplication::translate("Paint", "Paint", nullptr));
        action->setText(QCoreApplication::translate("Paint", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("Paint", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("Paint", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_2->setShortcut(QCoreApplication::translate("Paint", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_3->setText(QCoreApplication::translate("Paint", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        action_5->setText(QCoreApplication::translate("Paint", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
#if QT_CONFIG(shortcut)
        action_5->setShortcut(QCoreApplication::translate("Paint", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_6->setText(QCoreApplication::translate("Paint", "\320\236\320\262\320\260\320\273", nullptr));
#if QT_CONFIG(shortcut)
        action_6->setShortcut(QCoreApplication::translate("Paint", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        action_7->setText(QCoreApplication::translate("Paint", "\320\240\320\276\320\274\320\261", nullptr));
#if QT_CONFIG(shortcut)
        action_7->setShortcut(QCoreApplication::translate("Paint", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_9->setText(QCoreApplication::translate("Paint", "\320\246\320\262\320\265\321\202", nullptr));
#if QT_CONFIG(tooltip)
        action_9->setToolTip(QCoreApplication::translate("Paint", "\320\246\320\262\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_9->setShortcut(QCoreApplication::translate("Paint", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("Paint", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Paint", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200", nullptr));
        menu_3->setTitle(QCoreApplication::translate("Paint", "\320\244\320\270\320\263\321\203\321\200\320\260", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Paint", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paint: public Ui_Paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
