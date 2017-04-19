/********************************************************************************
** Form generated from reading UI file 'confirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMDIALOG_H
#define UI_CONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_confirmDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *regularText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *confirmDialog)
    {
        if (confirmDialog->objectName().isEmpty())
            confirmDialog->setObjectName(QStringLiteral("confirmDialog"));
        confirmDialog->resize(640, 360);
        confirmDialog->setMinimumSize(QSize(640, 360));
        confirmDialog->setMaximumSize(QSize(640, 360));
        QFont font;
        font.setPointSize(25);
        confirmDialog->setFont(font);
        verticalLayout = new QVBoxLayout(confirmDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        title = new QLabel(confirmDialog);
        title->setObjectName(QStringLiteral("title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(35);
        title->setFont(font1);

        verticalLayout->addWidget(title, 0, Qt::AlignHCenter);

        regularText = new QLabel(confirmDialog);
        regularText->setObjectName(QStringLiteral("regularText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(regularText->sizePolicy().hasHeightForWidth());
        regularText->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(20);
        regularText->setFont(font2);

        verticalLayout->addWidget(regularText, 0, Qt::AlignHCenter);

        buttonBox = new QDialogButtonBox(confirmDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(confirmDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), confirmDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), confirmDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(confirmDialog);
    } // setupUi

    void retranslateUi(QDialog *confirmDialog)
    {
        confirmDialog->setWindowTitle(QApplication::translate("confirmDialog", "Dialog", 0));
        title->setText(QApplication::translate("confirmDialog", "Are you sure?", 0));
        regularText->setText(QApplication::translate("confirmDialog", "Do you really want to apply these settings?", 0));
    } // retranslateUi

};

namespace Ui {
    class confirmDialog: public Ui_confirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDIALOG_H
