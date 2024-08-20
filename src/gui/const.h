#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QDir>
#include <QStandardPaths>

const QString SERVER_URL = QStringLiteral("https://nextcloud01-dev.support-ent.fr/");
const QString LOCAL_DIR = QDir::toNativeSeparators(
    QString("%1/eduprovence").arg(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation))
);
const bool AUTO_UPDATE_CHECK = false;

#endif