#!/usr/bin/python
# -*- coding: utf-8 -*-

### semenium to navigate via browser
from selenium import webdriver
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from selenium.common.exceptions import WebDriverException
### time to sleep
import time
### convert string to dictionary (we'll be dealing with nested dictionaries)
import ast

### Open www.pagesjaunes.fr
browser = webdriver.Firefox()
browser.maximize_window()
browser.get("http://www.pagesjaunes.fr/pros/00607725")

### Wait until the first result page is ready
time.sleep(5)

print browser.page_source.encode("utf-8")
browser.quit()