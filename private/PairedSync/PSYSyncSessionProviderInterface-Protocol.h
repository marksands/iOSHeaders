//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PSYSyncSessionProviderInterface <NSObject>
- (oneway void)requestActiveSyncSessionWithCompletion:(void (^)(PSYSyncSession *, NSSet *, NSError *))arg1;
- (oneway void)checkin:(void (^)(_Bool))arg1;
@end

