//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsOperation : CKDOperation
{
    long long _discoverable;
    NSString *_applicationBundleID;
}

+ (long long)isPredominatelyDownload;
@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (void).cxx_destruct;
- (void)main;
- (_Bool)shouldCheckAppVersion;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

