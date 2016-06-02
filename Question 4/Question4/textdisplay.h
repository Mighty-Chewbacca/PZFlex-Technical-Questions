#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include <QMainWindow>

namespace Ui {
class TextDisplay;
}

class TextDisplay : public QMainWindow
{
    Q_OBJECT

public:
    explicit TextDisplay(QWidget *parent = 0);
    ~TextDisplay();

private:
    Ui::TextDisplay *ui;
    void loadFile1();
    void loadFile2();
};

#endif // TEXTDISPLAY_H
