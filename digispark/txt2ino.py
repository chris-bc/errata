#!/usr/bin/python

import sys;

if len(sys.argv) != 2:
    print("Usage: " + sys.argv[0] + " <textFile>");
    exit(1);

with open(sys.argv[1]) as file:
    for line in file:
        if len(line.rstrip()) > 0:
            line = line.replace("\"", "\\\"");
            print("DigiKeyboard.println(\"" + line.rstrip() + "\");");
        print("DigiKeyboard.sendKeyStroke(KEY_ENTER);");

