//https://doc.qt.io/qt-5/qtwidgets-mainwindows-application-example.html
// Created by Александр Широков on 02.02.2024.
//
#include <QtWidgets>
#include "mainWindow.h"
#include <iostream>


ImageButton::ImageButton(QWidget *parent) {
    setParent(parent);
    setToolTip("Стоп");
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    mButtonUpPixmap = QPixmap("../img/redButton.png");
    mButtonDownPixmap = QPixmap("../img//greenButton.png");
    mCurrentButtonPixmap = mButtonUpPixmap;
    setGeometry(mCurrentButtonPixmap.rect());
    connect(this, &QPushButton::clicked, this, &ImageButton::setDown);
}

void ImageButton::paintEvent(QPaintEvent *e) {
    QPushButton::paintEvent(e);
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentButtonPixmap);
}

QSize ImageButton::sizeHint() const {
    return QSize(200,200);
}

QSize ImageButton::minimumSizeHint() const {
    return sizeHint();
}

void ImageButton::keyPressEvent(QKeyEvent *e) {
    setDown();
}

void ImageButton::setDown() {
    mCurrentButtonPixmap = mButtonDownPixmap;
    update();
}

void ImageButton::setUp() {
    mCurrentButtonPixmap = mButtonUpPixmap;
    update();
}



