//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPChangeDetails, NSArray, NSString;

@protocol MPMutableIdentifierListSection <NSObject>
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
- (void)applyChanges:(MPChangeDetails *)arg1 itemLookupBlock:(NSString * (^)(long long))arg2;
- (void)updateItem:(NSString *)arg1;
- (void)removeItem:(NSString *)arg1;
- (void)moveItemToTail:(NSString *)arg1;
- (void)moveItem:(NSString *)arg1 afterItem:(NSString *)arg2;
- (void)moveItemToHead:(NSString *)arg1;
- (void)insertItemsAtTail:(NSArray *)arg1;
- (void)insertItems:(NSArray *)arg1 afterItem:(NSString *)arg2;
- (void)insertItemsAtHead:(NSArray *)arg1;
@end

