#include "credentials.h"

credentials::credentials(QString ws, QString un, QString pw)
{
    website = ws;
    username = un;
    password = pw;
}

QString credentials::getWebsite() {return website;}
QString credentials::getUsername() {return username;}
QString credentials::getPassword() {return password;}

void credentials::setWebsite(QString ws) {website = ws;}
void credentials::setUsername(QString un) {username = un;}
void credentials::setPassword(QString pw) {password = pw;}
