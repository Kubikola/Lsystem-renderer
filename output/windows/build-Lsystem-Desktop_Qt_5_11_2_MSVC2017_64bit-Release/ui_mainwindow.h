/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawingwidget.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTree;
    QAction *actionBinary_tree;
    QAction *actionFlower;
    QAction *actionFern;
    QAction *actionKoch_s_snowflake;
    QAction *actionQuadratic_Koch_s_island;
    QAction *actionIslands_and_lakes;
    QAction *actionMap;
    QAction *actionBroken_window;
    QAction *actionLevy_C_curve;
    QAction *actionDragon_curve;
    QAction *actionRender;
    QAction *actionClear;
    QAction *actionCross_visibility;
    QAction *actionKoch_s_anti_snowflake;
    QAction *actionGosper_s_curve;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *addRuleBtn;
    QPushButton *addColorChangeBtn;
    QGridLayout *gridLayout;
    QLabel *startingLocationValLbl;
    QSpinBox *lineLengthSpinBox;
    QLabel *startingLocationLbl;
    QLabel *lineLengthLbl;
    QSpinBox *rotationAngleSpinBox;
    QLabel *rotationAngleLbl;
    QComboBox *directionComboBox;
    QLineEdit *axiomEdit;
    QLabel *drawingDirectionLbl;
    QLabel *generationLbl;
    QLabel *axiomLbl;
    QSpinBox *generationSpinBox;
    QGroupBox *colorChangesGroupBox;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *colorChangesScrollArea;
    QWidget *colorChangesScrollAreaContents;
    QVBoxLayout *verticalLayout_5;
    DrawingWidget *drawingWidget;
    QGroupBox *rulesGroupBox;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *rulesScrollArea;
    QWidget *rulesScrollAreaContents;
    QVBoxLayout *verticalLayout_6;
    QMenuBar *menuBar;
    QMenu *menuExamples;
    QMenu *menuDrawing;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1116, 661);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionTree = new QAction(MainWindow);
        actionTree->setObjectName(QStringLiteral("actionTree"));
        actionBinary_tree = new QAction(MainWindow);
        actionBinary_tree->setObjectName(QStringLiteral("actionBinary_tree"));
        actionFlower = new QAction(MainWindow);
        actionFlower->setObjectName(QStringLiteral("actionFlower"));
        actionFern = new QAction(MainWindow);
        actionFern->setObjectName(QStringLiteral("actionFern"));
        actionKoch_s_snowflake = new QAction(MainWindow);
        actionKoch_s_snowflake->setObjectName(QStringLiteral("actionKoch_s_snowflake"));
        actionQuadratic_Koch_s_island = new QAction(MainWindow);
        actionQuadratic_Koch_s_island->setObjectName(QStringLiteral("actionQuadratic_Koch_s_island"));
        actionIslands_and_lakes = new QAction(MainWindow);
        actionIslands_and_lakes->setObjectName(QStringLiteral("actionIslands_and_lakes"));
        actionMap = new QAction(MainWindow);
        actionMap->setObjectName(QStringLiteral("actionMap"));
        actionBroken_window = new QAction(MainWindow);
        actionBroken_window->setObjectName(QStringLiteral("actionBroken_window"));
        actionLevy_C_curve = new QAction(MainWindow);
        actionLevy_C_curve->setObjectName(QStringLiteral("actionLevy_C_curve"));
        actionDragon_curve = new QAction(MainWindow);
        actionDragon_curve->setObjectName(QStringLiteral("actionDragon_curve"));
        actionRender = new QAction(MainWindow);
        actionRender->setObjectName(QStringLiteral("actionRender"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionCross_visibility = new QAction(MainWindow);
        actionCross_visibility->setObjectName(QStringLiteral("actionCross_visibility"));
        actionCross_visibility->setCheckable(true);
        actionCross_visibility->setChecked(true);
        actionKoch_s_anti_snowflake = new QAction(MainWindow);
        actionKoch_s_anti_snowflake->setObjectName(QStringLiteral("actionKoch_s_anti_snowflake"));
        actionGosper_s_curve = new QAction(MainWindow);
        actionGosper_s_curve->setObjectName(QStringLiteral("actionGosper_s_curve"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addRuleBtn = new QPushButton(centralWidget);
        addRuleBtn->setObjectName(QStringLiteral("addRuleBtn"));

        verticalLayout->addWidget(addRuleBtn);

        addColorChangeBtn = new QPushButton(centralWidget);
        addColorChangeBtn->setObjectName(QStringLiteral("addColorChangeBtn"));

        verticalLayout->addWidget(addColorChangeBtn);


        gridLayout_2->addLayout(verticalLayout, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        startingLocationValLbl = new QLabel(centralWidget);
        startingLocationValLbl->setObjectName(QStringLiteral("startingLocationValLbl"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startingLocationValLbl->sizePolicy().hasHeightForWidth());
        startingLocationValLbl->setSizePolicy(sizePolicy1);
        startingLocationValLbl->setMinimumSize(QSize(95, 20));
        startingLocationValLbl->setMaximumSize(QSize(95, 20));

        gridLayout->addWidget(startingLocationValLbl, 2, 3, 1, 1);

        lineLengthSpinBox = new QSpinBox(centralWidget);
        lineLengthSpinBox->setObjectName(QStringLiteral("lineLengthSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineLengthSpinBox->sizePolicy().hasHeightForWidth());
        lineLengthSpinBox->setSizePolicy(sizePolicy2);
        lineLengthSpinBox->setMaximum(2000);
        lineLengthSpinBox->setValue(5);

        gridLayout->addWidget(lineLengthSpinBox, 2, 1, 1, 1);

        startingLocationLbl = new QLabel(centralWidget);
        startingLocationLbl->setObjectName(QStringLiteral("startingLocationLbl"));

        gridLayout->addWidget(startingLocationLbl, 2, 2, 1, 1);

        lineLengthLbl = new QLabel(centralWidget);
        lineLengthLbl->setObjectName(QStringLiteral("lineLengthLbl"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineLengthLbl->sizePolicy().hasHeightForWidth());
        lineLengthLbl->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(lineLengthLbl, 2, 0, 1, 1);

        rotationAngleSpinBox = new QSpinBox(centralWidget);
        rotationAngleSpinBox->setObjectName(QStringLiteral("rotationAngleSpinBox"));
        sizePolicy2.setHeightForWidth(rotationAngleSpinBox->sizePolicy().hasHeightForWidth());
        rotationAngleSpinBox->setSizePolicy(sizePolicy2);
        rotationAngleSpinBox->setMaximum(360);
        rotationAngleSpinBox->setValue(90);

        gridLayout->addWidget(rotationAngleSpinBox, 1, 1, 1, 1);

        rotationAngleLbl = new QLabel(centralWidget);
        rotationAngleLbl->setObjectName(QStringLiteral("rotationAngleLbl"));
        sizePolicy3.setHeightForWidth(rotationAngleLbl->sizePolicy().hasHeightForWidth());
        rotationAngleLbl->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(rotationAngleLbl, 1, 0, 1, 1);

        directionComboBox = new QComboBox(centralWidget);
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->setObjectName(QStringLiteral("directionComboBox"));
        sizePolicy1.setHeightForWidth(directionComboBox->sizePolicy().hasHeightForWidth());
        directionComboBox->setSizePolicy(sizePolicy1);
        directionComboBox->setMinimumSize(QSize(50, 20));
        directionComboBox->setMaximumSize(QSize(50, 20));

        gridLayout->addWidget(directionComboBox, 0, 3, 1, 2);

        axiomEdit = new QLineEdit(centralWidget);
        axiomEdit->setObjectName(QStringLiteral("axiomEdit"));
        sizePolicy3.setHeightForWidth(axiomEdit->sizePolicy().hasHeightForWidth());
        axiomEdit->setSizePolicy(sizePolicy3);
        axiomEdit->setMinimumSize(QSize(80, 20));
        axiomEdit->setMaximumSize(QSize(80, 20));

        gridLayout->addWidget(axiomEdit, 0, 1, 1, 1, Qt::AlignVCenter);

        drawingDirectionLbl = new QLabel(centralWidget);
        drawingDirectionLbl->setObjectName(QStringLiteral("drawingDirectionLbl"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(drawingDirectionLbl->sizePolicy().hasHeightForWidth());
        drawingDirectionLbl->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(drawingDirectionLbl, 0, 2, 1, 1);

        generationLbl = new QLabel(centralWidget);
        generationLbl->setObjectName(QStringLiteral("generationLbl"));

        gridLayout->addWidget(generationLbl, 1, 2, 1, 1);

        axiomLbl = new QLabel(centralWidget);
        axiomLbl->setObjectName(QStringLiteral("axiomLbl"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(axiomLbl->sizePolicy().hasHeightForWidth());
        axiomLbl->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(axiomLbl, 0, 0, 1, 1, Qt::AlignVCenter);

        generationSpinBox = new QSpinBox(centralWidget);
        generationSpinBox->setObjectName(QStringLiteral("generationSpinBox"));
        sizePolicy1.setHeightForWidth(generationSpinBox->sizePolicy().hasHeightForWidth());
        generationSpinBox->setSizePolicy(sizePolicy1);
        generationSpinBox->setMinimumSize(QSize(40, 20));
        generationSpinBox->setMaximumSize(QSize(40, 20));
        generationSpinBox->setValue(6);

        gridLayout->addWidget(generationSpinBox, 1, 3, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        colorChangesGroupBox = new QGroupBox(centralWidget);
        colorChangesGroupBox->setObjectName(QStringLiteral("colorChangesGroupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(colorChangesGroupBox->sizePolicy().hasHeightForWidth());
        colorChangesGroupBox->setSizePolicy(sizePolicy6);
        verticalLayout_3 = new QVBoxLayout(colorChangesGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        colorChangesScrollArea = new QScrollArea(colorChangesGroupBox);
        colorChangesScrollArea->setObjectName(QStringLiteral("colorChangesScrollArea"));
        sizePolicy.setHeightForWidth(colorChangesScrollArea->sizePolicy().hasHeightForWidth());
        colorChangesScrollArea->setSizePolicy(sizePolicy);
        colorChangesScrollArea->setMinimumSize(QSize(0, 92));
        colorChangesScrollArea->setWidgetResizable(true);
        colorChangesScrollAreaContents = new QWidget();
        colorChangesScrollAreaContents->setObjectName(QStringLiteral("colorChangesScrollAreaContents"));
        colorChangesScrollAreaContents->setGeometry(QRect(0, 0, 290, 90));
        verticalLayout_5 = new QVBoxLayout(colorChangesScrollAreaContents);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        colorChangesScrollArea->setWidget(colorChangesScrollAreaContents);

        verticalLayout_3->addWidget(colorChangesScrollArea);


        gridLayout_2->addWidget(colorChangesGroupBox, 1, 3, 1, 1);

        drawingWidget = new DrawingWidget(centralWidget);
        drawingWidget->setObjectName(QStringLiteral("drawingWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(drawingWidget->sizePolicy().hasHeightForWidth());
        drawingWidget->setSizePolicy(sizePolicy7);
        drawingWidget->setStyleSheet(QStringLiteral("background-color: white"));

        gridLayout_2->addWidget(drawingWidget, 2, 0, 1, 4);

        rulesGroupBox = new QGroupBox(centralWidget);
        rulesGroupBox->setObjectName(QStringLiteral("rulesGroupBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(rulesGroupBox->sizePolicy().hasHeightForWidth());
        rulesGroupBox->setSizePolicy(sizePolicy8);
        verticalLayout_2 = new QVBoxLayout(rulesGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rulesScrollArea = new QScrollArea(rulesGroupBox);
        rulesScrollArea->setObjectName(QStringLiteral("rulesScrollArea"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(rulesScrollArea->sizePolicy().hasHeightForWidth());
        rulesScrollArea->setSizePolicy(sizePolicy9);
        rulesScrollArea->setMinimumSize(QSize(0, 92));
        rulesScrollArea->setWidgetResizable(true);
        rulesScrollAreaContents = new QWidget();
        rulesScrollAreaContents->setObjectName(QStringLiteral("rulesScrollAreaContents"));
        rulesScrollAreaContents->setGeometry(QRect(0, 0, 291, 90));
        verticalLayout_6 = new QVBoxLayout(rulesScrollAreaContents);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        rulesScrollArea->setWidget(rulesScrollAreaContents);

        verticalLayout_2->addWidget(rulesScrollArea);


        gridLayout_2->addWidget(rulesGroupBox, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1116, 21));
        menuExamples = new QMenu(menuBar);
        menuExamples->setObjectName(QStringLiteral("menuExamples"));
        menuDrawing = new QMenu(menuBar);
        menuDrawing->setObjectName(QStringLiteral("menuDrawing"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(axiomEdit, rotationAngleSpinBox);
        QWidget::setTabOrder(rotationAngleSpinBox, lineLengthSpinBox);
        QWidget::setTabOrder(lineLengthSpinBox, directionComboBox);
        QWidget::setTabOrder(directionComboBox, generationSpinBox);
        QWidget::setTabOrder(generationSpinBox, rulesScrollArea);
        QWidget::setTabOrder(rulesScrollArea, addRuleBtn);
        QWidget::setTabOrder(addRuleBtn, addColorChangeBtn);
        QWidget::setTabOrder(addColorChangeBtn, colorChangesScrollArea);

        menuBar->addAction(menuExamples->menuAction());
        menuBar->addAction(menuDrawing->menuAction());
        menuExamples->addAction(actionDragon_curve);
        menuExamples->addAction(actionFern);
        menuExamples->addAction(actionFlower);
        menuExamples->addAction(actionGosper_s_curve);
        menuExamples->addAction(actionIslands_and_lakes);
        menuExamples->addAction(actionLevy_C_curve);
        menuExamples->addAction(actionKoch_s_anti_snowflake);
        menuExamples->addAction(actionKoch_s_snowflake);
        menuExamples->addAction(actionQuadratic_Koch_s_island);
        menuExamples->addAction(actionMap);
        menuExamples->addAction(actionTree);
        menuDrawing->addAction(actionRender);
        menuDrawing->addAction(actionClear);
        menuDrawing->addAction(actionCross_visibility);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "L-system", nullptr));
        actionTree->setText(QApplication::translate("MainWindow", "&Tree", nullptr));
#ifndef QT_NO_SHORTCUT
        actionTree->setShortcut(QApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        actionBinary_tree->setText(QApplication::translate("MainWindow", "&Binary tree", nullptr));
        actionFlower->setText(QApplication::translate("MainWindow", "Fl&ower", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFlower->setShortcut(QApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_NO_SHORTCUT
        actionFern->setText(QApplication::translate("MainWindow", "&Fern", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFern->setShortcut(QApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_NO_SHORTCUT
        actionKoch_s_snowflake->setText(QApplication::translate("MainWindow", "Koch'&s snowflake", nullptr));
#ifndef QT_NO_SHORTCUT
        actionKoch_s_snowflake->setShortcut(QApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuadratic_Koch_s_island->setText(QApplication::translate("MainWindow", "&Quadratic Koch's island", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuadratic_Koch_s_island->setShortcut(QApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_NO_SHORTCUT
        actionIslands_and_lakes->setText(QApplication::translate("MainWindow", "&Islands and lakes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionIslands_and_lakes->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionMap->setText(QApplication::translate("MainWindow", "&Map", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMap->setShortcut(QApplication::translate("MainWindow", "F10", nullptr));
#endif // QT_NO_SHORTCUT
        actionBroken_window->setText(QApplication::translate("MainWindow", "Broken &window", nullptr));
        actionLevy_C_curve->setText(QApplication::translate("MainWindow", "&L\303\251vy C curve", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLevy_C_curve->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionDragon_curve->setText(QApplication::translate("MainWindow", "&Dragon curve", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDragon_curve->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionRender->setText(QApplication::translate("MainWindow", "&Render", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRender->setShortcut(QApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MainWindow", "&Clear", nullptr));
#ifndef QT_NO_STATUSTIP
        actionClear->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionCross_visibility->setText(QApplication::translate("MainWindow", "Cross", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCross_visibility->setShortcut(QApplication::translate("MainWindow", "F12", nullptr));
#endif // QT_NO_SHORTCUT
        actionKoch_s_anti_snowflake->setText(QApplication::translate("MainWindow", "Koch's anti-snowflake", nullptr));
#ifndef QT_NO_SHORTCUT
        actionKoch_s_anti_snowflake->setShortcut(QApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionGosper_s_curve->setText(QApplication::translate("MainWindow", "Gosper's curve", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGosper_s_curve->setShortcut(QApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_NO_SHORTCUT
        addRuleBtn->setText(QApplication::translate("MainWindow", "Add rule", nullptr));
        addColorChangeBtn->setText(QApplication::translate("MainWindow", "Add color \n"
" change", nullptr));
        startingLocationValLbl->setText(QApplication::translate("MainWindow", "Not set yet", nullptr));
        lineLengthSpinBox->setSuffix(QApplication::translate("MainWindow", " px", nullptr));
        startingLocationLbl->setText(QApplication::translate("MainWindow", "Starting location:", nullptr));
        lineLengthLbl->setText(QApplication::translate("MainWindow", "Line length:", nullptr));
        rotationAngleSpinBox->setSuffix(QApplication::translate("MainWindow", " \313\232", nullptr));
        rotationAngleLbl->setText(QApplication::translate("MainWindow", "Rotation angle:", nullptr));
        directionComboBox->setItemText(0, QApplication::translate("MainWindow", "Right", nullptr));
        directionComboBox->setItemText(1, QApplication::translate("MainWindow", "Down", nullptr));
        directionComboBox->setItemText(2, QApplication::translate("MainWindow", "Left", nullptr));
        directionComboBox->setItemText(3, QApplication::translate("MainWindow", "Up", nullptr));

        drawingDirectionLbl->setText(QApplication::translate("MainWindow", "Drawing direction:", nullptr));
        generationLbl->setText(QApplication::translate("MainWindow", "Generation:", nullptr));
        axiomLbl->setText(QApplication::translate("MainWindow", "Axiom:", nullptr));
        colorChangesGroupBox->setTitle(QApplication::translate("MainWindow", "Color changes:", nullptr));
        rulesGroupBox->setTitle(QApplication::translate("MainWindow", "Rules:", nullptr));
        menuExamples->setTitle(QApplication::translate("MainWindow", "E&xamples", nullptr));
        menuDrawing->setTitle(QApplication::translate("MainWindow", "D&rawing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
