#include "Ui.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
public:
	GraphicEditor();
	void Start();;
	void printInsert();
	void printRemove();
	void printAll();
};

#endif