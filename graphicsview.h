#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>


class GraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    explicit GraphicsView(QWidget *parent = 0);
    ~GraphicsView();


public slots:
    void setImage(const QImage& img);
    void chargerImage();

private:

    QGraphicsScene m_scene;
    QGraphicsPixmapItem* m_itemImage;

};

#endif // GRAPHICSVIEW_H
