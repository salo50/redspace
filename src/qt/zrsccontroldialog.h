// Copyright (c) 2017-2018 The redspace developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZRSCCONTROLDIALOG_H
#define ZRSCCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zrsc/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZRSCControlDialog;
}

class CZRSCControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZRSCControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZRSCControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZRSCControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZRSCControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZRSCControlDialog(QWidget *parent);
    ~ZRSCControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZRSCControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZRSCControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZRSCCONTROLDIALOG_H
