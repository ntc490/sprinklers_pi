# sprinklers_pi
Sprinkling System Control Program for the Raspberry Pi

Experimenting with a Beaglebone Black port since this only seems to work on Raspberry Pi.
Found evidence of others thinking along the same lines, but no source code to back it up.

To play with this on a Beaglebone Black:
  1) Clone this branch on your device.  You could probably do this on a PC running Linux, too.
  2) Make sure you have sqlite3.  I used 'apt-get install sqlite3-dev' on my system.
  3) Run 'make'.  It should build to completion.
  4) Copy the project 'web' directory to /.
  5) Make sure nothing else is bound to port 8080
  6) Run ./sprinklers_pi

Not sure I'm a fan of the source code yet, and may go back to using OSPi and modify it for
my needs.

This branch won't actuate any hardware.  I sliced out the Raspberry Pi HW control code and
replaced it with "dummy code" that does nothing.  The goal is to evaluate the software as
quickly as possible 

You'd only need to write a few functions to make this work on real Beaglebone Black hardware.
If I do that, it will be in a different branch.
