#!/usr/bin/python
# -*- coding: utf-8 -*-

### semenium to navigate via browser
from selenium import webdriver
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from selenium.common.exceptions import WebDriverException
from selenium.common.exceptions import NoSuchElementException
### time to sleep
import time
### convert string to dictionary (we'll be dealing with nested dictionaries)
import ast





def getLinksFromOneResultPage():
	elements = browser.find_elements_by_css_selector(".bi-pos-links.pj-lb.pj-link")
	for element in elements:
		attrs = browser.execute_script('\
		var items = {}; \
		for (index = 0; index < arguments[0].attributes.length; ++index) \
			{ items[arguments[0].attributes[index].name] = arguments[0].attributes[index].value }; \
		return items;', element)
		"""
		This script returns for each element a structure similar to this :
		{
			u'title': u'Espace (SARL)', 
			u'data-pjstats': u'{"idTag":"DENOMINATION-EXACTE","pos":6,"genreBloc":"1"}', 
			u'data-pjlb': u'{"keepspan":0,"url":"L3Byb3MvMDkxODE5MDg=","ucod":"b64u8"}', 
			u'data-pjsearchctx-sethref': u'', 
			u'href': u'#', 
			u'class': u'bi-pos-links pj-lb pj-link'
		}
		And the "url" value is a base64-encoded link to "More info" page which we want to scrap.
		Links can be full or partial, but that's easy to find out : wheather they start with http or not.
		"""
		substr = attrs['data-pjlb']
		subdict = ast.literal_eval(substr) # Convert a value of the dictionary to a new subdictionary
		links.append(subdict['url'].decode('base64')) # Find the value of "url" in subdictionary








### Open www.pagesjaunes.fr
browser = webdriver.Firefox()
browser.maximize_window()
browser.get("http://www.pagesjaunes.fr")

### Do the research
elem = browser.find_element_by_id("pj_search_quoiqui") #  Quoi, qui?
elem.send_keys("garage")
elem = browser.find_element_by_id("pj_search_ou")  # Où?
elem.send_keys("valence-26" + Keys.RETURN)

### Wait until the first result page is ready
time.sleep(5)

### Print total number of results
totalNbResultsElem = browser.find_element_by_xpath("/html/body/section/div/div/div[1]/div[1]/div/span/strong")
print "Elements found : %s" % totalNbResultsElem.text

### Here we'll store links to pages to open
links = []


while True:
	time.sleep(3)
	getLinksFromOneResultPage()

	try: 
		browser.find_element_by_css_selector(".disabled.next")
		print "NO MORE PAGES, END"
		break
	except NoSuchElementException:
		browser.find_element_by_xpath("//*[contains(text(), 'Suivant')]").click()
		print "NEXT PAGE..."






### Prepend the missing part of link if partial
for n, link in enumerate(links):
	if not link.startswith("http"):
		links[n] =  'http://www.pagesjaunes.fr' + link


### Open "More info" page in new tab
for n, link in enumerate(links):
	print "%d : %s" % (n+1, link)
"""
	#~ main_window = browser.current_window_handle
	#~ body = browser.find_element_by_tag_name("body")
	#~ body.send_keys(Keys.CONTROL + 't')
	#~ browser.get(link)
"""
browser.quit()