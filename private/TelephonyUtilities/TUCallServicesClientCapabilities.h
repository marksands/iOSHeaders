//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>
{
    _Bool _wantsCallDisconnectionOnInvalidation;
    _Bool _wantsFrequencyChangeNotifications;
    id <TUCallServicesClientCapabilitiesActions> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <TUCallServicesClientCapabilitiesActions> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool wantsFrequencyChangeNotifications; // @synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications;
@property(nonatomic) _Bool wantsCallDisconnectionOnInvalidation; // @synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;

@end

