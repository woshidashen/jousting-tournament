# The Fair House of Faintree

Welcome good sers and m'lady. This is our GitHub repository, where we will store all our documentation and code.
First things first, what is Git?

Git is a version control system. It takes snapshots of the repository (i.e. directory) and keeps track of the changes in each
snapshot. Using git we will each have a local copy of the filesystem stored at GitHub.com, our shared 'repository'.
We can 'pull' the latest version of the repo, 'branch' off so we dont screw up the 'master' branch (stuff that works), modify files, 'commit' the changes to a snapshot, and 'push' the changes back upstream to the online repo. 

Git was created as a linux program by Linus Torvalds himself (sorta) and the name is a reference to how he feels about himself (lol).
It is fundamentally a commmand line program, executed by commands such as 
```
git clone https://github.com/House-of-Faintree/jousting-tournament
git commit
git push
```

This README file is created in any new repository and acts as the front page with changelogs, major contributors etc but for us we will leave it as instructions on Git, and the changelog goes in the Code/Code.md file.

##Common usage:
We first need to create the repo locally. Download the github for windows/linux/mac first, then run the GUI or shell, whichever you prefer.
Click the plus sign on the top left, and add the repository using the [url for our repo](https://github.com/House-of-Faintree/jousting-tournament). 

Using the GitHub GUI is very straight forward. After you have cloned your repo copy, you can navigate to it using windows explorer.
the default location of the cloned copy is in Users/YOU/Documents/GitHub/. 

To Begin with the very basic operation of Git and to understand how it works, you should sign the document titled SignThis.md.
Open the file in a text editor (notepad works, but for anything involving code I like atom, n its made by the same team as GitHub itself!)
and sign your name, then save file. Open up the github UI again and you will notice that the file has appeared in the main window. It will show you that there have been changes made etc. 

The critical thing about git is that you can make changes without affecting the shit that already works. Tick the file, and underneath add a summary. This is the name of the change that everyone will see in the changelog, so this should ALWAYS be meaningful. Describe the change briefly, and press Commit. Then we Sync the local copy with the remote copy. The sync button is on the top right under the gear icon.

###Branching in Git

What makes Git so powerful is that we can make 'Branches'. The 'Master' branch should and WILL always contain the final, working version of all files. Each time we make a change to our code, we need to create a 'branch'. The button is located near the top left of the github GUI. For example:

Say we have a working function for sending a pwm signal to the motors, causing our robot to move predictably in manual mode. We then want to implement a control system loop over the encoder outputs so we can implement assist mode. We do not simply modify the master branch of our code, lest we break something and have to find out what happened through our commit history.
We create a branch, descriptively called "control-system-implementation" and play around on that branch until we know what works etc. Then finally we submit a 'pull request' which basically lets the rest of the team know that the feature is ready to be integrated with the 'master' branch. If we review the code and notice that it needs to be changed, we can do so, commit the new changes, and talk about it all on github's forum. Then the project maintainer will merge the master and feature branch, which in this case can be any of us, I think.
However we should not merge until everyone is satisfied, or until the software leader/documentation leader/ etc approves the change.

Git is awesome and I can talk more, but here are some awesome resources to read which may or may not be better than my attempt at an explanation:
*[This one is awesome for learning the git shell commands, which I personally love, but just generally provides a good description of all the terms I've talked about here such as push pull commit branch etc.](https://www.atlassian.com/git/tutorials/setting-up-a-repository)
*[The official GitHub for Desktop guides](https://help.github.com/desktop/guides/)
*[Basics of Git](https://git-scm.com/book/en/v2/Getting-Started-Git-Basics)
