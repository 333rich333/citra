/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load_File;
    QAction *action_Exit;
    QAction *action_Start;
    QAction *action_Pause;
    QAction *action_Stop;
    QAction *action_About;
    QAction *action_Popout_Window_Mode;
    QAction *action_Hotkeys;
    QAction *action_Configure;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Emulation;
    QMenu *menu_View;
    QMenu *menu_Help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1081, 730);
        QIcon icon;
        icon.addFile(QStringLiteral("src/pcafe/res/icon3_64x64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(true);
        action_Load_File = new QAction(MainWindow);
        action_Load_File->setObjectName(QStringLiteral("action_Load_File"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Start = new QAction(MainWindow);
        action_Start->setObjectName(QStringLiteral("action_Start"));
        action_Pause = new QAction(MainWindow);
        action_Pause->setObjectName(QStringLiteral("action_Pause"));
        action_Pause->setEnabled(false);
        action_Stop = new QAction(MainWindow);
        action_Stop->setObjectName(QStringLiteral("action_Stop"));
        action_Stop->setEnabled(false);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_Popout_Window_Mode = new QAction(MainWindow);
        action_Popout_Window_Mode->setObjectName(QStringLiteral("action_Popout_Window_Mode"));
        action_Popout_Window_Mode->setCheckable(true);
        action_Hotkeys = new QAction(MainWindow);
        action_Hotkeys->setObjectName(QStringLiteral("action_Hotkeys"));
        action_Configure = new QAction(MainWindow);
        action_Configure->setObjectName(QStringLiteral("action_Configure"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1081, 20));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Emulation = new QMenu(menubar);
        menu_Emulation->setObjectName(QStringLiteral("menu_Emulation"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Emulation->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Load_File);
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_Emulation->addAction(action_Start);
        menu_Emulation->addAction(action_Pause);
        menu_Emulation->addAction(action_Stop);
        menu_Emulation->addSeparator();
        menu_Emulation->addAction(action_Configure);
        menu_View->addAction(action_Popout_Window_Mode);
        menu_View->addAction(action_Hotkeys);
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);
        QObject::connect(action_Exit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(action_Configure, SIGNAL(triggered()), MainWindow, SLOT(OnConfigure()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Citra", 0));
        action_Load_File->setText(QApplication::translate("MainWindow", "Load file...", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "E&xit", 0));
        action_Start->setText(QApplication::translate("MainWindow", "&Start", 0));
        action_Pause->setText(QApplication::translate("MainWindow", "&Pause", 0));
        action_Stop->setText(QApplication::translate("MainWindow", "&Stop", 0));
        action_About->setText(QApplication::translate("MainWindow", "About Citra", 0));
        action_Popout_Window_Mode->setText(QApplication::translate("MainWindow", "Popout window", 0));
        action_Hotkeys->setText(QApplication::translate("MainWindow", "Configure &Hotkeys ...", 0));
        action_Configure->setText(QApplication::translate("MainWindow", "Configure ...", 0));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menu_Emulation->setTitle(QApplication::translate("MainWindow", "&Emulation", 0));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
