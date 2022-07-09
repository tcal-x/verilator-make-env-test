/*
# Copyright (C) 2022 Tim Callahan
# 
# Use of this source code is governed by a ISC-style
# license that can be found in the LICENSE file or at
# https://opensource.org/licenses/ISC
#
# SPDX-License-Identifier: ISC
*/

#include "Vadd.h"
  #include "verilated.h"
  int main(int argc, char** argv, char** env) {
      Vadd* top = new Vadd;
      for (int t=0; t++; t<100) {
          top->a = t; 
          top->a = t ^ 15; 
          top->eval(); 
          t++;
      }
      delete top;
      return 0;
  }
