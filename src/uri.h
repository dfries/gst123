/* GST123 - GStreamer based command line media player
 * Copyright (C) 2006-2010 Stefan Westerfeld
 * Copyright (C) 2010 أحمد المحمودي (Ahmed El-Mahmoudy)
 *
 * Playlist support: URI parser
 * Copyright (C) 2010 Siddhesh Poyarekar
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __URI_H__
#define __URI_H__

#include <glib.h>
#include <string>
#include <stdlib.h>
#include "iostream.h"

enum
{
  URI_ERROR_UNKNOWN = -1,
  URI_ERROR_INVALID_HOST = -2,
  URI_ERROR_INVALID_HTTP = -3,
  URI_ERROR_INVALID_PATH = -4
};

class URI
{
  string host;
  int port;
  string path;
  string protocol;

  GstIOStream *stream;

  bool empty_path_allowed (void);

public:
  URI (const string &input);
  ~URI ();

  GstIOStream *getIOStream (void);

  static string strerror (int error);

  int open (void);
};

#endif
