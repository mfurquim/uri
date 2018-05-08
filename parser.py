#!/bin/python3

import fileinput
from html.parser import HTMLParser

# create a subclass and override the handler methods
class URI_Problem_Parser(HTMLParser):
    description_state = 0
    entrada_state = 0
    saida_state = 0

    ex_entrada_state = 0
    ex_entrada_num = 0

    ex_saida_state = 0
    ex_saida_num = 0

    ex_entrada = [""]
    ex_saida = [""]
    entrada = ""
    saida = ""

    def handle_starttag(self, tag, attrs):
        print("Encountered a start tag:", tag)
        for attr in attrs:
           print("     attr:", attr)


    def handle_endtag(self, tag):
        print("Encountered an end tag :", tag)

    def handle_data(self, data):
        print("Encountered some data  :", data)

# instantiate the parser and fed it some HTML
with open('UOJ_1071.html') as fp:
    parser = URI_Problem_Parser()
    parser.feed("".join(fp.readlines(-1)))


