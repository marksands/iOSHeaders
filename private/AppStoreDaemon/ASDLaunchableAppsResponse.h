//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse
{
    NSArray *_bundleIDs;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIDs:(id)arg1;
- (id)init;

// Remaining properties
@property _Bool success; // @dynamic success;

@end

