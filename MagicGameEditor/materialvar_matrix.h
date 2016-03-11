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

#ifndef MATERIALVAR_MATRIX_H
#define MATERIALVAR_MATRIX_H

#include "materialvar.h"

namespace Ui {
class MaterialVar_Matrix;
}

class MaterialVar_Matrix : public MaterialVar
{
    Q_OBJECT

public:
    explicit MaterialVar_Matrix(MainWindow* mainWindow);
    ~MaterialVar_Matrix();

    virtual void update();
    virtual void updateObject();

private slots:
    void on_txt_0_0_valueChanged(double arg1);

    void on_txt_0_1_valueChanged(double arg1);

    void on_txt_0_2_valueChanged(double arg1);

    void on_txt_0_3_valueChanged(double arg1);

    void on_txt_1_0_valueChanged(double arg1);

    void on_txt_1_1_valueChanged(double arg1);

    void on_txt_1_2_valueChanged(double arg1);

    void on_txt_1_3_valueChanged(double arg1);

    void on_txt_2_0_valueChanged(double arg1);

    void on_txt_2_1_valueChanged(double arg1);

    void on_txt_2_2_valueChanged(double arg1);

    void on_txt_2_3_valueChanged(double arg1);

    void on_txt_3_0_valueChanged(double arg1);

    void on_txt_3_1_valueChanged(double arg1);

    void on_txt_3_2_valueChanged(double arg1);

    void on_txt_3_3_valueChanged(double arg1);

private:
    Ui::MaterialVar_Matrix *ui;
};

#endif // MATERIALVAR_MATRIX_H
