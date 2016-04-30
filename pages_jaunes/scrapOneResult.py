#!/usr/bin/python
# -*- coding: utf-8 -*-

### semenium to navigate via browser
from selenium import webdriver
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from selenium.common.exceptions import WebDriverException
### time to sleep
import time


### Open www.pagesjaunes.fr
browser = webdriver.Firefox()
browser.maximize_window()
browser.get("http://www.pagesjaunes.fr/pros/detail?bloc_id=01543510000001C0001&no_sequence=1&code_rubrique=30451400")

### Wait until the first result page is ready
time.sleep(5)

### FAIL : ElementNotVisibleException: Message: Element is not currently visible and so may not be interacted with
#~ element = browser.find_element_by_css_selector(".icon.ic-lt-arrow-down")
#~ element.click()

### Workaround : via JS
#~ browser.execute_script("document.querySelectorAll('.icon.icon-lt-arrow-down')[1].click()")
browser.execute_script("document.querySelectorAll('.link-uncollapse.pj-link')[1].click()")
time.sleep(2)
browser.execute_script("document.querySelectorAll('.link-uncollapse.pj-link')[2].click()")
time.sleep(2)
#~ print browser.page_source.encode("utf-8")


societe = browser.find_element_by_xpath('//div[@class="bloc-denom"]/h1')
print societe.text

