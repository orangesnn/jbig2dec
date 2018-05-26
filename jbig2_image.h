/* Copyright (C) 2001-2018 Artifex Software, Inc.
   All Rights Reserved.

   This software is provided AS-IS with no warranty, either express or
   implied.

   This software is distributed under license and may not be copied,
   modified or distributed except as expressly authorized under the terms
   of the license contained in the file LICENSE in this distribution.

   Refer to licensing information at http://www.artifex.com or contact
   Artifex Software, Inc.,  1305 Grant Avenue - Suite 200, Novato,
   CA 94945, U.S.A., +1(415)492-9861, for further information.
*/

/*
    jbig2dec
*/

#ifndef _JBIG2_IMAGE_H
#define _JBIG2_IMAGE_H

int jbig2_image_get_pixel(Jbig2Image *image, int x, int y);
void jbig2_image_set_pixel(Jbig2Image *image, int x, int y, bool value);

#endif /* _JBIG2_IMAGE_H */
