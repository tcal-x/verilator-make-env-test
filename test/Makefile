# Copyright (C) 2022 Tim Callahan
# 
# Use of this source code is governed by a ISC-style
# license that can be found in the LICENSE file or at
# https://opensource.org/licenses/ISC
#
# SPDX-License-Identifier: ISC


test:
	verilator -cc add.v
	make -C obj_dir -f Vadd.mk

link:
	verilator -cc add.v --exe tb.cpp
	make -C obj_dir -f Vadd.mk


clean:
	/bin/rm -rf obj_dir
