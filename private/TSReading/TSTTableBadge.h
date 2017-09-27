//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSUColor;

@interface TSTTableBadge : NSObject
{
    int _badgeType;
    TSUColor *_color;
    double _viewScale;
    struct CGRect _frame;
}

+ (id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(struct CGRect)arg4;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) TSUColor *color; // @synthesize color=_color;
@property(nonatomic) int badgeType; // @synthesize badgeType=_badgeType;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;

@end

