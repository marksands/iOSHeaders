//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject
{
    unsigned long long _status;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1;

@end

