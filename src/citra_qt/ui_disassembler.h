/********************************************************************************
** Form generated from reading UI file 'disassembler.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISASSEMBLER_H
#define UI_DISASSEMBLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_step;
    QPushButton *button_pause;
    QPushButton *button_continue;
    QPushButton *pushButton;
    QPushButton *button_breakpoint;
    QTreeView *treeView;

    void setupUi(QDockWidget *DockWidget)
    {
        if (DockWidget->objectName().isEmpty())
            DockWidget->setObjectName(QStringLiteral("DockWidget"));
        DockWidget->resize(430, 401);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_step = new QPushButton(dockWidgetContents);
        button_step->setObjectName(QStringLiteral("button_step"));

        horizontalLayout->addWidget(button_step);

        button_pause = new QPushButton(dockWidgetContents);
        button_pause->setObjectName(QStringLiteral("button_pause"));

        horizontalLayout->addWidget(button_pause);

        button_continue = new QPushButton(dockWidgetContents);
        button_continue->setObjectName(QStringLiteral("button_continue"));

        horizontalLayout->addWidget(button_continue);

        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        button_breakpoint = new QPushButton(dockWidgetContents);
        button_breakpoint->setObjectName(QStringLiteral("button_breakpoint"));

        horizontalLayout->addWidget(button_breakpoint);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(dockWidgetContents);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setAlternatingRowColors(true);
        treeView->setIndentation(20);
        treeView->setRootIsDecorated(false);
        treeView->header()->setVisible(false);

        verticalLayout->addWidget(treeView);

        DockWidget->setWidget(dockWidgetContents);

        retranslateUi(DockWidget);

        QMetaObject::connectSlotsByName(DockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidget)
    {
        DockWidget->setWindowTitle(QApplication::translate("DockWidget", "Disassembly", 0));
        button_step->setText(QApplication::translate("DockWidget", "Step", 0));
        button_pause->setText(QApplication::translate("DockWidget", "Pause", 0));
        button_continue->setText(QApplication::translate("DockWidget", "Continue", 0));
        pushButton->setText(QApplication::translate("DockWidget", "Step Into", 0));
        button_breakpoint->setText(QApplication::translate("DockWidget", "Set Breakpoint", 0));
    } // retranslateUi

};

namespace Ui {
    class DockWidget: public Ui_DockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISASSEMBLER_H
