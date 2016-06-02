/********************************************************************************
** Form generated from reading UI file 'textdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTDISPLAY_H
#define UI_TEXTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextDisplay
{
public:
    QWidget *centralWidget;
    QTextEdit *InputFileText;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QTextEdit *OutputFileText;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextDisplay)
    {
        if (TextDisplay->objectName().isEmpty())
            TextDisplay->setObjectName(QStringLiteral("TextDisplay"));
        TextDisplay->resize(500, 660);
        centralWidget = new QWidget(TextDisplay);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        InputFileText = new QTextEdit(centralWidget);
        InputFileText->setObjectName(QStringLiteral("InputFileText"));
        InputFileText->setGeometry(QRect(1, 41, 211, 569));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1, 21, 44, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 20, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 20, 29, 13));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 47, 13));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(286, -1, 61, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(287, 20, 47, 13));
        OutputFileText = new QTextEdit(centralWidget);
        OutputFileText->setObjectName(QStringLiteral("OutputFileText"));
        OutputFileText->setGeometry(QRect(288, 41, 171, 569));
        TextDisplay->setCentralWidget(centralWidget);
        InputFileText->raise();
        OutputFileText->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        OutputFileText->raise();
        label_4->raise();
        label_3->raise();
        label_4->raise();
        mainToolBar = new QToolBar(TextDisplay);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextDisplay->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TextDisplay);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextDisplay->setStatusBar(statusBar);

        retranslateUi(TextDisplay);

        QMetaObject::connectSlotsByName(TextDisplay);
    } // setupUi

    void retranslateUi(QMainWindow *TextDisplay)
    {
        TextDisplay->setWindowTitle(QApplication::translate("TextDisplay", "TextDisplay", 0));
        label->setText(QApplication::translate("TextDisplay", "Real Part", 0));
        label_2->setText(QApplication::translate("TextDisplay", "Imaginary Part", 0));
        label_3->setText(QApplication::translate("TextDisplay", "Phase", 0));
        label_5->setText(QApplication::translate("TextDisplay", "Input File", 0));
        label_6->setText(QApplication::translate("TextDisplay", "Output File", 0));
        label_4->setText(QApplication::translate("TextDisplay", "Amplitude", 0));
    } // retranslateUi

};

namespace Ui {
    class TextDisplay: public Ui_TextDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTDISPLAY_H
