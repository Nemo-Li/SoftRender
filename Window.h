//
// Created by Nemo li on 2022/4/8.
//

#ifndef QTDEMO_WINDOW_H
#define QTDEMO_WINDOW_H


#include <QWidget>

class Window : public QWidget{

    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

    ~Window() override;

private:
    void paintEvent(QPaintEvent *) override;

private:
    Window *ui;
    QImage *canvas;
};


#endif //QTDEMO_WINDOW_H
