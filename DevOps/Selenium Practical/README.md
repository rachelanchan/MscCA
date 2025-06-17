## DevOps Practical | Selenium Automation Test - Mercury Tours

This is a basic Selenium test in Java using ChromeDriver.

### What It Does
- Launches a Chrome browser
- Opens `http://demo.guru99.com/test/newtours/`
- Compares the page title to `"Welcome: Mercury Tours"`
- Prints `"Test Passed"` or `"Test Failed"` based on the comparison
- Closes the browser

### Requirements
- Java JDK (17+ recommended)
- Chrome browser
- ChromeDriver (compatible with your Chrome version)
- Selenium Java libraries (version 4.17.0 used here)

### Notes
- Update the path to `chromedriver.exe` in the Java file if needed.
- Download Selenium `.jar` files from [selenium.dev](https://www.selenium.dev/downloads/) and place them in a `lib/` folder.
