#include "graphicsview.h"
#include "ui_graphicsview.h"

#include <QImage>
#include <QFileDialog>

GraphicsView::GraphicsView(QWidget *parent) :
    QGraphicsView(parent),
    m_scene(),
    m_itemImage(new QGraphicsPixmapItem)
{
    this->setScene(&m_scene);

    QImage img(400, 400, QImage::Format_RGB32);

    //img.setPixel(10, 10, 0xFFFF);
    m_itemImage->setPixmap(QPixmap::fromImage(img));
    m_scene.addItem(m_itemImage);

}

GraphicsView::~GraphicsView()
{
    delete m_itemImage;
}



void GraphicsView::setImage(const QImage& img)
{
    m_itemImage->setPixmap(QPixmap::fromImage(img));
}


void GraphicsView::chargerImage()
{
    QString filename = QFileDialog::getSaveFileName(this);
    m_itemImage->pixmap().toImage().save(filename);

}
