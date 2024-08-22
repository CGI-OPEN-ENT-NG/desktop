#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QDir>
#include <QStandardPaths>

// URL DEV  --> 	https://nextcloud01-dev.support-ent.fr/
// URL RE7  -->     https://nextcloud-re7.support-ent.fr/
// URL PREP --> 	https://nextcloud-cd13-prep.support-ent.fr/

const QString SERVER_URL = QStringLiteral("https://nextcloud01-dev.support-ent.fr/");
const QString LOCAL_DIR = QDir::toNativeSeparators(
    QString("%1/eduprovence").arg(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation))
);
const bool AUTO_UPDATE_CHECK = false;
const bool SKIP_UPDATE_CHECK = true;

#endif