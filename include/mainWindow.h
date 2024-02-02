//
// Created by Александр Широков on 02.02.2024.
//
#pragma once
#ifndef QT_MODULE36_MAINWINDOW_H
#define QT_MODULE36_MAINWINDOW_H

#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QPushButton>
#include <QPixmap>
#include <iostream>
#include <QPainter>
#include <QPaintEvent>

class ImageButton : public QPushButton {

Q_OBJECT
public:
    ImageButton() = default;
    ImageButton(QWidget *parent);

    void paintEvent(QPaintEvent *e) override;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
    void keyPressEvent(QKeyEvent *e) override;

public slots:
    void setUp();
    void setDown();

private:
    QPixmap mCurrentButtonPixmap;
    QPixmap mButtonDownPixmap;
    QPixmap mButtonUpPixmap;
    bool isDown = false;
};



#endif //QT_MODULE36_MAINWINDOW_H
