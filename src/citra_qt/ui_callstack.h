/********************************************************************************
** Form generated from reading UI file 'callstack.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLSTACK_H
#define UI_CALLSTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CallStack
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;

    void setupUi(QDockWidget *CallStack)
    {
        if (CallStack->objectName().isEmpty())
            CallStack->setObjectName(QStringLiteral("CallStack"));
        CallStack->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeView = new QTreeView(dockWidgetContents);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setAlternatingRowColors(true);
        treeView->setRootIsDecorated(false);
        treeView->setItemsExpandable(false);

        verticalLayout->addWidget(treeView);

        CallStack->setWidget(dockWidgetContents);

        retranslateUi(CallStack);

        QMetaObject::connectSlotsByName(CallStack);
    } // setupUi

    void retranslateUi(QDockWidget *CallStack)
    {
        CallStack->setWindowTitle(QApplication::translate("CallStack", "Call stack", 0));
    } // retranslateUi

};

namespace Ui {
    class CallStack: public Ui_CallStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLSTACK_H
