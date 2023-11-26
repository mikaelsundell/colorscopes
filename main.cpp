// Copyright 2023-present Contributors to the vectorscope project.
// SPDX-License-Identifier: BSD-3-Clause
// https://github.com/mikaelsundell/utilities/vectorscope

#include "coloranalyzer.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ColorAnalyzer colorAnalyzer;
    colorAnalyzer.show();
    return app.exec();
}
