// Copyright (c) 2017 The PIVX Developers 
 //Copyright (c) 2019 The RedSpace developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef redspace_BLOCKSIGNATURE_H
#define redspace_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //redspace_BLOCKSIGNATURE_H
