//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTSource.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTSourceLocationVisit : RTSource <NSCopying, NSSecureCoding>
{
    long long _locationOfInterestType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterestType:(long long)arg1;

@end

