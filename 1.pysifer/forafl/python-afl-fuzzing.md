Source: https://alexgaynor.net/2015/apr/13/introduction-to-fuzzing-in-python-with-afl/

This is how I ran the script. On macOS, do the following:
* brew install afl-fuzz
* brew install virtualenv
* pip install python-afl --user
* SL=/System/Library; PL=com.apple.ReportCrash
* launchctl unload -w ${SL}/LaunchAgents/${PL}.plist
* sudo launchctl unload -w ${SL}/LaunchDaemons/${PL}.Root.plist

In order to use it (in my case):

    py-afl-fuzz -o ~/Desktop/results/ -i ~/Desktop/examples/ -- /usr/bin/python ~/Desktop/mylittleaflfuzzer.py

Make sure your terminal is 80x25 or bigger. To quit, hit control-c.

After you're done with everything:
* SL=/System/Library; PL=com.apple.ReportCrash
* launchctl load -w ${SL}/LaunchAgents/${PL}.plist
* sudo launchctl load -w ${SL}/LaunchDaemons/${PL}.Root.plist

Reference:
* https://cryptography.io/en/latest/_modules/cryptography/hazmat/primitives/asymmetric/utils/
* http://lcamtuf.coredump.cx/afl/status_screen.txt (included)
