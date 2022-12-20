#!/usr/bin/python3
def safe_function(fct, *args):
    import sys
    try:
        return fct(*args)
    except Exception as txt:
        print("Exception: "+str(txt), file=sys.stderr)
        return None
