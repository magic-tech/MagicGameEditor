/******************************************************************************
 @Copyright    Copyright (C) 2008 - 2016 by MagicTech.

 @Platform     ANSI compatible
******************************************************************************/
/*
Magic3D Engine
Copyright (c) 2008-2016
Thiago C. Moraes
http://www.magictech.com.br

This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.
Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it freely,
subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software.
   If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef TERRAININFO_H
#define TERRAININFO_H

#include <QWidget>
#include "magic3dobjectpanel.h"

namespace Ui {
class TerrainInfo;
}

class TerrainInfo : public Magic3DObjectPanel
{
    Q_OBJECT

private:
    bool needGenerateTerrain;
    void reset(bool emptyHeightMap);
public:
    explicit TerrainInfo(MainWindow* mainWindow);
    ~TerrainInfo();

    virtual void update();
    virtual void updateObject();

    bool isEditing();

    void setRadius(float radius);
    float getRadius();

    void editTerrain(Magic3D::Camera* camera, bool mouseDown, bool ctrl, QMouseEvent *event);
    void finishEdit();

private slots:
    void on_btnEdit_toggled(bool checked);

    void on_btnRaise_toggled(bool checked);

    void on_btnLower_toggled(bool checked);

    void on_btnFlatten_toggled(bool checked);

    void on_txtRadius_valueChanged(double arg1);

    void on_btnUpdate_clicked();

    void on_btnSave_clicked();

    void on_btnLoad_clicked();

    void on_txtLength_valueChanged(int arg1);

    void on_txtWidth_valueChanged(int arg1);

    void on_txtTileLength_valueChanged(double arg1);

    void on_txtTileWidth_valueChanged(double arg1);

private:
    Ui::TerrainInfo *ui;
};

#endif // TERRAININFO_H
