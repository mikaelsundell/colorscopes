// Copyright 2022-present Contributors to the colorpicker project.
// SPDX-License-Identifier: BSD-3-Clause
// https://github.com/mikaelsundell/colorpicker

#include "coloranalyzer.h"

#include <QAction>
#include <QBuffer>
#include <QPointer>

// generated files
#include "ui_about.h"
#include "ui_coloranalyzer.h"

class ColorAnalyzerPrivate : public QObject
{
    Q_OBJECT
    public:
        ColorAnalyzerPrivate();
        void init();
        void about();

    public:
        class About : public QDialog
        {
            public: About()
            {
                QScopedPointer<Ui_About> about;
                about.reset(new Ui_About());
                about->setupUi(this);
            }
        };
        QPointer<ColorAnalyzer> window;
        QScopedPointer<Ui_ColorAnalyzer> ui;
};

ColorAnalyzerPrivate::ColorAnalyzerPrivate()
{
}

void
ColorAnalyzerPrivate::init()
{
    ui.reset(new Ui_ColorAnalyzer());
    ui->setupUi(window);
    // connect
    connect(ui->imagewidget, &ImageWidget::imageDropped, ui->vectorscope, &VectorscopeWidget::setImage);
}

#include "coloranalyzer.moc"

ColorAnalyzer::ColorAnalyzer()
: QMainWindow(nullptr)
, p(new ColorAnalyzerPrivate())
{
    p->window = this;
    p->init();
}

ColorAnalyzer::~ColorAnalyzer()
{
}
