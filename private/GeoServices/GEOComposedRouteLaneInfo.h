//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding>
{
    NSMutableArray *_directions;
    _Bool _good;
    _Bool _hov;
    _Bool _preferred;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHOVLane;
@property(readonly, nonatomic) _Bool isPreferredLaneForManeuver;
@property(readonly, nonatomic) _Bool isLaneForManeuver;
@property(readonly, nonatomic) NSArray *directions;
@property(readonly, nonatomic) _Bool hasDirections;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneInfo:(id)arg1;

@end

