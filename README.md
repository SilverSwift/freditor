
# freditor

## About

Freditor is a free text editor. It is QScintilla based and inspired by Notepad++. The main goal of reinventing the wheel is to make UX users got used to available not exclussively on Windows but any (desktop) platform.

## Frameworks and dependencies
**Qt 6.3.1** currently is being used for development.

**QScintilla 2.14.0** currently is being used as a dependency. 

Download link for QScintilla  is [here](https://www.riverbankcomputing.com/static/Downloads/QScintilla/2.14.0/QScintilla_src-2.14.0.zip).

QScintilla is built as a third party lib and attached to the project instead of being installed to a Qt dir. 

QScintilla forces to choose widgets instead of Qt Quick. Which means there won't be support on mobile platfroms... at least before version 1.0 release. 

## Contributing
If you found it worthy and you would like to contribute please use ["fork and pull request" workflow](https://docs.github.com/en/get-started/exploring-projects-on-github/contributing-to-a-project).
