//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetPersonalHotspotEnabledRequest : CATTaskRequest
{
    _Bool _enabled;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

