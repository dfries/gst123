/* GST123 - GStreamer based command line media player
 * Copyright (C) 2010 Stefan Westerfeld
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
#ifndef GST123_TERMINAL_H
#define GST123_TERMINAL_H

#include <term.h>
#include <vector>
#include <string>
#include <map>

class Terminal
{
  struct termios             tio_orig;
  std::string                terminal_type;
  std::vector<int>           chars;
  std::map<std::string, int> keys;


public:
  enum {
    TERMINAL_KEY_UP = 300,
    TERMINAL_KEY_LEFT,
    TERMINAL_KEY_RIGHT,
    TERMINAL_KEY_DOWN,
    TERMINAL_KEY_PAGE_UP,
    TERMINAL_KEY_PAGE_DOWN
  };

  void init();
  int getch();
  void end();
};

#endif
