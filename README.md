# cpp_qa

## How to create the HTML structur? (Linux)
1) clone **cpp_qa** repository
2) init the **CppCodeInHTMLEmbedding** repository:
  * `git submodule init`
3) use python virtual envitonment:
  * `source ./CppCodeInHTMLEmbedding/venv/bin/activate`
4) download necessary python requirements:
  * `python3 -m pip install -r requirements.txt`
5) run parser:
  * `python3 CppCodeInHTMLEmbedding/parser.py`

## How to ad new qa?
1) create new project's subdirectory in the sources tree e.g ./src/../project_dir
2) attach necessary files
3) provide online compilator link and result in the README.md file

### The README.md structure

\*\*result\*\*:  
\`\`\`   
RESULT  
\`\`\`  
\*\*godbolt\*\*: link
