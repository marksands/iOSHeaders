//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _NUGeometry : NSObject
{
    struct _NUVertex *_vertices;
    unsigned short *_indices;
    int _vcount;
    int _icount;
}

@property(readonly, nonatomic) int icount; // @synthesize icount=_icount;
@property(readonly, nonatomic) int vcount; // @synthesize vcount=_vcount;
@property(readonly, nonatomic) const unsigned short *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) const struct _NUVertex *vertices; // @synthesize vertices=_vertices;
- (int)addIndices:(const unsigned short *)arg1 count:(int)arg2 vbase:(int)arg3;
- (int)addVertices:(const struct _NUVertex *)arg1 count:(int)arg2;
- (void)dealloc;

@end

