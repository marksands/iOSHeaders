//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding>
{
    int _direction;
    float _angle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) float angle;
@property(readonly, nonatomic) int direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneArrowHead:(id)arg1;

@end

