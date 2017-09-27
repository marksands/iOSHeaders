//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLKUITimeLabelStyle.h"

#import "NSCopying.h"

@class NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying>
{
    NTKLayoutRule *_layoutRule;
}

+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 withBaselineY:(double)arg2 withFont:(id)arg3;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 withFont:(id)arg2;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1;
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 withBaselineY:(double)arg3 withFont:(id)arg4;
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 withBaselineY:(double)arg3;
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2;
@property(retain, nonatomic) NTKLayoutRule *layoutRule; // @synthesize layoutRule=_layoutRule;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

