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

#ifndef MESHINFO_H
#define MESHINFO_H

#include "magic3dobjectpanel.h"
#include "materialinfo.h"

namespace Ui {
    class MeshInfo;
}

namespace Magic3D
{
    class Mesh;
}

class MeshInfo : public Magic3DObjectPanel
{
    Q_OBJECT

public:
    explicit MeshInfo(MainWindow* mainWindow);
    ~MeshInfo();

    virtual void update();
    virtual void updateObject();

    void setMeshIndex(int index);
    int getMeshIndex();
private:
    Ui::MeshInfo *ui;

    int meshIndex;

    Magic3D::Mesh* getMesh();
private slots:


private slots:
    void on_chkIlluminated_toggled(bool checked);
    void on_chkDoubleSide_toggled(bool checked);
    void on_chkVisible_toggled(bool checked);
    void on_chkFog_toggled(bool checked);
    void on_chkCastShadow_toggled(bool checked);
    void on_chkReceiveShadows_toggled(bool checked);
    void on_cmbMaterial_currentIndexChanged(int index);
    void on_chkReflective_toggled(bool checked);
    void on_chkGlow_toggled(bool checked);
};

#endif // MESHINFO_H
