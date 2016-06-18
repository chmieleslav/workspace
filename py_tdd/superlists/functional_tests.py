from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities

firefox_capabilities = DesiredCapabilities.FIREFOX
firefox_capabilities['marionette'] = True

browser = webdriver.Firefox(capabilities=firefox_capabilities)
browser.get('http://localhost:8000')
assert 'Django' in browser.title
