//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFEraseDeviceRequest : CATTaskRequest
{
    unsigned long long _eraseDeviceType;
    unsigned long long _dataResetOptions;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long dataResetOptions; // @synthesize dataResetOptions=_dataResetOptions;
@property(nonatomic) unsigned long long eraseDeviceType; // @synthesize eraseDeviceType=_eraseDeviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

