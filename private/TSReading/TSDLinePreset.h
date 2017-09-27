//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject
{
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
    TSDStroke *mStroke;
}

+ (id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;
@property(readonly, copy, nonatomic) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(readonly, copy, nonatomic) TSDLineEnd *tailLineEnd; // @synthesize tailLineEnd=mTailLineEnd;
@property(readonly, copy, nonatomic) TSDLineEnd *headLineEnd; // @synthesize headLineEnd=mHeadLineEnd;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;

@end

