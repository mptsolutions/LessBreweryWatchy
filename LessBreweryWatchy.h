#ifndef LESSBREWERY_WATCHY_H
#define LESSBREWERY_WATCHY_H

#include <Watchy.h>
#include "NoticiaText_BoldItalic9pt7b.h"
#include "NoticiaText_BoldItalic20pt7b.h"
#include "NoticiaText_Regular9pt7b.h"

class LessBreweryWatchy : public Watchy{
    public:
        LessBreweryWatchy();
        void drawWatchFace();
};

#endif
