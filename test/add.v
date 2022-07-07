/*
# Copyright (C) 2022 Tim Callahan
# 
# Use of this source code is governed by a ISC-style
# license that can be found in the LICENSE file or at
# https://opensource.org/licenses/ISC
#
# SPDX-License-Identifier: ISC
*/



module top(input [31:0] a, input [31:0] b, output [31:0] q);

    assign q = a + b;

endmodule


