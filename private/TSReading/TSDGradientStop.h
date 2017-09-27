//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "TSDMixing.h"

@class TSUColor;

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor *mColor;
    double mFraction;
    double mInflection;
}

+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;
+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2;
@property(readonly, nonatomic) double inflection; // @synthesize inflection=mInflection;
@property(readonly, nonatomic) double fraction; // @synthesize fraction=mFraction;
@property(readonly, copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)gradientStopWithInflection:(double)arg1;
- (id)gradientStopWithColor:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_setInflection:(double)arg1;
- (void)p_setFraction:(double)arg1;
- (void)p_setColor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithGradientStop:(id)arg1;
- (id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;
- (id)initWithColor:(id)arg1 fraction:(double)arg2;

@end

