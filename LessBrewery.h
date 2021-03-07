#ifndef LESSBREWERY_H
#define LESSBREWERY_H

#include <Watchy.h>
#include "NoticiaText_BoldItalic9pt7b.h"
#include "NoticiaText_BoldItalic20pt7b.h"
#include "NoticiaText_Regular9pt7b.h"

class LessBrewery : public Watchy{
    public:
        LessBrewery();
        void drawWatchFace();
};

#endif
