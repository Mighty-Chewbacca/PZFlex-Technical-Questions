#include "textdisplay.h"
#include "ui_textdisplay.h"
#include <QFile>
#include <QTextStream>

TextDisplay::TextDisplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TextDisplay)
{
    ui->setupUi(this);
    loadFile1();
    loadFile2();
}

TextDisplay::~TextDisplay()
{
    delete ui;
}

void TextDisplay::loadFile2()
{
    QFile inputFile(":/outputc.dat");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->OutputFileText->setPlainText(line);
    QTextCursor cursor = ui->OutputFileText->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
void TextDisplay::loadFile1()
{
    QFile inputFile(":/inputc.dat");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->InputFileText->setPlainText(line);
    QTextCursor cursor = ui->InputFileText->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
