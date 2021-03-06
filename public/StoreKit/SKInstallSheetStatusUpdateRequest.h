//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKInstallSheetStatusUpdateRequest : SKRequest
{
    _Bool _isInstallSheetOpen;
    CDUnknownBlockType _completionHandler;
    NSString *_bundleId;
}

@property(nonatomic) _Bool isInstallSheetOpen; // @synthesize isInstallSheetOpen=_isInstallSheetOpen;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

