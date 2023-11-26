// Copyright 2023-present Contributors to the colorpicker project.
// SPDX-License-Identifier: BSD-3-Clause
// https://github.com/mikaelsundell/colorpicker

#pragma once
#include <QMainWindow>

class ColorAnalyzerPrivate;
class ColorAnalyzer : public QMainWindow
{
    Q_OBJECT
    public:
        ColorAnalyzer();
        virtual ~ColorAnalyzer();
    private:
        QScopedPointer<ColorAnalyzerPrivate> p;
};
