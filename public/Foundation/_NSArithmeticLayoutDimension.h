//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSLayoutDimension.h>

#import "NSCompositeLayoutAnchor.h"

@class NSArray;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutDimension *_rootLayoutDimension;
    double _multiplier;
    double _constant;
}

@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)_expressionInContext:(CDStruct_6db0658e)arg1;
- (id)_nearestAncestorLayoutItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;
- (id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3;

@end

