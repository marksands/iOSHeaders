//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchableIndex, NSArray, NSData, NSString, NSURL;

@protocol CSSearchableIndexDelegate <NSObject>
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexSearchableItemsWithIdentifiers:(NSArray *)arg2 acknowledgementHandler:(void (^)(void))arg3;
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg2;

@optional
- (NSURL *)fileURLForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 inPlace:(_Bool)arg4 error:(out id *)arg5;
- (NSData *)dataForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 error:(out id *)arg4;
- (void)searchableIndexDidFinishThrottle:(CSSearchableIndex *)arg1;
- (void)searchableIndexDidThrottle:(CSSearchableIndex *)arg1;
@end

