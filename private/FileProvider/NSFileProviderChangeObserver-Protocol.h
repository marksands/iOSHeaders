//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSError;

@protocol NSFileProviderChangeObserver <NSObject>
- (void)finishEnumeratingWithError:(NSError *)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(NSData *)arg1 moreComing:(_Bool)arg2;
- (void)didDeleteItemsWithIdentifiers:(NSArray *)arg1;
- (void)didUpdateItems:(NSArray *)arg1;
@end

