/********************************************************************************
** Form generated from reading UI file 'registers.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERS_H
#define UI_REGISTERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARMRegisters
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QDockWidget *ARMRegisters)
    {
        if (ARMRegisters->objectName().isEmpty())
            ARMRegisters->setObjectName(QStringLiteral("ARMRegisters"));
        ARMRegisters->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(treeWidget);

        ARMRegisters->setWidget(dockWidgetContents);

        retranslateUi(ARMRegisters);

        QMetaObject::connectSlotsByName(ARMRegisters);
    } // setupUi

    void retranslateUi(QDockWidget *ARMRegisters)
    {
        ARMRegisters->setWindowTitle(QApplication::translate("ARMRegisters", "ARM registers", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ARMRegisters", "Value", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ARMRegisters", "Register", 0));
    } // retranslateUi

};

namespace Ui {
    class ARMRegisters: public Ui_ARMRegisters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERS_H
