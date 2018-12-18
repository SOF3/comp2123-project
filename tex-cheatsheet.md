# LaTeX cheatsheet
## Add a C++ code block
```tex
\begin{lstlisting}[style=Cpp]
// code here
\end{lstlisting}
```

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
