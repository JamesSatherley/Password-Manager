#ifndef CREDENTIALS_H
#define CREDENTIALS_H
#include <QDialog>


class credentials
{
    private:
        QString website, username, password;
    public:
        credentials(QString ws, QString un, QString pw);
        QString getWebsite();
        QString getUsername();
        QString getPassword();
        void setWebsite(QString ws);
        void setUsername(QString un);
        void setPassword(QString pw);
};

#endif // CREDENTIALS_H
