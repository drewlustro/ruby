/**********************************************************************

  regex.c -  Oniguruma (regular expression library)

  Copyright (C) 2002-2004  K.Kosako (kosako@sofnec.co.jp)

**********************************************************************/
/*
 * Source wrapper for Ruby.
 */
#include "regint.h"
#include "regex.h"

#include "regparse.c"
#include "regcomp.c"
#include "regexec.c"
#include "regenc.c"
#include "reggnu.c"
#include "regerror.c"

#ifndef ONIG_RUBY_M17N
#include "ascii.c"
#include "utf8.c"
#include "euc_jp.c"
#include "sjis.c"
#endif
