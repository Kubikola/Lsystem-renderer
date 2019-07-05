/********************************************************************************
** Form generated from reading UI file 'ruleform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULEFORM_H
#define UI_RULEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RuleForm
{
public:
    QGridLayout *gridLayout;
    QLineEdit *transcriptionRuleEdit;
    QLabel *arrowLbl;
    QLabel *transcriptionRuleLbl;
    QLabel *letterLbl;
    QLineEdit *letterEdit;
    QPushButton *removeRuleBtn;

    void setupUi(QWidget *RuleForm)
    {
        if (RuleForm->objectName().isEmpty())
            RuleForm->setObjectName(QStringLiteral("RuleForm"));
        RuleForm->resize(662, 94);
        gridLayout = new QGridLayout(RuleForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        transcriptionRuleEdit = new QLineEdit(RuleForm);
        transcriptionRuleEdit->setObjectName(QStringLiteral("transcriptionRuleEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transcriptionRuleEdit->sizePolicy().hasHeightForWidth());
        transcriptionRuleEdit->setSizePolicy(sizePolicy);
        transcriptionRuleEdit->setMinimumSize(QSize(30, 20));

        gridLayout->addWidget(transcriptionRuleEdit, 1, 2, 1, 1);

        arrowLbl = new QLabel(RuleForm);
        arrowLbl->setObjectName(QStringLiteral("arrowLbl"));

        gridLayout->addWidget(arrowLbl, 1, 1, 1, 1);

        transcriptionRuleLbl = new QLabel(RuleForm);
        transcriptionRuleLbl->setObjectName(QStringLiteral("transcriptionRuleLbl"));
        transcriptionRuleLbl->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(transcriptionRuleLbl, 0, 2, 1, 1);

        letterLbl = new QLabel(RuleForm);
        letterLbl->setObjectName(QStringLiteral("letterLbl"));

        gridLayout->addWidget(letterLbl, 0, 0, 1, 1);

        letterEdit = new QLineEdit(RuleForm);
        letterEdit->setObjectName(QStringLiteral("letterEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(letterEdit->sizePolicy().hasHeightForWidth());
        letterEdit->setSizePolicy(sizePolicy1);
        letterEdit->setMinimumSize(QSize(30, 20));
        letterEdit->setMaximumSize(QSize(30, 20));
        letterEdit->setCursorPosition(0);

        gridLayout->addWidget(letterEdit, 1, 0, 1, 1);

        removeRuleBtn = new QPushButton(RuleForm);
        removeRuleBtn->setObjectName(QStringLiteral("removeRuleBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(removeRuleBtn->sizePolicy().hasHeightForWidth());
        removeRuleBtn->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(removeRuleBtn, 0, 3, 2, 1);

        QWidget::setTabOrder(letterEdit, transcriptionRuleEdit);
        QWidget::setTabOrder(transcriptionRuleEdit, removeRuleBtn);

        retranslateUi(RuleForm);

        QMetaObject::connectSlotsByName(RuleForm);
    } // setupUi

    void retranslateUi(QWidget *RuleForm)
    {
        RuleForm->setWindowTitle(QApplication::translate("RuleForm", "Form", nullptr));
        arrowLbl->setText(QApplication::translate("RuleForm", "-->", nullptr));
        transcriptionRuleLbl->setText(QApplication::translate("RuleForm", "Transcription rule:", nullptr));
        letterLbl->setText(QApplication::translate("RuleForm", "Letter:", nullptr));
        removeRuleBtn->setText(QApplication::translate("RuleForm", "Remove rule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RuleForm: public Ui_RuleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULEFORM_H
