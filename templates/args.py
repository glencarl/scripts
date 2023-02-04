#!/usr/bin/env python

"""
scriptname

:command:`scriptname [-h] file`

.. program:: scriptname

.. cmdoption:: -h, --help

    Show the help message which lists the command line options.

.. cmdoption:: file

    <details of the file>

"""

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]
    import argparse
    parser = argparse.ArgumentParser(description='''
                %(prog)s is a test script
                ''',
                usage='use "%(prog)s [OPTIONS] files"')
    parser.add_argument('file', nargs='?', default=None,
                      help='''optional file entry.
                           (default: %(default)s)''')
    args = parser.parse_args(argv)

    if not args.file:
        parser.print_help()

