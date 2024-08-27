#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QDir>
#include <QStandardPaths>

// URL DEV  --> 	https://nextcloud01-dev.support-ent.fr/
// URL RE7  -->     https://nextcloud-re7.support-ent.fr/
// URL PREP --> 	https://nextcloud-cd13-prep.support-ent.fr/

// Lien vers /Documents/Documents Synchronisés 
// QDir::toNativeSeparators(
//     QString("%1/Documents Synchronisés").arg(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation))
// );

const QString SERVER_URL = QStringLiteral("https://nextcloud01-dev.support-ent.fr/");

const QString LOCAL_DIR = QDir::toNativeSeparators(
    QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
);
const bool AUTO_UPDATE_CHECK = false;
const bool SKIP_UPDATE_CHECK = true;

const QString CONTEXT_MENU_TITLE = QStringLiteral("Espace collégien Provence");

const bool SHARING_AVAILABLE = false;

const int USE_DOWNLOAD_LIMIT = 1;
const int USE_UPLOAD_LIMIT = 1;

const int DOWNLOAD_LIMIT = 80;
const int UPLOAD_LIMIT = 10;

#endif