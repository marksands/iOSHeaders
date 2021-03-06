//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface SPComplicationData : NSObject <NSSecureCoding>
{
    NSDate *_timestamp;
    double _timeToLive;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

