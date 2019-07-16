#pragma once
#include <YoloMouse/Share/Root.hpp>

namespace Yolomouse
{
    /**/
    class CursorTools
    {
    public:
        /**/
        static CursorSize SizeToId( ULong size );
        static ULong      IdToSize( CursorSize id );
        static ULong      HandleToSize( HCURSOR hcursor );
        static Bool       IdVariationToIndex( Index& index, CursorId id, CursorVariation variation );
        static Bool       IndexToIdVariation( CursorId& id, CursorVariation& variation, Index index );
    };
}
