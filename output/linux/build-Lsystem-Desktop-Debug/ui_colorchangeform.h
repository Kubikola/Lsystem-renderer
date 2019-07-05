/********************************************************************************
** Form generated from reading UI file 'colorchangeform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORCHANGEFORM_H
#define UI_COLORCHANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "selectcolorbutton.hpp"

QT_BEGIN_NAMESPACE

class Ui_ColorChangeForm
{
public:
    QGridLayout *gridLayout;
    QLabel *capitalLetterLbl;
    QPushButton *removeColorChangeBtn;
    QLabel *colorLbl;
    SelectColorButton *colorSelectBtn;
    QLineEdit *capitalLetterEdit;

    void setupUi(QWidget *ColorChangeForm)
    {
        if (ColorChangeForm->objectName().isEmpty())
            ColorChangeForm->setObjectName(QString::fromUtf8("ColorChangeForm"));
        ColorChangeForm->resize(537, 119);
        gridLayout = new QGridLayout(ColorChangeForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        capitalLetterLbl = new QLabel(ColorChangeForm);
        capitalLetterLbl->setObjectName(QString::fromUtf8("capitalLetterLbl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(capitalLetterLbl->sizePolicy().hasHeightForWidth());
        capitalLetterLbl->setSizePolicy(sizePolicy);

        gridLayout->addWidget(capitalLetterLbl, 0, 0, 2, 1);

        removeColorChangeBtn = new QPushButton(ColorChangeForm);
        removeColorChangeBtn->setObjectName(QString::fromUtf8("removeColorChangeBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(removeColorChangeBtn->sizePolicy().hasHeightForWidth());
        removeColorChangeBtn->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(removeColorChangeBtn, 0, 2, 4, 1);

        colorLbl = new QLabel(ColorChangeForm);
        colorLbl->setObjectName(QString::fromUtf8("colorLbl"));
        sizePolicy.setHeightForWidth(colorLbl->sizePolicy().hasHeightForWidth());
        colorLbl->setSizePolicy(sizePolicy);
        colorLbl->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(colorLbl, 0, 1, 2, 1);

        colorSelectBtn = new SelectColorButton(ColorChangeForm);
        colorSelectBtn->setObjectName(QString::fromUtf8("colorSelectBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(8);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(colorSelectBtn->sizePolicy().hasHeightForWidth());
        colorSelectBtn->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(colorSelectBtn, 2, 1, 2, 1);

        capitalLetterEdit = new QLineEdit(ColorChangeForm);
        capitalLetterEdit->setObjectName(QString::fromUtf8("capitalLetterEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(capitalLetterEdit->sizePolicy().hasHeightForWidth());
        capitalLetterEdit->setSizePolicy(sizePolicy3);
        capitalLetterEdit->setMinimumSize(QSize(30, 20));
        capitalLetterEdit->setMaximumSize(QSize(30, 20));
        capitalLetterEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(capitalLetterEdit, 2, 0, 2, 1);


        retranslateUi(ColorChangeForm);

        QMetaObject::connectSlotsByName(ColorChangeForm);
    } // setupUi

    void retranslateUi(QWidget *ColorChangeForm)
    {
        ColorChangeForm->setWindowTitle(QApplication::translate("ColorChangeForm", "Form", nullptr));
        capitalLetterLbl->setText(QApplication::translate("ColorChangeForm", "Capital letter:", nullptr));
        removeColorChangeBtn->setText(QApplication::translate("ColorChangeForm", "Remove color\n"
" change", nullptr));
        colorLbl->setText(QApplication::translate("ColorChangeForm", "Color:", nullptr));
        colorSelectBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorChangeForm: public Ui_ColorChangeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORCHANGEFORM_H
