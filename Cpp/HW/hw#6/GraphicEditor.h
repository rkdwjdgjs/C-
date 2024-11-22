#include "Ui.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include <vector>

#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

class GraphicEditor {
	vector<Shape*> v;
//	Shape* pStart;
//	Shape* pLast;
public:
	GraphicEditor();
	~GraphicEditor();
	void Start();;
	void printInsert();
	void printRemove();
	void printAll();
};

#endif