// Copyright © 2017-2022 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "TrustWalletCore/TWCryptoBindgen.h"

#include <gtest/gtest.h>

TEST(TWCryptoBindgen, SimpleRustFunction) {
    ASSERT_EQ(TWRustFunction(), 42);
}
