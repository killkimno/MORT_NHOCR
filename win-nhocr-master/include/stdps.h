/*--------------------------------------------------------------
	PostScript library           libstdps
		Written  by H.Goto , Aug. 1994
		Modified by H.Goto , Feb. 1997
--------------------------------------------------------------*/

/*--------------------------------------------------------------------
  Copyright (C) 1994-1997  Hideaki Goto

        All Rights Reserved

  Permission to use, copy, modify, and distribute this software and
  its documentation for any purpose is hereby granted without fee,
  provided that (i) the above copyright notice and this permission
  notice appear in all copies and in supporting documentation, (ii)
  the name of the author, Hideaki Goto, may not be used in any
  advertising or otherwise to promote the sale, use or other
  dealings in this software without prior written authorization
  from the author, (iii) this software may not be used for
  commercial products without prior written permission from the
  author, and (iv) the notice of the modification is specified in
  case of that the modified copies of this software are distributed.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
  THE AUTHOR WILL NOT BE RESPONSIBLE FOR ANY DAMAGE CAUSED BY THIS
  SOFTWARE.
--------------------------------------------------------------------*/


#ifndef	stdps_h
#define	stdps_h

#include	<stdio.h>

#ifdef	__cplusplus
extern "C" {
#endif

int	stdps_setsize(char *sizestr);
int	stdps_header(FILE *fp);
int	stdps_end(FILE *fp);


#ifdef	__cplusplus
}
#endif

#endif	/* stdps_h */
