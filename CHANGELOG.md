# Release 0.3.18 (2008-06-15)
- Adding Run button; By default tests do not automatically run on start
- Added AutoRun setting

# Release 0.3.17 (2008-06-09)
- Updating RunTests.sh

# Release 0.3.16 (2008-06-09)
- Rebuilding from 3.0 GM
- Setting debug variables in main directly instead of from setenv (which doesn't seem to work)

# Release 0.3.14 (2008-06-08)
- Creating separate iPhone 3.0 builds

# Release 0.3.12 (2008-05-25)
- Creating iPhone static library with device and simulator platforms

# Release 0.3.11 (2008-05-20)
- Fixing version number
- Creating separate version with CoreLocation linked

# Release 0.3.10 (2008-05-20)
- Fix namespace issue

# Release 0.3.9 (2008-05-19)

## 2008-05-19
- 3.0 compatibility fixes
- Added GHUITestCase
- Added shouldRunOnMainThread to test case, and if present and YES will run the tests on the main thread

## 2008-05-05
- (iPhone) Added select/deselect to iPhone test UI
- (iPhone) Fixed auto-scroll if you manually scroll (will stop auto-scrolling)

# Release 0.3.8 (2008-04-28)

## 2008-04-28
- Removed button enabled cell from Mac OS X view; Makes NSOutlineView really slow; Need to figure out how to do it right

# Release 0.3.7 (2008-04-26)

## 2008-04-20
- CLLocationManager mock
- Fixed afterDelay not using delay value
- Select/unselect (ignore) tests in Mac OSX view
- Added initWithTestSuite to GHTestApp for custom suites from test main

## 2008-04-16
- Adding ability to set run loops in async test case
- Adding more methods to NSURLConnection mock

# Release 0.3.6 (2008-04-13)

## 2008-04-13
- Adding swizzle methods for mocking
- Adding NSLocale mock
- Adding NSURLConnection, NSHTTPURLResponse mocks
- Fix bug with setUpClass/tearDownClass not working for single command line tests
- Setting Installation Directory to @rpath (Thanks chapados), so you can embed the framework with your app
- Sorting tests by class name (as well as method name)

# Release 0.3.4 (2009-04-11)

## 2008-04-11
- Added Doxygen support

## 2008-04-08
- Added GHAsyncTestCase for asynchronous tests (seems really complex :/, might have gone mental on it)
- Supporting streaming logging with GHTestLog(...)
- GHUNIT_VERSION from xcconfig in Info plists and shown in test GUI
- Mocks for NSURLConnection and NSHTTPURLResponse
- Added setUpClass/tearDownClass for GHTestCase
- Added currentSelector property for GHTestCase

# Release 0.3.3 (2009-04-08)

## 2009-04-08
- Removed GTMLogger and GHLogger; Not used in Release and potentially can 
  conflict with project logging with iPhone static library

# Release 0.3.2 (2009-04-05)

## 2009-04-05
- Building as static library for iPhone
- Adding in support for running single test case or test

# Release 0.3.1

## 2009-03-22
- Renamed TEST_CLI to GHUNIT_CLI
- Removing main from target; Projects should specify their own test target main.
- Added test for special registered test case classes

## 2009-03-21
- Renamed Examples/MyTestable to MyTestable-IPhone

## 2009-03-19
- Commented a bunch of the code
- Renamed GHTestUtils to GHTesting


