//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface BRCContainerCellularSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id <NSObject> _accountDidChangeNotificationObserver;
}

+ (id)containerCellularSettings;
+ (id)_notifAccountStore;
- (void).cxx_destruct;
- (_Bool)isCellularEnabledForContainerID:(id)arg1;
- (_Bool)_isCellularEnabledForBundleID:(id)arg1;
- (_Bool)_isCellularEnabledForDocumentsAndData;
- (void)dealloc;
- (id)init;
- (void)_accountDidChange;

@end

