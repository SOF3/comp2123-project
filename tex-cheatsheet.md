# LaTeX cheatsheet
My style convention: line break on every fullstop or long line.
One line break is interpreted as one space;
two line breaks is is interpreted as one paragraph;

## Include another file
```tex
\input{fileNameWithoutExtension}
```

## Add a C++ code block
```tex
\begin{lstlisting}[style=Cpp]
// code here
\end{lstlisting}
```

## Include a C++ file
### Whole file
```tex
\cpp{fileNameInsideCppFolder.cpp}
```

### Range of lines in file
```tex
\cpprng{fileNameInsideCppFolder.cpp}{2}{5}
```

This includes 4 lines from line 2 to line 5.

## Unordered list
```tex
\begin{itemize}
	\item Item 1
	\item Item 2
	\item ...
\end{itemize}
```

## Ordered list
Use `enumerate` instead of `itemize`

## Section hierarchy
section -> subsection -> subsubsection -> paragraph -> subparagraph
Only \*section are included in the ToC

## Add an internal remark
```tex
\rem{Internal remarks here, will be rendered in PDF but can be easily disabled in submitted version}
```

## To link another section
`\href{sec:section-name}{Section name}` at the link source

`\label{sec:section-name}` at the link target

## To write a literal backslash
`\bs`, or `\bs{}`

## Span formatting
`\texttt{}` = `<code>`

`\textit{}` = `<i>`, used when you explicitly want it to be italic (e.g. special names)

`\emph{}` = `<em>`, also italic, but used when you want to emphasize
