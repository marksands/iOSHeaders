//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TUVideoCallAttributes : NSObject <NSSecureCoding>
{
    long long _remoteCameraOrientation;
    long long _localVideoContextSlotIdentifier;
    long long _remoteVideoContextSlotIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long remoteVideoContextSlotIdentifier; // @synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier;
@property(nonatomic) long long localVideoContextSlotIdentifier; // @synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier;
@property(nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToVideoCallAttributes:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

